#include "UiStudentMain.h"
#include <qDebug>
#include <QWidget>
#include "UiStudentOrder.h"
#include "GlobalDataDefination.h"
#include <qmessagebox.h>

UiStudentMain::UiStudentMain(int studentId, QWidget *parent)
	: UiViewButtons(parent)
{
	this->studentId = studentId;
	this->setWindowIcon(QIcon(":/winicon/Resources/student.png"));
	QString myname = sql.getStudentName(studentId);
	myOrderSeclectCmd = QStringLiteral("select * from ViewOrder where 学号=%1").arg(studentId);
	displayCmd = selectOrderCmd;
	// 显示table数据
	displayViewTable(displayCmd, selectOrderHeader);
	// 文字信息
	setWindowTitle(QStringLiteral("%1同学").arg(myname));
	setLabelHint(QStringLiteral("预约信息："));
	setRadioText(QStringLiteral("仅显示我的预约"));
	hideRadioButton(false);
	setButtonsText(QStringLiteral("撤回预约"), QStringLiteral("新建预约"), QStringLiteral("退出登录"));
}

UiStudentMain::~UiStudentMain()
{
}

/**
* @return void
* 点击撤销预约按钮
*/
void UiStudentMain::onClickButton1() {
	int status = sql.getOrderStatus(this->selectedId); // 1审核中，2通过，3未通过，4已取消
	if (studentId != this->selectedStudentId) {
		QMessageBox::warning(this, QStringLiteral("状态错误"), QStringLiteral("不能撤销别人提交的申请！"));
		return;
	}
	if (status != 1) {
		QMessageBox::warning(this, QStringLiteral("状态错误"), QStringLiteral("未在审核状态无法撤销！"));
	}else{
		if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确认撤销该条预约？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
		{
			if (sql.execQuery(QString("update BookingOrder set status = 4 where id = %1").arg(this->selectedId)))
			{
				QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("撤销成功！"));
				// 更新显示table数据
				displayViewTable(displayCmd, selectOrderHeader);
			} 
			else{
				QMessageBox::critical(this, QStringLiteral("提示"), QStringLiteral("撤销失败！"));
			}
		}
	}

	return;
}

/**
* @return void
* 学生点击新建预约按钮
*/
void UiStudentMain::onClickButton2() {
	UiStudentOrder *stuOrder = new UiStudentOrder(studentId);
	stuOrder->setAttribute(Qt::WA_DeleteOnClose);
	connect(stuOrder, &UiStudentOrder::signalLoginout, [this, stuOrder]() {
		// 更新显示table数据
		displayViewTable(displayCmd, selectOrderHeader);
		this->show();
	});
	stuOrder->setWindowModality(Qt::ApplicationModal);
	//this->hide();
	stuOrder->show();
	return;
}

/**
* @return void
* 点击退出按钮
*/
void UiStudentMain::onClickButton3() {
	emit signalLoginout();
	this->close();
	return;
}

/**
* @return void
*/
void UiStudentMain::onClickRadioButton(bool checked) {
	if (checked) {
		displayCmd = myOrderSeclectCmd;
	}else{
		displayCmd = selectOrderCmd;
	}
	// 更新显示table数据
	displayViewTable(displayCmd, selectOrderHeader);
	return;
}



#include "UiTeacherMain.h"
#include <qDebug>
#include "GlobalDataDefination.h"
#include <QMessageBox>

UiTeacherMain::UiTeacherMain(int teacherId, QWidget *parent)
	: UiViewButtons(parent)
{
	this->id = teacherId;
	this->setWindowIcon(QIcon(":/winicon/Resources/teacher.png"));
	myOrderSeclectCmd = QStringLiteral("select * from ViewOrder where 状态='审核中'");
	displayCmd = selectOrderCmd;
	QString myname = sql.getTeacherName(id);
	// 显示table数据
	displayViewTable(selectOrderCmd, selectOrderHeader);
	// 文字信息
	setWindowTitle(QStringLiteral("%1老师").arg(myname));
	setLabelHint(QStringLiteral("预约信息："));
	setRadioText(QStringLiteral("仅显示待审核"));
	hideRadioButton(false);
	setButtonsText(QStringLiteral("通过"), QStringLiteral("拒绝"), QStringLiteral("退出"));
}

UiTeacherMain::~UiTeacherMain()
{
}

/**
* @return void 通过
*/
void UiTeacherMain::onClickButton1() {
	int status = sql.getOrderStatus(this->selectedId); // 1审核中，2通过，3未通过，4已取消
	if (status != 1) {
		QMessageBox::warning(this, QStringLiteral("状态错误"), QStringLiteral("未在审核状态无法通过！"));
	}
	else {
		if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确认通过该条预约？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
		{
			if (sql.execQuery(QString("update BookingOrder set status = 2, teacherid = %1 where id = %2").arg(this->id).arg(this->selectedId)))
			{
				QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("审核完成！"));
				// 更新显示table数据
				displayViewTable(displayCmd, selectOrderHeader);
			}
		}
	}
	return;
}

/**
* @return void 拒绝
*/
void UiTeacherMain::onClickButton2() {
	int status = sql.getOrderStatus(this->selectedId); // 1审核中，2通过，3未通过，4已取消
	if (status != 1) {
		QMessageBox::warning(this, QStringLiteral("状态错误"), QStringLiteral("未在审核状态无法拒绝！"));
	}
	else {
		if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确认拒绝该条预约？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
		{
			if (sql.execQuery(QString("update BookingOrder set status = 3, teacherid = %1 where id = %2").arg(this->id).arg(this->selectedId)))
			{
				QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("审核完成！"));
				// 更新显示table数据
				displayViewTable(displayCmd, selectOrderHeader);
			}
		}
	}
	return;
}

/**
* @return void 退出
*/
void UiTeacherMain::onClickButton3() {
	emit signalLoginout();
	this->close();
	return;
}

/**
* @return void
*/
void UiTeacherMain::onClickRadioButton(bool checked) {
	if (checked) {
		displayCmd = myOrderSeclectCmd;
	}
	else {
		displayCmd = selectOrderCmd;
	}
	// 更新显示table数据
	displayViewTable(displayCmd, selectOrderHeader);
	return;
}
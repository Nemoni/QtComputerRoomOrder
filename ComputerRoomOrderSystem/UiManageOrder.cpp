#include "UiManageOrder.h"
#include "GlobalDataDefination.h"
#include <QMessageBox>

UiManageOrder::UiManageOrder(QWidget *parent)
	: UiViewButtons(parent)
{
	this->setWindowIcon(QIcon(":/winicon/Resources/manager.png"));
	// 显示table数据
	displayViewTable(selectOrderCmd, selectOrderHeader);
	// 文字信息
	setWindowTitle(QStringLiteral("预约管理")); // TODO: 显示老师姓名
	setLabelHint(QStringLiteral("预约信息:"));
	//setRadioText(QStringLiteral("仅显示待审核"));
	hideRadioButton(true);
	setButtonsText(QStringLiteral("删除"), QStringLiteral("清空"), QStringLiteral("返回"));
}

UiManageOrder::~UiManageOrder()
{
}

/**
* @return void 删除
*/
void UiManageOrder::onClickButton1() {
	if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确认删除该条预约？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
	{
		if (sql.execQuery(QString("delete from BookingOrder where id = %1").arg(this->selectedId)))
		{
			QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("删除成功！"));
			// 更新显示table数据
			displayViewTable(selectOrderCmd, selectOrderHeader);
		}
		else {
			QMessageBox::critical(this, QStringLiteral("提示"), QStringLiteral("删除失败！"));
		}
	}
	return;
}

/**
* @return void 清空
*/
void UiManageOrder::onClickButton2() {
	if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确定清空全部预约记录？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
	{
		if (sql.execQuery(QString("delete from BookingOrder")))
		{
			QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("清空完成！"));
			// 更新显示table数据
			displayViewTable(selectOrderCmd, selectOrderHeader);
		}
		else {
			QMessageBox::critical(this, QStringLiteral("提示"), QStringLiteral("清空失败！"));
		}
	}
	return;
}

/**
* @return void 返回
*/
void UiManageOrder::onClickButton3() {
	emit signalLoginout();
	this->close();
	return;
}

void UiManageOrder::closeEvent(QCloseEvent *event)
{
	emit signalLoginout();
	UiViewButtons::closeEvent(event);
}

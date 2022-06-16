#include "UiManageOrder.h"
#include "GlobalDataDefination.h"
#include <QMessageBox>

UiManageOrder::UiManageOrder(QWidget *parent)
	: UiViewButtons(parent)
{
	this->setWindowIcon(QIcon(":/winicon/Resources/manager.png"));
	// ��ʾtable����
	displayViewTable(selectOrderCmd, selectOrderHeader);
	// ������Ϣ
	setWindowTitle(QStringLiteral("ԤԼ����")); // TODO: ��ʾ��ʦ����
	setLabelHint(QStringLiteral("ԤԼ��Ϣ:"));
	//setRadioText(QStringLiteral("����ʾ�����"));
	hideRadioButton(true);
	setButtonsText(QStringLiteral("ɾ��"), QStringLiteral("���"), QStringLiteral("����"));
}

UiManageOrder::~UiManageOrder()
{
}

/**
* @return void ɾ��
*/
void UiManageOrder::onClickButton1() {
	if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("��ʾ"), QStringLiteral("ȷ��ɾ������ԤԼ��"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
	{
		if (sql.execQuery(QString("delete from BookingOrder where id = %1").arg(this->selectedId)))
		{
			QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("ɾ���ɹ���"));
			// ������ʾtable����
			displayViewTable(selectOrderCmd, selectOrderHeader);
		}
		else {
			QMessageBox::critical(this, QStringLiteral("��ʾ"), QStringLiteral("ɾ��ʧ�ܣ�"));
		}
	}
	return;
}

/**
* @return void ���
*/
void UiManageOrder::onClickButton2() {
	if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("��ʾ"), QStringLiteral("ȷ�����ȫ��ԤԼ��¼��"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
	{
		if (sql.execQuery(QString("delete from BookingOrder")))
		{
			QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("�����ɣ�"));
			// ������ʾtable����
			displayViewTable(selectOrderCmd, selectOrderHeader);
		}
		else {
			QMessageBox::critical(this, QStringLiteral("��ʾ"), QStringLiteral("���ʧ�ܣ�"));
		}
	}
	return;
}

/**
* @return void ����
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

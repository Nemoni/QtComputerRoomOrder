#include "UiTeacherMain.h"
#include <qDebug>
#include "GlobalDataDefination.h"
#include <QMessageBox>

UiTeacherMain::UiTeacherMain(int teacherId, QWidget *parent)
	: UiViewButtons(parent)
{
	this->id = teacherId;
	this->setWindowIcon(QIcon(":/winicon/Resources/teacher.png"));
	myOrderSeclectCmd = QStringLiteral("select * from ViewOrder where ״̬='�����'");
	displayCmd = selectOrderCmd;
	QString myname = sql.getTeacherName(id);
	// ��ʾtable����
	displayViewTable(selectOrderCmd, selectOrderHeader);
	// ������Ϣ
	setWindowTitle(QStringLiteral("%1��ʦ").arg(myname));
	setLabelHint(QStringLiteral("ԤԼ��Ϣ��"));
	setRadioText(QStringLiteral("����ʾ�����"));
	hideRadioButton(false);
	setButtonsText(QStringLiteral("ͨ��"), QStringLiteral("�ܾ�"), QStringLiteral("�˳�"));
}

UiTeacherMain::~UiTeacherMain()
{
}

/**
* @return void ͨ��
*/
void UiTeacherMain::onClickButton1() {
	int status = sql.getOrderStatus(this->selectedId); // 1����У�2ͨ����3δͨ����4��ȡ��
	if (status != 1) {
		QMessageBox::warning(this, QStringLiteral("״̬����"), QStringLiteral("δ�����״̬�޷�ͨ����"));
	}
	else {
		if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("��ʾ"), QStringLiteral("ȷ��ͨ������ԤԼ��"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
		{
			if (sql.execQuery(QString("update BookingOrder set status = 2, teacherid = %1 where id = %2").arg(this->id).arg(this->selectedId)))
			{
				QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("�����ɣ�"));
				// ������ʾtable����
				displayViewTable(displayCmd, selectOrderHeader);
			}
		}
	}
	return;
}

/**
* @return void �ܾ�
*/
void UiTeacherMain::onClickButton2() {
	int status = sql.getOrderStatus(this->selectedId); // 1����У�2ͨ����3δͨ����4��ȡ��
	if (status != 1) {
		QMessageBox::warning(this, QStringLiteral("״̬����"), QStringLiteral("δ�����״̬�޷��ܾ���"));
	}
	else {
		if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("��ʾ"), QStringLiteral("ȷ�Ͼܾ�����ԤԼ��"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
		{
			if (sql.execQuery(QString("update BookingOrder set status = 3, teacherid = %1 where id = %2").arg(this->id).arg(this->selectedId)))
			{
				QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("�����ɣ�"));
				// ������ʾtable����
				displayViewTable(displayCmd, selectOrderHeader);
			}
		}
	}
	return;
}

/**
* @return void �˳�
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
	// ������ʾtable����
	displayViewTable(displayCmd, selectOrderHeader);
	return;
}
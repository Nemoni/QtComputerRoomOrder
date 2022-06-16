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
	myOrderSeclectCmd = QStringLiteral("select * from ViewOrder where ѧ��=%1").arg(studentId);
	displayCmd = selectOrderCmd;
	// ��ʾtable����
	displayViewTable(displayCmd, selectOrderHeader);
	// ������Ϣ
	setWindowTitle(QStringLiteral("%1ͬѧ").arg(myname));
	setLabelHint(QStringLiteral("ԤԼ��Ϣ��"));
	setRadioText(QStringLiteral("����ʾ�ҵ�ԤԼ"));
	hideRadioButton(false);
	setButtonsText(QStringLiteral("����ԤԼ"), QStringLiteral("�½�ԤԼ"), QStringLiteral("�˳���¼"));
}

UiStudentMain::~UiStudentMain()
{
}

/**
* @return void
* �������ԤԼ��ť
*/
void UiStudentMain::onClickButton1() {
	int status = sql.getOrderStatus(this->selectedId); // 1����У�2ͨ����3δͨ����4��ȡ��
	if (studentId != this->selectedStudentId) {
		QMessageBox::warning(this, QStringLiteral("״̬����"), QStringLiteral("���ܳ��������ύ�����룡"));
		return;
	}
	if (status != 1) {
		QMessageBox::warning(this, QStringLiteral("״̬����"), QStringLiteral("δ�����״̬�޷�������"));
	}else{
		if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("��ʾ"), QStringLiteral("ȷ�ϳ�������ԤԼ��"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
		{
			if (sql.execQuery(QString("update BookingOrder set status = 4 where id = %1").arg(this->selectedId)))
			{
				QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("�����ɹ���"));
				// ������ʾtable����
				displayViewTable(displayCmd, selectOrderHeader);
			} 
			else{
				QMessageBox::critical(this, QStringLiteral("��ʾ"), QStringLiteral("����ʧ�ܣ�"));
			}
		}
	}

	return;
}

/**
* @return void
* ѧ������½�ԤԼ��ť
*/
void UiStudentMain::onClickButton2() {
	UiStudentOrder *stuOrder = new UiStudentOrder(studentId);
	stuOrder->setAttribute(Qt::WA_DeleteOnClose);
	connect(stuOrder, &UiStudentOrder::signalLoginout, [this, stuOrder]() {
		// ������ʾtable����
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
* ����˳���ť
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
	// ������ʾtable����
	displayViewTable(displayCmd, selectOrderHeader);
	return;
}



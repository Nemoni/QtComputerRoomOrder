#include "UiManageAccount.h"
#include <qdebug.h>
#include "UiMgAcountCreate.h"
#include <QMessageBox>

UiManageAccount::UiManageAccount(Identification identity, QWidget *parent)
	: UiViewButtons(parent)
{
	this->resize(600, 400);
	this->myIdentity = identity;
	this->setWindowIcon(QIcon(":/winicon/Resources/manager.png"));
	displayData();
	hideRadioButton(true);
	setButtonsText(QStringLiteral("�½�"), QStringLiteral("ɾ��"), QStringLiteral("����"));
}

UiManageAccount::~UiManageAccount()
{
}

/**
* @return void �½�
*/
void UiManageAccount::onClickButton1() {
	UiMgAcountCreate *account = new UiMgAcountCreate(myIdentity);
	account->setAttribute(Qt::WA_DeleteOnClose);
	connect(account, &UiMgAcountCreate::signalLoginout, [this, account]() {
		displayData();
		this->show();
	});
	account->setWindowModality(Qt::ApplicationModal);
	//this->hide();
	account->show();
	return;
}

/**
* @return void ɾ��
*/
void UiManageAccount::onClickButton2() {
	QString dbName = "Student";
	if (myIdentity == Teacher) {
		dbName = "Teacher";
	}
	if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("��ʾ"), QStringLiteral("ȷ��ɾ�������ʻ���"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
	{
		if (sql.execQuery(QString("delete from %1 where id = %2").arg(dbName).arg(this->selectedId)))
		{
			// ������ʾtable����
			displayData();
		}	
		else 
		{
			QMessageBox::critical(this, QStringLiteral("��ʾ"), QStringLiteral("ɾ��ʧ�ܣ�"));
		}
	}

	return;
}

/**
* @return void �˳�
*/
void UiManageAccount::onClickButton3() {
	emit signalLoginout();
	this->close();
	return;
}

void UiManageAccount::displayData()
{
	if (myIdentity == Student)
	{
		// ��ʾtable����
		QVector<QString> header = { QStringLiteral("ѧ��"), QStringLiteral("����"), QStringLiteral("����") };
		QString seclectCmd = QStringLiteral("select id as ѧ��, name as ����, password as ���� from student");
		displayViewTable(seclectCmd, header);
		// ������Ϣ
		setWindowTitle(QStringLiteral("ѧ����Ϣ")); // TODO: ��ʾѧ������
		setLabelHint(QStringLiteral("ѧ���ʻ���Ϣ:"));
	}
	else if (myIdentity == Teacher)
	{
		// ��ʾtable����
		QVector<QString> header = { QStringLiteral("��ʦ���"), QStringLiteral("����"), QStringLiteral("����") };
		QString seclectCmd = QStringLiteral("select id, name, password from teacher");
		displayViewTable(seclectCmd, header);
		// ������Ϣ
		setWindowTitle(QStringLiteral("��ʦ��Ϣ")); // TODO: ��ʾѧ������
		setLabelHint(QStringLiteral("��ʦ�ʻ���Ϣ:"));
	}
	else
	{
		qDebug() << "Error, no such identity:" << myIdentity;
	}
}

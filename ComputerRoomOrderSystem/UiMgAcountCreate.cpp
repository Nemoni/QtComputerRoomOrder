#include "UiMgAcountCreate.h"
#include <QMessageBox>

UiMgAcountCreate::UiMgAcountCreate(Identification identity, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->myIdentity = identity;
	this->setWindowIcon(QIcon(":/winicon/Resources/manager.png"));
	if (myIdentity == Student) {
		setWindowTitle(QStringLiteral("�½�ѧ���ʺ�"));
		setLabelHint(QStringLiteral("ѧ�ţ�"));
	}else if(myIdentity == Teacher){
		setWindowTitle(QStringLiteral("�½���ʦ�ʺ�"));
		setLabelHint(QStringLiteral("��ʦ��ţ�"));
	}
	connect(ui.btn_create, &QPushButton::clicked, this, &UiMgAcountCreate::onClickButtonCreate);
	connect(ui.btn_cancel, &QPushButton::clicked, this, &UiMgAcountCreate::onClickButtonBack);
}

UiMgAcountCreate::~UiMgAcountCreate()
{
}

/**
* @param QString text
* @return void
*/
void UiMgAcountCreate::setLabelHint(QString text) {
	ui.label_id->setText(text);
	return;
}

/**
* @return void
*/
void UiMgAcountCreate::onClickButtonCreate() {
	QString id = ui.lineEdit_id->text().trimmed();
	QString name = ui.lineEdit_name->text().trimmed();
	QString pwd = ui.lineEdit_pwd->text().trimmed();
	QString dbName = "Student";
	if (id == Q_NULLPTR || name == Q_NULLPTR || pwd == Q_NULLPTR) {
		QMessageBox::warning(this, QStringLiteral("�������"), QStringLiteral("���벻��Ϊ�գ�"));
	}
	else if (id <= 0) 
	{
		QMessageBox::warning(this, QStringLiteral("�������"), QStringLiteral("ID�������"));
	}
	else
	{
		if (myIdentity == Teacher) {
			dbName = "Teacher";
		}
		if (sql.execQuery(QString("insert into %1(id, name, password) values(%2, '%3', '%4')").arg(dbName).arg(id.toInt()).arg(name).arg(pwd)))
		{
			QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("�����ɹ���"));
			this->close();
		}else{
			QMessageBox::critical(this, QStringLiteral("��ʾ"), QStringLiteral("����ʧ�ܣ�"));
		}
	}
	return;
}

/**
* @return void
*/
void UiMgAcountCreate::onClickButtonBack() {
	emit signalLoginout();
	this->close();
	return;
}

void UiMgAcountCreate::closeEvent(QCloseEvent *event)
{
	emit signalLoginout();
	QWidget::closeEvent(event);
}
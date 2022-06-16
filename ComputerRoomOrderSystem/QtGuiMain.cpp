#include "QtGuiMain.h"
#include <qpushbutton.h>
#include <qdebug.h>
#include <qmessagebox.h>
#include "UiStudentMain.h"
#include "UiTeacherMain.h"
#include "UiManagerMain.h"

QtGuiMain::QtGuiMain(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/winicon/Resources/mainwindow.png"));
	// ��ʼ�����ѡ��
	ui.cbBox_identity->addItem(QStringLiteral("ѧ��"));
	ui.cbBox_identity->addItem(QStringLiteral("��ʦ"));
	ui.cbBox_identity->addItem(QStringLiteral("����Ա"));
	identity = Student;
	// �����źźͲ�
	void(QComboBox::*cbfunc)(int) = &QComboBox::currentIndexChanged;
	connect(ui.cbBox_identity, cbfunc, this, &QtGuiMain::comoBoxIdentityChanged);
	connect(ui.btn_login, &QPushButton::clicked, this, &QtGuiMain::onClickLogin);
	connect(ui.btn_quit, &QPushButton::clicked, this, &QtGuiMain::onClickQuit);

}
/**
* @return void
*/
void QtGuiMain::onClickLogin() {
	if (ui.lineEdit_id->text().trimmed() == "" || ui.lineEdit_pwd->text().trimmed() == "")
	{
		// �û���������Ϊ��ʱ��ʾ
		QMessageBox *box = new QMessageBox();
		box->setWindowTitle(QStringLiteral("��ʾ"));
		box->setText(QStringLiteral("�������û��������룡"));
		box->setIcon(QMessageBox::Warning);
		box->show();
		return;
	}

	QString id = ui.lineEdit_id->text().trimmed();
	QString password = ui.lineEdit_pwd->text().trimmed();
	qDebug() << "id:" << id << "password:" << password;

	// ��֤�û���������
	if (validateIdentity(id, password))
	{
		// �򿪶�Ӧ��ݴ���
		if (identity == Student) {
			UiStudentMain *stuMain = new UiStudentMain(id.toInt());
			stuMain->setAttribute(Qt::WA_DeleteOnClose);
			//stuMain->setWindowModality(Qt::ApplicationModal); // �����������������
			connect(stuMain, &UiStudentMain::signalLoginout, [this, stuMain]() {
				stuMain->close();
				this->show();
			});
			this->hide();
			stuMain->show();
		}
		else if (identity == Teacher) {
			UiTeacherMain *tcMain = new UiTeacherMain(id.toInt());
			tcMain->setAttribute(Qt::WA_DeleteOnClose);
			connect(tcMain, &UiStudentMain::signalLoginout, [this, tcMain]() {
				tcMain->close();
				this->show();
			});
			this->hide();
			tcMain->show();
		}
		else if (identity == Manager)
		{
			UiManagerMain *manMain = new UiManagerMain(id);
			manMain->setAttribute(Qt::WA_DeleteOnClose);
			connect(manMain, &UiManagerMain::signalLoginout, [this, manMain]() {
				manMain->close();
				this->show();
			});
			this->hide();
			manMain->show();
		}
	}
	else
	{
		// ��֤ʧ����ʾ
		qDebug() << "QtGuiMain::onClickLogin(), �����֤ʧ�ܣ�";
		QMessageBox::StandardButton result = QMessageBox::critical(this, QStringLiteral("��ʾ"), QStringLiteral("�����֤ʧ�ܣ�"));
	}
	// ��������
	ui.lineEdit_pwd->clear();

	return;
}

/**
* @return void
*/
void QtGuiMain::onClickQuit() {
	qDebug() << "onClickQuit";
	this->close();
	return;
}

void QtGuiMain::comoBoxIdentityChanged(int index)
{
	QString label;
	if (index == 0)  // ѧ��
	{
		label = QStringLiteral("ѧ�ţ�");
		identity = Student;
	}
	else if (index == 1) // ��ʦ
	{
		label = QStringLiteral("��ʦ��ţ�");
		identity = Teacher;
	}
	else if (index == 2) // ����Ա
	{
		label = QStringLiteral("�ʺţ�");
		identity = Manager;
	}
	ui.label_id->setText(label);
	qDebug() << "comoBoxIdentityChanged: " << index;

	return;
}

// ��֤id������
bool QtGuiMain::validateIdentity(QString id, QString pwd)
{
	if (identity == Student) {
		if (sql.validateStudent(id.toInt(), pwd)) 
		{
			return true;
		}
	}else if (identity == Teacher) {
		if (sql.validateTeacher(id.toInt(), pwd))
		{
			return true;
		}
	}else if (identity == Manager) {
		if (sql.validateManager(id, pwd))
		{
			return true;
		}
	}
	return false;
}


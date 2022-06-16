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
	// 初始化身份选项
	ui.cbBox_identity->addItem(QStringLiteral("学生"));
	ui.cbBox_identity->addItem(QStringLiteral("教师"));
	ui.cbBox_identity->addItem(QStringLiteral("管理员"));
	identity = Student;
	// 连接信号和槽
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
		// 用户名或密码为空时提示
		QMessageBox *box = new QMessageBox();
		box->setWindowTitle(QStringLiteral("提示"));
		box->setText(QStringLiteral("请输入用户名和密码！"));
		box->setIcon(QMessageBox::Warning);
		box->show();
		return;
	}

	QString id = ui.lineEdit_id->text().trimmed();
	QString password = ui.lineEdit_pwd->text().trimmed();
	qDebug() << "id:" << id << "password:" << password;

	// 验证用户名和密码
	if (validateIdentity(id, password))
	{
		// 打开对应身份窗口
		if (identity == Student) {
			UiStudentMain *stuMain = new UiStudentMain(id.toInt());
			stuMain->setAttribute(Qt::WA_DeleteOnClose);
			//stuMain->setWindowModality(Qt::ApplicationModal); // 不允许操作其它窗口
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
		// 验证失败提示
		qDebug() << "QtGuiMain::onClickLogin(), 身份验证失败！";
		QMessageBox::StandardButton result = QMessageBox::critical(this, QStringLiteral("提示"), QStringLiteral("身份验证失败！"));
	}
	// 清空密码框
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
	if (index == 0)  // 学生
	{
		label = QStringLiteral("学号：");
		identity = Student;
	}
	else if (index == 1) // 教师
	{
		label = QStringLiteral("教师编号：");
		identity = Teacher;
	}
	else if (index == 2) // 管理员
	{
		label = QStringLiteral("帐号：");
		identity = Manager;
	}
	ui.label_id->setText(label);
	qDebug() << "comoBoxIdentityChanged: " << index;

	return;
}

// 验证id和密码
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


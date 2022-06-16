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
	setButtonsText(QStringLiteral("新建"), QStringLiteral("删除"), QStringLiteral("返回"));
}

UiManageAccount::~UiManageAccount()
{
}

/**
* @return void 新建
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
* @return void 删除
*/
void UiManageAccount::onClickButton2() {
	QString dbName = "Student";
	if (myIdentity == Teacher) {
		dbName = "Teacher";
	}
	if (QMessageBox::Yes == QMessageBox::warning(this, QStringLiteral("提示"), QStringLiteral("确认删除该条帐户？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
	{
		if (sql.execQuery(QString("delete from %1 where id = %2").arg(dbName).arg(this->selectedId)))
		{
			// 更新显示table数据
			displayData();
		}	
		else 
		{
			QMessageBox::critical(this, QStringLiteral("提示"), QStringLiteral("删除失败！"));
		}
	}

	return;
}

/**
* @return void 退出
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
		// 显示table数据
		QVector<QString> header = { QStringLiteral("学号"), QStringLiteral("姓名"), QStringLiteral("密码") };
		QString seclectCmd = QStringLiteral("select id as 学号, name as 姓名, password as 密码 from student");
		displayViewTable(seclectCmd, header);
		// 文字信息
		setWindowTitle(QStringLiteral("学生信息")); // TODO: 显示学生姓名
		setLabelHint(QStringLiteral("学生帐户信息:"));
	}
	else if (myIdentity == Teacher)
	{
		// 显示table数据
		QVector<QString> header = { QStringLiteral("教师编号"), QStringLiteral("姓名"), QStringLiteral("密码") };
		QString seclectCmd = QStringLiteral("select id, name, password from teacher");
		displayViewTable(seclectCmd, header);
		// 文字信息
		setWindowTitle(QStringLiteral("教师信息")); // TODO: 显示学生姓名
		setLabelHint(QStringLiteral("教师帐户信息:"));
	}
	else
	{
		qDebug() << "Error, no such identity:" << myIdentity;
	}
}

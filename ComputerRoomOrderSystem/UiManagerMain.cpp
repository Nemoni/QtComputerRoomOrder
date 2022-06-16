#include "UiManagerMain.h"
#include "UiManageAccount.h"
#include "UiManageOrder.h"
#include "UiManageRoom.h"

UiManagerMain::UiManagerMain(QString username, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/winicon/Resources/manager.png"));
	this->username = username;
	// Á¬½ÓÐÅºÅ²Û
	connect(ui.btn_student, &QPushButton::clicked, this, &UiManagerMain::onClickManageStudent);
	connect(ui.btn_teacher, &QPushButton::clicked, this, &UiManagerMain::onClickManageTeacher);
	connect(ui.btn_room, &QPushButton::clicked, this, &UiManagerMain::onClickManageRoom);
	connect(ui.btn_order, &QPushButton::clicked, this, &UiManagerMain::onClickManageOrder);
	connect(ui.btn_quit, &QPushButton::clicked, this, &UiManagerMain::onClickQuit);
}

UiManagerMain::~UiManagerMain()
{
}

/**
* @return void
*/
void UiManagerMain::onClickManageStudent() {
	UiManageAccount *stuInfo = new UiManageAccount(Student);
	stuInfo->setAttribute(Qt::WA_DeleteOnClose);
	connect(stuInfo, &UiManageAccount::signalLoginout, [this, stuInfo]() {
		//stuInfo->close();
		this->show();
	});
	this->hide();
	stuInfo->show();
	return;
}

/**
* @return void
*/
void UiManagerMain::onClickManageTeacher() {
	UiManageAccount *tchInfo = new UiManageAccount(Teacher);
	tchInfo->setAttribute(Qt::WA_DeleteOnClose);
	connect(tchInfo, &UiManageAccount::signalLoginout, [this, tchInfo]() {
		//tchInfo->close();
		this->show();
	});
	this->hide();
	tchInfo->show();
	return;
}

/**
* @return void
*/
void UiManagerMain::onClickManageOrder() {
	UiManageOrder *manOrder = new UiManageOrder();
	manOrder->setAttribute(Qt::WA_DeleteOnClose);
	connect(manOrder, &UiManageOrder::signalLoginout, [this, manOrder]() {
		//manOrder->close();
		this->show();
	});
	this->hide();
	manOrder->show();
	return;
}

/**
* @return void
*/
void UiManagerMain::onClickManageRoom() {

	UiManageRoom *manRoom = new UiManageRoom();
	manRoom->setAttribute(Qt::WA_DeleteOnClose);
	connect(manRoom, &UiManageRoom::signalLoginout, [this, manRoom]() {
		//manRoom->close();
		this->show();
	});
	this->hide();
	manRoom->show();
	return;
}

/**
* @return void
*/
void UiManagerMain::onClickQuit() {
	emit signalLoginout();
	this->close();
	return;
}

void UiManagerMain::closeEvent(QCloseEvent *event)
{
	//emit signalLoginout();
	QWidget::closeEvent(event);
}
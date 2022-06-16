#pragma once

#include <QWidget>
#include "ui_UiManagerMain.h"

class UiManagerMain : public QWidget
{
	Q_OBJECT

public:
	UiManagerMain(QString username, QWidget *parent = Q_NULLPTR);
	~UiManagerMain();
	void closeEvent(QCloseEvent *event);
signals:
	void signalLoginout();
public slots:
	void onClickManageStudent();
	void onClickManageTeacher();
	void onClickManageOrder();
	void onClickManageRoom();
	void onClickQuit();
private:
	Ui::UiManagerMain ui;
	QString username;
};

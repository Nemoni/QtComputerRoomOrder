#pragma once

#include <QWidget>
#include "ui_UiManageRoom.h"
#include "SqlApi.h"

class UiManageRoom : public QWidget
{
	Q_OBJECT

public:
	UiManageRoom(QWidget *parent = Q_NULLPTR);
	~UiManageRoom();
	void closeEvent(QCloseEvent *event);
public slots:
	void onClickButtonConfirm();
private:
	Ui::UiManageRoom ui;
	SqlApi sql;
	void displayViewTable(QString cmd, QVector<QString> header);
signals:
	void signalLoginout();
};

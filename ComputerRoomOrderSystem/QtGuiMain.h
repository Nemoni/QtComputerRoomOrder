#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtGuiMain.h"
#include "SqlApi.h"
#include "GlobalDataDefination.h"

class QtGuiMain : public QWidget
{
	Q_OBJECT

public:
	QtGuiMain(QWidget *parent = Q_NULLPTR);
public slots:
	void onClickLogin();
	void onClickQuit();
	void comoBoxIdentityChanged(int index);
	bool validateIdentity(QString id, QString pwd);
private:
	Ui::QtGuiMainClass ui;
	Identification identity;
	SqlApi sql;
};

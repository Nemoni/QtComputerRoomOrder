#pragma once

#include <QWidget>
#include "ui_UiMgAcountCreate.h"
#include "GlobalDataDefination.h"
#include "SqlApi.h"

class UiMgAcountCreate : public QWidget
{
	Q_OBJECT

public:
	UiMgAcountCreate(Identification identity, QWidget *parent = Q_NULLPTR);
	~UiMgAcountCreate();
	void closeEvent(QCloseEvent *event);
signals:
	void signalLoginout();
public slots:
	/**
	* @param QString text
	*/
	void setLabelHint(QString text);
	void onClickButtonCreate();
	void onClickButtonBack();
private:
	Ui::UiMgAcountCreate ui;
	Identification myIdentity;
	SqlApi sql;
};

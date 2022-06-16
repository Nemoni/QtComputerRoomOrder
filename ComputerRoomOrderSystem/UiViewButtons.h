#pragma once

#include <QWidget>
#include "ui_UiViewButtons.h"
#include "SqlApi.h"

class UiViewButtons : public QWidget
{
	Q_OBJECT

public:
	UiViewButtons(QWidget *parent = Q_NULLPTR);
	~UiViewButtons();
	/**
	* @param QString text
	*/
	void setRadioText(QString text);
	/**
	* @param QString btn1
	* @param QString btn2
	* @param QStirng btn3
	*/
	void setButtonsText(QString btn1, QString btn2, QString btn3);
	/**
	* @param QString text
	*/
	void setLabelHint(QString text);
	/**
	* @param bool status
	*/
	void hideRadioButton(bool status);
	void displayViewTable(QString cmd, QVector<QString> header);
	virtual void onClickButton1();
	virtual void onClickButton2();
	virtual void onClickButton3();
	virtual void onClickRadioButton(bool checked);
	void closeEvent(QCloseEvent *event);
public slots:
	virtual void onSelectRowTableView(const QModelIndex &current, const QModelIndex &previous);
signals:
	void signalLoginout();
protected:
	SqlApi sql;
	QSqlQueryModel *model;
	int selectedId;
	int selectedStudentId;
private:
	Ui::UiViewButtons ui;
};

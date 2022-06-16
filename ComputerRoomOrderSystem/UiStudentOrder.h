#pragma once

#include <QWidget>
#include "ui_UiStudentOrder.h"
#include "SqlApi.h"
#include "GlobalDataDefination.h"	

class UiStudentOrder : public QWidget
{
	Q_OBJECT

public:
	UiStudentOrder(int studentId, QWidget *parent = Q_NULLPTR);
	~UiStudentOrder();
	void closeEvent(QCloseEvent *event);
signals:
	void signalLoginout();
public slots:
	void onClickButtonConfirm();
	void onClickButtonCancel();
	void onChangedCbBoxRoom(int index);
private:
	Ui::UiStudentOrder ui;
	SqlApi sql;
	QVector<RoomInfo> rooms;
	int currentRoomId;
	QDate date;
	int time;
	int studentId;

	int getCapacityFromId(int id);
	void onDateChanged(const QDate date);
	void onMorningRdioButtonToggled(bool checked);
};

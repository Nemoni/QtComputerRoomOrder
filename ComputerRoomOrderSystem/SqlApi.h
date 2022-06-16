#pragma once

#include <QObject>
#include <QSqlQueryModel>
#include <qdatetime.h>
#include "GlobalDataDefination.h"

enum OderStatus
{
	Inprogress,
	Passed,
	Fail,
	Withdraw
};

class SqlApi : public QObject
{
	Q_OBJECT

public:
	SqlApi(QObject *parent = Q_NULLPTR);
	~SqlApi();
	/**
	* @param QString cmd
	*/
	QSqlQueryModel* getQueryModel(QString cmd);
	/**
	* @param QString cmd
	*/
	bool execQuery(QString cmd);
	/**
	* @param qint32 id
	* @param QString name
	* @param Qstring pwd
	*/
	bool insertStudent(qint32 id, QString name, QString pwd);
	/**
	* @param qint32 id
	*/
	bool deleteStudent(qint32 id);
	/**
	* @param qint32 id
	* @param QString name
	* @param Qstring pwd
	*/
	bool insertTeacher(qint32 id, QString name, QString pwd);
	/**
	* @param qint32 id
	*/
	bool deleteTeacher(qint32 id);
	/**
	* @param qint32 stid
	* @param qint32 rmid
	* @param QDate date
	* @param int time
	* @param OStatus status
	*/
	bool insertOrder(qint32 stid, qint32 rmid, QDate date, qint32 time, OderStatus status);
	/**
	* @param qint32 orderid
	*/
	bool deleteOrder(qint32 orderid);
	bool clearOrder();
	bool validateStudent(qint32 id, QString pwd);
	QString getStudentName(qint32 id);
	bool validateTeacher(qint32 id, QString pwd);
	QString getTeacherName(qint32 id);
	bool validateManager(QString username, QString pwd);
	void getRoomsInfo(QString cmd, QVector<RoomInfo> &rooms);
	int getOrderStatus(int id);
private:
	QSqlDatabase db;
};

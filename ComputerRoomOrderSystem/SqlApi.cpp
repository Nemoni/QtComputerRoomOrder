#include "SqlApi.h"
#include <qDebug>
#include <QSqlError>
#include <QSqlQuery>

SqlApi::SqlApi(QObject *parent)
	: QObject(parent)
{
	// 添加数据库并打开
	db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("RoomOrder.db");
	if (!db.open())
	{
		qDebug() << "open database error, last error:" << db.lastError();
	}
}

SqlApi::~SqlApi()
{
}

/**
* @param QString cmd
* @return QSqlQueryModel *
*/
QSqlQueryModel* SqlApi::getQueryModel(QString cmd) {
	QSqlQueryModel *model = new QSqlQueryModel();
	model->setQuery(cmd); // 从数据库获取数据
	qDebug() << cmd;
	return model;
}

/**
* @param QString cmd
* @return void
*/
bool SqlApi::execQuery(QString cmd) {
	QSqlQuery query;
	if (!query.exec(cmd))
	{
		qDebug() << "execQuery failed, last error:" << db.lastError() << ",cmd:" << cmd;
		return false;
	}
	return true;
}

/**
* @param qint32 id
* @param QString name
* @param Qstring pwd
* @return bool
*/
bool SqlApi::insertStudent(qint32 id, QString name, QString pwd) {
	return false;
}

/**
* @param qint32 id
* @return bool
*/
bool SqlApi::deleteStudent(qint32 id) {
	return false;
}

/**
* @param qint32 id
* @param QString name
* @param Qstring pwd
* @return bool
*/
bool SqlApi::insertTeacher(qint32 id, QString name, QString pwd) {
	return false;
}

/**
* @param qint32 id
* @return bool
*/
bool SqlApi::deleteTeacher(qint32 id) {
	return false;
}

/**
* @param qint32 stid
* @param qint32 rmid
* @param QDate date
* @param int time
* @param OStatus status
* @return bool
*/
bool SqlApi::insertOrder(qint32 stid, qint32 rmid, QDate date, qint32 time, OderStatus status) {
	return false;
}

/**
* @param qint32 orderid
* @return bool
*/
bool SqlApi::deleteOrder(qint32 orderid) {
	return false;
}

/**
* @return bool
*/
bool SqlApi::clearOrder() {
	return false;
}

bool SqlApi::validateStudent(qint32 id, QString pwd)
{
	QSqlQuery query;
	if (!query.exec("select id, password from Student"))
	{
		qDebug() << "SqlApi::validateStudent failed, last error:" << db.lastError();
	}
	while (query.next())
	{
		if (query.value("id").toInt() == id)
		{
			if (query.value("password").toString() == pwd)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

QString SqlApi::getStudentName(qint32 id)
{
	QSqlQuery query;
	if (!query.exec("select id, name from Student"))
	{
		qDebug() << "SqlApi::validateStudent failed, last error:" << db.lastError();
	}
	while (query.next())
	{
		if (query.value("id").toInt() == id)
		{
			return query.value("name").toString();
		}
	}
	return Q_NULLPTR;
}

bool SqlApi::validateTeacher(qint32 id, QString pwd)
{
	QSqlQuery query;
	if (!query.exec("select id, password from Teacher"))
	{
		qDebug() << "SqlApi::validateTeacher failed, last error:" << db.lastError();
	}
	while (query.next())
	{
		if (query.value("id").toInt() == id)
		{
			if (query.value("password").toString() == pwd)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

QString SqlApi::getTeacherName(qint32 id)
{
	QSqlQuery query;
	if (!query.exec("select id, name from Teacher"))
	{
		qDebug() << "SqlApi::validateStudent failed, last error:" << db.lastError();
	}
	while (query.next())
	{
		if (query.value("id").toInt() == id)
		{
			return query.value("name").toString();
		}
	}
	return Q_NULLPTR;
}

bool SqlApi::validateManager(QString username, QString pwd)
{
	QSqlQuery query;
	if (!query.exec("select username, password from Manager"))
	{
		qDebug() << "SqlApi::validateManager failed, last error:" << db.lastError();
	}
	while (query.next())
	{
		if (query.value("username").toString() == username)
		{
			if (query.value("password").toString() == pwd)
			{
				return true;
			}
			else 
			{
				return false;
			}
		}
	}
	return false;
}

void SqlApi::getRoomsInfo(QString cmd, QVector<RoomInfo> &rooms)
{
	QSqlQuery query;
	if (!query.exec(cmd))
	{
		qDebug() << "getRoomsInfo exec failed, last error:" << db.lastError() << ",cmd:" << cmd;
	}
	RoomInfo info;
	while (query.next())
	{
		info.id = query.value("id").toInt();
		info.name = query.value("name").toString();
		info.capacity = query.value("capacity").toInt();
		rooms.push_back(info);
	}
}

int SqlApi::getOrderStatus(int id)
{
	QSqlQuery query;
	if (!query.exec(QString("select status from BookingOrder where id = %1").arg(id)))
	{
		qDebug() << "SqlApi::getOrderStatus failed, last error:" << db.lastError();
	}
	RoomInfo info;
	if (query.next())
	{
		return query.value("status").toInt();
	}
	return -1;
}

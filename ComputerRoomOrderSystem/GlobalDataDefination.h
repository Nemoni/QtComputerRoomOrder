#pragma once

enum Identification
{
	Student,
	Teacher,
	Manager
};

struct RoomInfo
{
	int id;
	QString name;
	int capacity;
};

extern QString selectOrderCmd;
extern QVector<QString> selectOrderHeader;
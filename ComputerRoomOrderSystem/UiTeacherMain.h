#pragma once

#include <QObject>
#include "UiViewButtons.h"

class UiTeacherMain : public UiViewButtons
{
	Q_OBJECT

public:
	UiTeacherMain(int teacherId, QWidget *parent = Q_NULLPTR);
	~UiTeacherMain();
	void onClickButton1();
	void onClickButton2();
	void onClickButton3();
	void onClickRadioButton(bool checked);
private:
	qint32 id;
	QString displayCmd;
	QString myOrderSeclectCmd;
};

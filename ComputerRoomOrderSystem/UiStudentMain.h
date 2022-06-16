#pragma once

#include <QObject>
#include "UiViewButtons.h"

class UiStudentMain : public UiViewButtons
{
	Q_OBJECT

public:
	UiStudentMain(int studentId, QWidget * parent = Q_NULLPTR);
	~UiStudentMain();
	void onClickButton1();
	void onClickButton2();
	void onClickButton3();
	void onClickRadioButton(bool checked);
private:
	int studentId;
	QString displayCmd;
	QString myOrderSeclectCmd;
};

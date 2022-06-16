#pragma once

#include <QObject>
#include "UiViewButtons.h"

class UiManageOrder : public UiViewButtons
{
	Q_OBJECT

public:
	UiManageOrder(QWidget *parent = Q_NULLPTR);
	~UiManageOrder();
	void onClickButton1();
	void onClickButton2();
	void onClickButton3();
	void closeEvent(QCloseEvent *event);
};

#pragma once

#include <QObject>
#include "UiViewButtons.h"
#include "GlobalDataDefination.h"

class UiManageAccount : public UiViewButtons
{
	Q_OBJECT

public:
	UiManageAccount(Identification identity, QWidget *parent = Q_NULLPTR);
	~UiManageAccount();
	void onClickButton1();
	void onClickButton2();
	void onClickButton3();
	Identification myIdentity;
private:
	void displayData();
};

#include "QtGuiMain.h"
#include <QtWidgets/QApplication>
#include "UiViewButtons.h"
#include "UiManagerMain.h"
#include "UiManageRoom.h"
#include "UiStudentOrder.h"
#include "UiMgAcountCreate.h"
#include "UiStudentMain.h"
#include "UiTeacherMain.h"
#include "UiManageOrder.h"
#include "UiManageAccount.h"

// 初始化全局变量
// 定义查询预约记录的sql语句
QString selectOrderCmd = "select * from ViewOrder";

QVector<QString> selectOrderHeader = { QStringLiteral("编号"), QStringLiteral("学号"), QStringLiteral("姓名") ,QStringLiteral("机房")
	, QStringLiteral("日期"), QStringLiteral("时间"), QStringLiteral("审核人"), QStringLiteral("状态") };

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	QtGuiMain w;
	w.show();
	UiViewButtons uv;
	//uv.show();
	UiManagerMain mw("admin");
	//mw.show();
	UiManageRoom mr;
	//mr.show();
	UiStudentOrder so(22);
	//so.show();
	UiMgAcountCreate mc(Student);
	//mc.show();
	UiStudentMain stm(22);
	//stm.show();
	UiTeacherMain tm(3);
	//tm.show();
	UiManageOrder uo;
	//uo.show();
	UiManageAccount ust(Student);
	//ust.show();
	UiManageAccount ut(Teacher);
	//ut.show();

	return a.exec();
}

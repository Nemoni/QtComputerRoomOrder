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

// ��ʼ��ȫ�ֱ���
// �����ѯԤԼ��¼��sql���
QString selectOrderCmd = "select * from ViewOrder";

QVector<QString> selectOrderHeader = { QStringLiteral("���"), QStringLiteral("ѧ��"), QStringLiteral("����") ,QStringLiteral("����")
	, QStringLiteral("����"), QStringLiteral("ʱ��"), QStringLiteral("�����"), QStringLiteral("״̬") };

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

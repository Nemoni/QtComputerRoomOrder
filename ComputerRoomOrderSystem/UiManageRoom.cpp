#include "UiManageRoom.h"
#include "qdebug.h"

UiManageRoom::UiManageRoom(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/winicon/Resources/manager.png"));
	// ��ʾtable����
	ui.tableView->setShowGrid(true);                               // ����������
	ui.tableView->setFocusPolicy(Qt::NoFocus);                      // ȥ����ǰCell�ܱ����߿�
	ui.tableView->setAlternatingRowColors(true);                    // ����������ɫ
	ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // ����Ӧ
	ui.tableView->verticalHeader()->hide();                         // ���ش�ֱ��ͷ
	QVector<QString> header = { QStringLiteral("������"), QStringLiteral("����"), QStringLiteral("����") };
	QString seclectCmd = QStringLiteral("select id, name, capacity from room");
	displayViewTable(seclectCmd, header);
	// �����źŲ�
	connect(ui.pushButton, &QPushButton::clicked, this, &UiManageRoom::onClickButtonConfirm);
}

UiManageRoom::~UiManageRoom()
{
}

void UiManageRoom::closeEvent(QCloseEvent * event)
{
	emit signalLoginout();
	QWidget::closeEvent(event);
}

void UiManageRoom::onClickButtonConfirm() {
	emit signalLoginout();
	this->close();
	return;
}

void UiManageRoom::displayViewTable(QString cmd, QVector<QString> header) {
	QSqlQueryModel *model = sql.getQueryModel(cmd);
	// ����header
	for (size_t i = 0; i < header.size(); i++)
	{
		model->setHeaderData(i, Qt::Horizontal, header[i]);
	}
	QItemSelectionModel *m = ui.tableView->selectionModel();
	ui.tableView->setModel(model); // ������model
	if (m != nullptr)
		delete m; // ɾ����model
	else
		qDebug() << "m is null";
	return;
}
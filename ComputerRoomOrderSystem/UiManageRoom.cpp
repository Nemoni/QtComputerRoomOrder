#include "UiManageRoom.h"
#include "qdebug.h"

UiManageRoom::UiManageRoom(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/winicon/Resources/manager.png"));
	// 显示table数据
	ui.tableView->setShowGrid(true);                               // 隐藏网格线
	ui.tableView->setFocusPolicy(Qt::NoFocus);                      // 去除当前Cell周边虚线框
	ui.tableView->setAlternatingRowColors(true);                    // 开启隔行异色
	ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // 自适应
	ui.tableView->verticalHeader()->hide();                         // 隐藏垂直表头
	QVector<QString> header = { QStringLiteral("机房号"), QStringLiteral("名称"), QStringLiteral("容量") };
	QString seclectCmd = QStringLiteral("select id, name, capacity from room");
	displayViewTable(seclectCmd, header);
	// 连接信号槽
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
	// 设置header
	for (size_t i = 0; i < header.size(); i++)
	{
		model->setHeaderData(i, Qt::Horizontal, header[i]);
	}
	QItemSelectionModel *m = ui.tableView->selectionModel();
	ui.tableView->setModel(model); // 设置新model
	if (m != nullptr)
		delete m; // 删除旧model
	else
		qDebug() << "m is null";
	return;
}
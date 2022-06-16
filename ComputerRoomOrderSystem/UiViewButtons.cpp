#include "UiViewButtons.h"
#include <QSqlQueryModel>
#include <qDebug>
#include "GlobalDataDefination.h"

UiViewButtons::UiViewButtons(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->selectedId = -1;
	this->selectedStudentId = -1;
	// 显示table数据
	ui.tableView->setShowGrid(true);                               // 隐藏网格线
	ui.tableView->setFocusPolicy(Qt::NoFocus);                      // 去除当前Cell周边虚线框
	ui.tableView->setAlternatingRowColors(true);                    // 开启隔行异色
	ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // 自适应
	//ui.tableView->horizontalHeader()->setStretchLastSection(true); // 最后一列自动伸缩
	//ui.tableView->horizontalHeader()->hide();                       // 隐藏水平表头
	ui.tableView->verticalHeader()->hide();                         // 隐藏垂直表头
	ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //单击选择一行
	ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection);// 只允许选择单行
	//ui.tableView->horizontalHeader()->setHighlightSections(true); //　高亮水平表头
	displayViewTable(selectOrderCmd, selectOrderHeader);
	//ui.tableView->setColumnWidth(4, 100);//设置列宽度，设置自适应之后无效
	//ui.tableView->resizeColumnsToContents();

	// 文字信息
	setWindowTitle(QStringLiteral("提示tiltle"));
	setLabelHint(QStringLiteral("label提示信息"));
	setRadioText(QStringLiteral("radio提示"));
	hideRadioButton(false);
	setButtonsText(QStringLiteral("按钮1"), QStringLiteral("按钮2"), QStringLiteral("按钮3"));
	// 连接信号槽
	connect(ui.radioButton, &QRadioButton::toggled, this, &UiViewButtons::onClickRadioButton);
	connect(ui.btn_1, &QPushButton::clicked, this, &UiViewButtons::onClickButton1);
	connect(ui.btn_2, &QPushButton::clicked, this, &UiViewButtons::onClickButton2);
	connect(ui.btn_3, &QPushButton::clicked, this, &UiViewButtons::onClickButton3);
	
}

UiViewButtons::~UiViewButtons()
{
}
/**
* @param QString text
* @return void
*/
void UiViewButtons::setRadioText(QString text) {
	ui.radioButton->setText(text);
	return;
}
/**
* @param QString btn1
* @param QString btn2
* @param QStirng btn3
* @return void
*/
void UiViewButtons::setButtonsText(QString btn1, QString btn2, QString btn3) {
	ui.btn_1->setText(btn1);
	ui.btn_2->setText(btn2);
	ui.btn_3->setText(btn3);
	return;
}
/**
* @param QString text
* @return void
*/
void UiViewButtons::setLabelHint(QString text) {
	ui.label_info->setText(text);
	return;
}
/**
* @param bool status
* @return void
*/
void UiViewButtons::hideRadioButton(bool status) {
	if (status) {
		ui.radioButton->hide();
	}else{
		ui.radioButton->show();
	}
	return;
}
/**
* @return void
*/
void UiViewButtons::displayViewTable(QString cmd, QVector<QString> header) {
	model = sql.getQueryModel(cmd);
	// 设置header
	for (size_t i = 0; i < header.size(); i++)
	{
		model->setHeaderData(i, Qt::Horizontal, header[i]);
	}
	QItemSelectionModel *m = ui.tableView->selectionModel();
	ui.tableView->setModel(model); // 设置新model
	// model改变后需要重新设置信号槽连接
	connect(ui.tableView->selectionModel(), &QItemSelectionModel::currentRowChanged, this, &UiViewButtons::onSelectRowTableView);
	if (m != nullptr)
		delete m; // 删除旧model
	else
		qDebug() << "m is null";
	return;
}
/**
* @return void
*/
void UiViewButtons::onClickButton1() {
	return;
}
/**
* @return void
*/
void UiViewButtons::onClickButton2() {
	return;
}
/**
* @return void
*/
void UiViewButtons::onClickButton3() {
	return;
}
/**
* @return void
*/
void UiViewButtons::onClickRadioButton(bool checked) {
	qDebug() << "onClickRadioButton:" << checked;
	return;
}

void UiViewButtons::closeEvent(QCloseEvent *event)
{
	emit signalLoginout();
	QWidget::closeEvent(event);
}

void UiViewButtons::onSelectRowTableView(const QModelIndex & current, const QModelIndex & previous)
{
	qDebug() << "onSelectRowTableView:"<< current.column() << "," << current.row();
	ui.tableView->setStyleSheet("QTableView::item{selection-background-color:rgb(23,165,230)}");
	this->selectedId = model->data(model->index(current.row(), 0)).toInt();
	this->selectedStudentId = model->data(model->index(current.row(), 1)).toInt();
	qDebug() << "selected id:" << selectedId;
}

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
	// ��ʾtable����
	ui.tableView->setShowGrid(true);                               // ����������
	ui.tableView->setFocusPolicy(Qt::NoFocus);                      // ȥ����ǰCell�ܱ����߿�
	ui.tableView->setAlternatingRowColors(true);                    // ����������ɫ
	ui.tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); // ����Ӧ
	//ui.tableView->horizontalHeader()->setStretchLastSection(true); // ���һ���Զ�����
	//ui.tableView->horizontalHeader()->hide();                       // ����ˮƽ��ͷ
	ui.tableView->verticalHeader()->hide();                         // ���ش�ֱ��ͷ
	ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //����ѡ��һ��
	ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection);// ֻ����ѡ����
	//ui.tableView->horizontalHeader()->setHighlightSections(true); //������ˮƽ��ͷ
	displayViewTable(selectOrderCmd, selectOrderHeader);
	//ui.tableView->setColumnWidth(4, 100);//�����п�ȣ���������Ӧ֮����Ч
	//ui.tableView->resizeColumnsToContents();

	// ������Ϣ
	setWindowTitle(QStringLiteral("��ʾtiltle"));
	setLabelHint(QStringLiteral("label��ʾ��Ϣ"));
	setRadioText(QStringLiteral("radio��ʾ"));
	hideRadioButton(false);
	setButtonsText(QStringLiteral("��ť1"), QStringLiteral("��ť2"), QStringLiteral("��ť3"));
	// �����źŲ�
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
	// ����header
	for (size_t i = 0; i < header.size(); i++)
	{
		model->setHeaderData(i, Qt::Horizontal, header[i]);
	}
	QItemSelectionModel *m = ui.tableView->selectionModel();
	ui.tableView->setModel(model); // ������model
	// model�ı����Ҫ���������źŲ�����
	connect(ui.tableView->selectionModel(), &QItemSelectionModel::currentRowChanged, this, &UiViewButtons::onSelectRowTableView);
	if (m != nullptr)
		delete m; // ɾ����model
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

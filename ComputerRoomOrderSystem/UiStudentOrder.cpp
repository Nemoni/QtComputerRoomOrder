#include "UiStudentOrder.h"
#include "qdebug.h"
#include "QDateEdit"
#include "QMessageBox"

UiStudentOrder::UiStudentOrder(int studentId, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->studentId = studentId;
	this->setWindowIcon(QIcon(":/winicon/Resources/student.png"));
	// 从数据库取出机房信息并显示到下拉框
	sql.getRoomsInfo("select id, name, capacity from room", rooms);
	for each (auto room in rooms)
	{
		ui.cbBox_room->addItem(room.name, room.id);
	}
	this->currentRoomId = ui.cbBox_room->currentData().toInt();
	// 将机房容量显示到label上
	int capacity = getCapacityFromId(currentRoomId);
	ui.label_capacity->setText(QString::number(capacity) + QStringLiteral("人"));
	// 设置date
	this->date = QDate::currentDate();
	ui.dateEdit->setDate(this->date);
	// 设置time上午或下午
	ui.rb_morning->setChecked(true);
	this->time = 1;
	// 连接信号槽
	connect(ui.btn_create, &QPushButton::clicked, this, &UiStudentOrder::onClickButtonConfirm);
	connect(ui.btn_cancel, &QPushButton::clicked, this, &UiStudentOrder::onClickButtonCancel);
	void (QComboBox::*cbchanged)(int index) = &QComboBox::currentIndexChanged;
	connect(ui.cbBox_room, cbchanged, this, &UiStudentOrder::onChangedCbBoxRoom);
	connect(ui.dateEdit, &QDateEdit::dateChanged, this, &UiStudentOrder::onDateChanged);
	connect(ui.rb_morning, &QRadioButton::toggled, this, &UiStudentOrder::onMorningRdioButtonToggled);
}

UiStudentOrder::~UiStudentOrder()
{
}
/**
* @return void
*/
void UiStudentOrder::onClickButtonConfirm() {
	QString cmd = "insert into BookingOrder(studentId, roomId,date, time, status) values(%1,%2,'%3',%4,%5)";
	if (!sql.execQuery(cmd.arg(studentId).arg(currentRoomId).arg(date.toString("yyyy-MM-dd")).arg(time).arg(1)))
	{
		// 插入数据失败时提示
		QMessageBox::StandardButton result = QMessageBox::critical(this, QStringLiteral("提示"), QStringLiteral("创建预约失败！"));
	}
	else {
		// 插入数据成功时提示
		QMessageBox::StandardButton result = QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("创建新预约成功！"));
		if (result == QMessageBox::Ok)
		{
			// 点击确定后关闭本窗口
			emit signalLoginout();
			this->close();
		}
	}

	return;
}

/**
* @return void
*/
void UiStudentOrder::onClickButtonCancel() {
	emit signalLoginout();
	this->close();
	return;
}

void UiStudentOrder::onChangedCbBoxRoom(int index)
{
	currentRoomId = ui.cbBox_room->currentData().toInt();
	int capacity = getCapacityFromId(currentRoomId);
	ui.label_capacity->setText(QString::number(capacity)+QStringLiteral("人"));
}

int UiStudentOrder::getCapacityFromId(int id)
{
	for each (auto room in rooms)
	{
		if (room.id == id) {
			return room.capacity;
		}
	}
}

void UiStudentOrder::onDateChanged(const QDate date)
{
	qDebug() << "select date:" << date;
	this->date = date;
}

void UiStudentOrder::onMorningRdioButtonToggled(bool checked)
{
	if (checked)
	{
		this->time = 1; // 1表示上午
	}
	else
	{
		this->time = 2; // 2表示下午
	}
	qDebug() << "groupbox changed:" << checked;
}

void UiStudentOrder::closeEvent(QCloseEvent *event)
{
	emit signalLoginout();
	QWidget::closeEvent(event);
}
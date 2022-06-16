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
	// �����ݿ�ȡ��������Ϣ����ʾ��������
	sql.getRoomsInfo("select id, name, capacity from room", rooms);
	for each (auto room in rooms)
	{
		ui.cbBox_room->addItem(room.name, room.id);
	}
	this->currentRoomId = ui.cbBox_room->currentData().toInt();
	// ������������ʾ��label��
	int capacity = getCapacityFromId(currentRoomId);
	ui.label_capacity->setText(QString::number(capacity) + QStringLiteral("��"));
	// ����date
	this->date = QDate::currentDate();
	ui.dateEdit->setDate(this->date);
	// ����time���������
	ui.rb_morning->setChecked(true);
	this->time = 1;
	// �����źŲ�
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
		// ��������ʧ��ʱ��ʾ
		QMessageBox::StandardButton result = QMessageBox::critical(this, QStringLiteral("��ʾ"), QStringLiteral("����ԤԼʧ�ܣ�"));
	}
	else {
		// �������ݳɹ�ʱ��ʾ
		QMessageBox::StandardButton result = QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("������ԤԼ�ɹ���"));
		if (result == QMessageBox::Ok)
		{
			// ���ȷ����رձ�����
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
	ui.label_capacity->setText(QString::number(capacity)+QStringLiteral("��"));
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
		this->time = 1; // 1��ʾ����
	}
	else
	{
		this->time = 2; // 2��ʾ����
	}
	qDebug() << "groupbox changed:" << checked;
}

void UiStudentOrder::closeEvent(QCloseEvent *event)
{
	emit signalLoginout();
	QWidget::closeEvent(event);
}
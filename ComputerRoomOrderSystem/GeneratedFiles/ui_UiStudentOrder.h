/********************************************************************************
** Form generated from reading UI file 'UiStudentOrder.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISTUDENTORDER_H
#define UI_UISTUDENTORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiStudentOrder
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbBox_room;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QLabel *label_capacity;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *rb_morning;
    QRadioButton *rb_afternoon;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_create;
    QPushButton *btn_cancel;

    void setupUi(QWidget *UiStudentOrder)
    {
        if (UiStudentOrder->objectName().isEmpty())
            UiStudentOrder->setObjectName(QStringLiteral("UiStudentOrder"));
        UiStudentOrder->resize(506, 454);
        verticalLayout_2 = new QVBoxLayout(UiStudentOrder);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(UiStudentOrder);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(28);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addWidget(widget);

        widget_8 = new QWidget(UiStudentOrder);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        widget_5 = new QWidget(widget_8);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout = new QVBoxLayout(widget_5);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 11);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        cbBox_room = new QComboBox(widget_2);
        cbBox_room->setObjectName(QStringLiteral("cbBox_room"));
        cbBox_room->setMinimumSize(QSize(0, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(12);
        cbBox_room->setFont(font2);
        cbBox_room->setInsertPolicy(QComboBox::InsertAtBottom);

        horizontalLayout->addWidget(cbBox_room);

        horizontalLayout->setStretch(0, 40);
        horizontalLayout->setStretch(1, 60);

        verticalLayout->addWidget(widget_2);

        widget_9 = new QWidget(widget_5);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(widget_9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_8->addWidget(label_5);

        label_capacity = new QLabel(widget_9);
        label_capacity->setObjectName(QStringLiteral("label_capacity"));
        label_capacity->setMinimumSize(QSize(0, 28));
        label_capacity->setFont(font2);

        horizontalLayout_8->addWidget(label_capacity);

        horizontalLayout_8->setStretch(0, 40);
        horizontalLayout_8->setStretch(1, 60);

        verticalLayout->addWidget(widget_9);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        dateEdit = new QDateEdit(widget_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumSize(QSize(0, 28));
        dateEdit->setBaseSize(QSize(0, 28));
        dateEdit->setFont(font2);
        dateEdit->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dateEdit);

        horizontalLayout_3->setStretch(0, 40);
        horizontalLayout_3->setStretch(1, 60);

        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        groupBox = new QGroupBox(widget_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 28));
        horizontalLayout_9 = new QHBoxLayout(groupBox);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        rb_morning = new QRadioButton(groupBox);
        rb_morning->setObjectName(QStringLiteral("rb_morning"));
        rb_morning->setFont(font2);

        horizontalLayout_9->addWidget(rb_morning);

        rb_afternoon = new QRadioButton(groupBox);
        rb_afternoon->setObjectName(QStringLiteral("rb_afternoon"));
        rb_afternoon->setFont(font2);

        horizontalLayout_9->addWidget(rb_afternoon);


        horizontalLayout_4->addWidget(groupBox);

        horizontalLayout_4->setStretch(0, 40);
        horizontalLayout_4->setStretch(1, 60);
        groupBox->raise();
        label_3->raise();

        verticalLayout->addWidget(widget_4);


        horizontalLayout_7->addWidget(widget_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget_8);

        widget_7 = new QWidget(UiStudentOrder);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btn_create = new QPushButton(widget_6);
        btn_create->setObjectName(QStringLiteral("btn_create"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font3.setPointSize(12);
        btn_create->setFont(font3);

        horizontalLayout_5->addWidget(btn_create);

        btn_cancel = new QPushButton(widget_6);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setFont(font3);

        horizontalLayout_5->addWidget(btn_cancel);


        horizontalLayout_6->addWidget(widget_6);


        verticalLayout_2->addWidget(widget_7);


        retranslateUi(UiStudentOrder);

        QMetaObject::connectSlotsByName(UiStudentOrder);
    } // setupUi

    void retranslateUi(QWidget *UiStudentOrder)
    {
        UiStudentOrder->setWindowTitle(QApplication::translate("UiStudentOrder", "\345\210\233\345\273\272\351\242\204\347\272\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("UiStudentOrder", "\345\210\233\345\273\272\346\226\260\351\242\204\347\272\246", Q_NULLPTR));
        label->setText(QApplication::translate("UiStudentOrder", "\351\200\211\346\213\251\346\234\272\346\210\277\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("UiStudentOrder", "\346\234\272\346\210\277\345\256\271\351\207\217\357\274\232", Q_NULLPTR));
        label_capacity->setText(QApplication::translate("UiStudentOrder", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("UiStudentOrder", "\351\200\211\346\213\251\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("UiStudentOrder", "\351\200\211\346\213\251\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        groupBox->setTitle(QString());
        rb_morning->setText(QApplication::translate("UiStudentOrder", "\344\270\212\345\215\210", Q_NULLPTR));
        rb_afternoon->setText(QApplication::translate("UiStudentOrder", "\344\270\213\345\215\210", Q_NULLPTR));
        btn_create->setText(QApplication::translate("UiStudentOrder", "\345\210\233\345\273\272", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("UiStudentOrder", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UiStudentOrder: public Ui_UiStudentOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISTUDENTORDER_H

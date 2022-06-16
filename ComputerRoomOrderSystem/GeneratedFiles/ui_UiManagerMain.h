/********************************************************************************
** Form generated from reading UI file 'UiManagerMain.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMANAGERMAIN_H
#define UI_UIMANAGERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiManagerMain
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_student;
    QPushButton *btn_teacher;
    QPushButton *btn_order;
    QPushButton *btn_room;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_quit;

    void setupUi(QWidget *UiManagerMain)
    {
        if (UiManagerMain->objectName().isEmpty())
            UiManagerMain->setObjectName(QStringLiteral("UiManagerMain"));
        UiManagerMain->resize(474, 354);
        verticalLayout_2 = new QVBoxLayout(UiManagerMain);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(UiManagerMain);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(28);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        widget_3 = new QWidget(UiManagerMain);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget = new QWidget(widget_3);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_student = new QPushButton(widget);
        btn_student->setObjectName(QStringLiteral("btn_student"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        btn_student->setFont(font1);

        verticalLayout->addWidget(btn_student);

        btn_teacher = new QPushButton(widget);
        btn_teacher->setObjectName(QStringLiteral("btn_teacher"));
        btn_teacher->setFont(font1);

        verticalLayout->addWidget(btn_teacher);

        btn_order = new QPushButton(widget);
        btn_order->setObjectName(QStringLiteral("btn_order"));
        btn_order->setFont(font1);

        verticalLayout->addWidget(btn_order);

        btn_room = new QPushButton(widget);
        btn_room->setObjectName(QStringLiteral("btn_room"));
        btn_room->setFont(font1);

        verticalLayout->addWidget(btn_room);


        horizontalLayout_2->addWidget(widget);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(0, 25);
        horizontalLayout_2->setStretch(1, 50);
        horizontalLayout_2->setStretch(2, 25);

        verticalLayout_2->addWidget(widget_3);

        widget_2 = new QWidget(UiManagerMain);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(327, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_quit = new QPushButton(widget_2);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font2.setPointSize(12);
        btn_quit->setFont(font2);

        horizontalLayout->addWidget(btn_quit);


        verticalLayout_2->addWidget(widget_2);


        retranslateUi(UiManagerMain);

        QMetaObject::connectSlotsByName(UiManagerMain);
    } // setupUi

    void retranslateUi(QWidget *UiManagerMain)
    {
        UiManagerMain->setWindowTitle(QApplication::translate("UiManagerMain", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", Q_NULLPTR));
        label->setText(QApplication::translate("UiManagerMain", "\347\263\273\347\273\237\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        btn_student->setText(QApplication::translate("UiManagerMain", "\345\255\246\347\224\237\345\270\220\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        btn_teacher->setText(QApplication::translate("UiManagerMain", "\346\225\231\345\270\210\345\270\220\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        btn_order->setText(QApplication::translate("UiManagerMain", "\351\242\204\347\272\246\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        btn_room->setText(QApplication::translate("UiManagerMain", "\346\234\272\346\210\277\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        btn_quit->setText(QApplication::translate("UiManagerMain", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UiManagerMain: public Ui_UiManagerMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMANAGERMAIN_H

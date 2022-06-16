/********************************************************************************
** Form generated from reading UI file 'UiManageRoom.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMANAGEROOM_H
#define UI_UIMANAGEROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiManageRoom
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *UiManageRoom)
    {
        if (UiManageRoom->objectName().isEmpty())
            UiManageRoom->setObjectName(QStringLiteral("UiManageRoom"));
        UiManageRoom->resize(459, 365);
        verticalLayout = new QVBoxLayout(UiManageRoom);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_3 = new QWidget(UiManageRoom);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);


        verticalLayout->addWidget(widget_3);

        widget_2 = new QWidget(UiManageRoom);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView = new QTableView(widget_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_2->addWidget(tableView);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(UiManageRoom);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(312, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(12);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(widget);


        retranslateUi(UiManageRoom);

        QMetaObject::connectSlotsByName(UiManageRoom);
    } // setupUi

    void retranslateUi(QWidget *UiManageRoom)
    {
        UiManageRoom->setWindowTitle(QApplication::translate("UiManageRoom", "\346\234\272\346\210\277\347\256\241\347\220\206", Q_NULLPTR));
        label->setText(QApplication::translate("UiManageRoom", "\346\234\272\346\210\277\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UiManageRoom", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UiManageRoom: public Ui_UiManageRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMANAGEROOM_H

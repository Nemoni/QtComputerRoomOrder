/********************************************************************************
** Form generated from reading UI file 'UiViewButtons.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIVIEWBUTTONS_H
#define UI_UIVIEWBUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiViewButtons
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_info;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton;
    QHBoxLayout *hboxlayout;
    QTableView *tableView;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;

    void setupUi(QWidget *UiViewButtons)
    {
        if (UiViewButtons->objectName().isEmpty())
            UiViewButtons->setObjectName(QStringLiteral("UiViewButtons"));
        UiViewButtons->resize(914, 567);
        horizontalLayout_2 = new QHBoxLayout(UiViewButtons);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_2 = new QWidget(UiViewButtons);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_info = new QLabel(widget);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setPointSize(12);
        label_info->setFont(font);

        horizontalLayout->addWidget(label_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font);

        horizontalLayout->addWidget(radioButton);


        verticalLayout->addWidget(widget);

        hboxlayout = new QHBoxLayout();
        hboxlayout->setSpacing(6);
        hboxlayout->setObjectName(QStringLiteral("hboxlayout"));
        tableView = new QTableView(widget_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        hboxlayout->addWidget(tableView);


        verticalLayout->addLayout(hboxlayout);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(UiViewButtons);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 152, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btn_1 = new QPushButton(widget_4);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(12);
        btn_1->setFont(font1);

        verticalLayout_2->addWidget(btn_1);

        btn_2 = new QPushButton(widget_4);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setFont(font1);

        verticalLayout_2->addWidget(btn_2);

        btn_3 = new QPushButton(widget_4);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setFont(font1);

        verticalLayout_2->addWidget(btn_3);


        verticalLayout_3->addWidget(widget_4);

        verticalLayout_3->setStretch(0, 40);
        verticalLayout_3->setStretch(1, 60);

        horizontalLayout_2->addWidget(widget_3);


        retranslateUi(UiViewButtons);

        QMetaObject::connectSlotsByName(UiViewButtons);
    } // setupUi

    void retranslateUi(QWidget *UiViewButtons)
    {
        UiViewButtons->setWindowTitle(QApplication::translate("UiViewButtons", "UiViewButtons", Q_NULLPTR));
        label_info->setText(QApplication::translate("UiViewButtons", "\351\242\204\347\272\246\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        radioButton->setText(QApplication::translate("UiViewButtons", "\345\217\252\347\234\213\346\210\221\347\232\204\351\242\204\347\272\246", Q_NULLPTR));
        btn_1->setText(QApplication::translate("UiViewButtons", "\346\222\244\345\233\236\351\242\204\347\272\246", Q_NULLPTR));
        btn_2->setText(QApplication::translate("UiViewButtons", "\346\226\260\345\273\272\351\242\204\347\272\246", Q_NULLPTR));
        btn_3->setText(QApplication::translate("UiViewButtons", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UiViewButtons: public Ui_UiViewButtons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIVIEWBUTTONS_H

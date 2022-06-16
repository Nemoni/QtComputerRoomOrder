/********************************************************************************
** Form generated from reading UI file 'UiMgAcountCreate.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMGACOUNTCREATE_H
#define UI_UIMGACOUNTCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiMgAcountCreate
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_pwd;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_create;
    QPushButton *btn_cancel;

    void setupUi(QWidget *UiMgAcountCreate)
    {
        if (UiMgAcountCreate->objectName().isEmpty())
            UiMgAcountCreate->setObjectName(QStringLiteral("UiMgAcountCreate"));
        UiMgAcountCreate->resize(511, 389);
        verticalLayout_2 = new QVBoxLayout(UiMgAcountCreate);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_4 = new QWidget(UiMgAcountCreate);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(28);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_2->addWidget(widget_4);

        widget_8 = new QWidget(UiMgAcountCreate);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(widget_7);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_id = new QLabel(widget);
        label_id->setObjectName(QStringLiteral("label_id"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_id->sizePolicy().hasHeightForWidth());
        label_id->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_id->setFont(font1);
        label_id->setScaledContents(false);
        label_id->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_id);

        lineEdit_id = new QLineEdit(widget);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setMinimumSize(QSize(0, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(12);
        lineEdit_id->setFont(font2);

        horizontalLayout->addWidget(lineEdit_id);

        horizontalLayout->setStretch(0, 40);
        horizontalLayout->setStretch(1, 60);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_name = new QLineEdit(widget_2);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setMinimumSize(QSize(0, 28));
        lineEdit_name->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit_name);

        horizontalLayout_2->setStretch(0, 40);
        horizontalLayout_2->setStretch(1, 60);

        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_pwd = new QLineEdit(widget_3);
        lineEdit_pwd->setObjectName(QStringLiteral("lineEdit_pwd"));
        lineEdit_pwd->setMinimumSize(QSize(0, 28));
        lineEdit_pwd->setFont(font2);

        horizontalLayout_3->addWidget(lineEdit_pwd);

        horizontalLayout_3->setStretch(0, 40);
        horizontalLayout_3->setStretch(1, 60);

        verticalLayout->addWidget(widget_3);


        horizontalLayout_7->addWidget(widget_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget_8);

        widget_6 = new QWidget(UiMgAcountCreate);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btn_create = new QPushButton(widget_5);
        btn_create->setObjectName(QStringLiteral("btn_create"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font3.setPointSize(12);
        btn_create->setFont(font3);

        horizontalLayout_5->addWidget(btn_create);

        btn_cancel = new QPushButton(widget_5);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setFont(font3);

        horizontalLayout_5->addWidget(btn_cancel);


        horizontalLayout_6->addWidget(widget_5);


        verticalLayout_2->addWidget(widget_6);


        retranslateUi(UiMgAcountCreate);

        QMetaObject::connectSlotsByName(UiMgAcountCreate);
    } // setupUi

    void retranslateUi(QWidget *UiMgAcountCreate)
    {
        UiMgAcountCreate->setWindowTitle(QApplication::translate("UiMgAcountCreate", "\345\210\233\345\273\272\345\270\220\346\210\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("UiMgAcountCreate", "\346\226\260\345\273\272\345\270\220\346\210\267", Q_NULLPTR));
        label_id->setText(QApplication::translate("UiMgAcountCreate", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("UiMgAcountCreate", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("UiMgAcountCreate", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        btn_create->setText(QApplication::translate("UiMgAcountCreate", "\345\210\233\345\273\272", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("UiMgAcountCreate", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UiMgAcountCreate: public Ui_UiMgAcountCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMGACOUNTCREATE_H

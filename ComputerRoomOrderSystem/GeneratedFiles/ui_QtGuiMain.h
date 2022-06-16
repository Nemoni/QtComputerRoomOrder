/********************************************************************************
** Form generated from reading UI file 'QtGuiMain.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIMAIN_H
#define UI_QTGUIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiMainClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cbBox_identity;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_id;
    QLineEdit *lineEdit_id;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_pwd;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_quit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QtGuiMainClass)
    {
        if (QtGuiMainClass->objectName().isEmpty())
            QtGuiMainClass->setObjectName(QStringLiteral("QtGuiMainClass"));
        QtGuiMainClass->resize(563, 388);
        verticalLayout_2 = new QVBoxLayout(QtGuiMainClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(QtGuiMainClass);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        widget_3 = new QWidget(QtGuiMainClass);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout = new QVBoxLayout(widget_6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(widget_6);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        cbBox_identity = new QComboBox(widget_2);
        cbBox_identity->setObjectName(QStringLiteral("cbBox_identity"));
        cbBox_identity->setMinimumSize(QSize(0, 28));
        cbBox_identity->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(12);
        cbBox_identity->setFont(font2);

        horizontalLayout_3->addWidget(cbBox_identity);

        horizontalLayout_3->setStretch(0, 40);
        horizontalLayout_3->setStretch(1, 60);

        verticalLayout->addWidget(widget_2);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_id = new QLabel(widget_5);
        label_id->setObjectName(QStringLiteral("label_id"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(12);
        label_id->setFont(font3);
        label_id->setLayoutDirection(Qt::LeftToRight);
        label_id->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_id);

        lineEdit_id = new QLineEdit(widget_5);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setMinimumSize(QSize(0, 28));
        lineEdit_id->setFont(font2);

        horizontalLayout_4->addWidget(lineEdit_id);

        horizontalLayout_4->setStretch(0, 40);
        horizontalLayout_4->setStretch(1, 60);

        verticalLayout->addWidget(widget_5);

        widget = new QWidget(widget_6);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_4);

        lineEdit_pwd = new QLineEdit(widget);
        lineEdit_pwd->setObjectName(QStringLiteral("lineEdit_pwd"));
        lineEdit_pwd->setMinimumSize(QSize(0, 28));
        lineEdit_pwd->setFont(font2);
        lineEdit_pwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(lineEdit_pwd);

        horizontalLayout_5->setStretch(0, 40);
        horizontalLayout_5->setStretch(1, 60);

        verticalLayout->addWidget(widget);


        horizontalLayout->addWidget(widget_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(QtGuiMainClass);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btn_login = new QPushButton(widget_4);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font4.setPointSize(12);
        btn_login->setFont(font4);

        horizontalLayout_2->addWidget(btn_login);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btn_quit = new QPushButton(widget_4);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));
        btn_quit->setFont(font4);

        horizontalLayout_2->addWidget(btn_quit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 40);

        verticalLayout_2->addWidget(widget_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(QtGuiMainClass);

        QMetaObject::connectSlotsByName(QtGuiMainClass);
    } // setupUi

    void retranslateUi(QWidget *QtGuiMainClass)
    {
        QtGuiMainClass->setWindowTitle(QApplication::translate("QtGuiMainClass", "\350\257\267\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("QtGuiMainClass", "\346\234\272\346\210\277\351\242\204\347\272\246\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtGuiMainClass", "\351\200\211\346\213\251\350\272\253\344\273\275\357\274\232", Q_NULLPTR));
        label_id->setText(QApplication::translate("QtGuiMainClass", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtGuiMainClass", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        btn_login->setText(QApplication::translate("QtGuiMainClass", "\347\231\273\345\275\225", Q_NULLPTR));
        btn_quit->setText(QApplication::translate("QtGuiMainClass", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiMainClass: public Ui_QtGuiMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIMAIN_H

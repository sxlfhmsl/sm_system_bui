/********************************************************************************
** Form generated from reading UI file 'admin_logmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGMANAGE_H
#define UI_ADMIN_LOGMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/widget_datagrid_pa.h"

QT_BEGIN_NAMESPACE

class Ui_Admin_LogManage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Account;
    QLabel *label_2;
    QComboBox *comboBox_Type;
    QLabel *label_3;
    QLineEdit *lineEdit_Model;
    QLabel *label_4;
    QLineEdit *lineEdit_OpLog;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit_Begin;
    QLabel *label_6;
    QDateTimeEdit *dateTimeEdit_End;
    QPushButton *pushButton_Query;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_SelectAll;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_DelSel;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_Content;
    QGridLayout *gridLayout;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Admin_LogManage)
    {
        if (Admin_LogManage->objectName().isEmpty())
            Admin_LogManage->setObjectName(QStringLiteral("Admin_LogManage"));
        Admin_LogManage->resize(1153, 590);
        verticalLayout = new QVBoxLayout(Admin_LogManage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Admin_LogManage);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_Bar);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(frame_Bar);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Account = new QLineEdit(widget);
        lineEdit_Account->setObjectName(QStringLiteral("lineEdit_Account"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Account->sizePolicy().hasHeightForWidth());
        lineEdit_Account->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit_Account);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox_Type = new QComboBox(widget);
        comboBox_Type->setObjectName(QStringLiteral("comboBox_Type"));

        horizontalLayout->addWidget(comboBox_Type);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_Model = new QLineEdit(widget);
        lineEdit_Model->setObjectName(QStringLiteral("lineEdit_Model"));
        sizePolicy.setHeightForWidth(lineEdit_Model->sizePolicy().hasHeightForWidth());
        lineEdit_Model->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit_Model);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_OpLog = new QLineEdit(widget);
        lineEdit_OpLog->setObjectName(QStringLiteral("lineEdit_OpLog"));
        sizePolicy.setHeightForWidth(lineEdit_OpLog->sizePolicy().hasHeightForWidth());
        lineEdit_OpLog->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit_OpLog);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        dateTimeEdit_Begin = new QDateTimeEdit(widget);
        dateTimeEdit_Begin->setObjectName(QStringLiteral("dateTimeEdit_Begin"));
        dateTimeEdit_Begin->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_Begin);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        dateTimeEdit_End = new QDateTimeEdit(widget);
        dateTimeEdit_End->setObjectName(QStringLiteral("dateTimeEdit_End"));
        dateTimeEdit_End->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_End);

        pushButton_Query = new QPushButton(widget);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        horizontalLayout->addWidget(pushButton_Query);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(frame_Bar);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_SelectAll = new QPushButton(widget_2);
        pushButton_SelectAll->setObjectName(QStringLiteral("pushButton_SelectAll"));

        horizontalLayout_2->addWidget(pushButton_SelectAll);

        pushButton_Cancel = new QPushButton(widget_2);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout_2->addWidget(pushButton_Cancel);

        pushButton_DelSel = new QPushButton(widget_2);
        pushButton_DelSel->setObjectName(QStringLiteral("pushButton_DelSel"));

        horizontalLayout_2->addWidget(pushButton_DelSel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Admin_LogManage);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setFrameShape(QFrame::StyledPanel);
        frame_Content->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Content);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_DataGrid = new Widget_DataGrid_Pa(frame_Content);
        widget_DataGrid->setObjectName(QStringLiteral("widget_DataGrid"));

        gridLayout->addWidget(widget_DataGrid, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_Content);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Admin_LogManage);

        QMetaObject::connectSlotsByName(Admin_LogManage);
    } // setupUi

    void retranslateUi(QWidget *Admin_LogManage)
    {
        Admin_LogManage->setWindowTitle(QApplication::translate("Admin_LogManage", "Widget_Log_Manage", Q_NULLPTR));
        label->setText(QApplication::translate("Admin_LogManage", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Admin_LogManage", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        comboBox_Type->clear();
        comboBox_Type->insertItems(0, QStringList()
         << QApplication::translate("Admin_LogManage", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Admin_LogManage", "\346\250\241\345\235\227\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Admin_LogManage", "\346\223\215\344\275\234\350\256\260\345\275\225\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Admin_LogManage", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Admin_LogManage", "\350\207\263", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Admin_LogManage", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_SelectAll->setText(QApplication::translate("Admin_LogManage", "\345\205\250\351\200\211", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("Admin_LogManage", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_DelSel->setText(QApplication::translate("Admin_LogManage", "\345\210\240\351\231\244\351\200\211\346\213\251\351\241\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin_LogManage: public Ui_Admin_LogManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGMANAGE_H

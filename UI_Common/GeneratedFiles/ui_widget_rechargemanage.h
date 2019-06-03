/********************************************************************************
** Form generated from reading UI file 'widget_rechargemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RECHARGEMANAGE_H
#define UI_WIDGET_RECHARGEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/widget_datagrid_pa.h"

QT_BEGIN_NAMESPACE

class Ui_Widget_RechargeManage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QComboBox *comboBox_Status;
    QLabel *label_VipCode;
    QLabel *label_Status;
    QLineEdit *lineEdit_VipCode;
    QLabel *label_Time;
    QDateTimeEdit *dateTimeEdit_End;
    QDateTimeEdit *dateTimeEdit_Begin;
    QPushButton *pushButton_Query;
    QLabel *label_To;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_RechargeManage)
    {
        if (Widget_RechargeManage->objectName().isEmpty())
            Widget_RechargeManage->setObjectName(QStringLiteral("Widget_RechargeManage"));
        Widget_RechargeManage->resize(956, 612);
        verticalLayout = new QVBoxLayout(Widget_RechargeManage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Widget_RechargeManage);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox_Status = new QComboBox(frame_Bar);
        comboBox_Status->setObjectName(QStringLiteral("comboBox_Status"));

        gridLayout->addWidget(comboBox_Status, 0, 3, 1, 1);

        label_VipCode = new QLabel(frame_Bar);
        label_VipCode->setObjectName(QStringLiteral("label_VipCode"));

        gridLayout->addWidget(label_VipCode, 0, 0, 1, 1);

        label_Status = new QLabel(frame_Bar);
        label_Status->setObjectName(QStringLiteral("label_Status"));

        gridLayout->addWidget(label_Status, 0, 2, 1, 1);

        lineEdit_VipCode = new QLineEdit(frame_Bar);
        lineEdit_VipCode->setObjectName(QStringLiteral("lineEdit_VipCode"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_VipCode->sizePolicy().hasHeightForWidth());
        lineEdit_VipCode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_VipCode, 0, 1, 1, 1);

        label_Time = new QLabel(frame_Bar);
        label_Time->setObjectName(QStringLiteral("label_Time"));

        gridLayout->addWidget(label_Time, 0, 4, 1, 1);

        dateTimeEdit_End = new QDateTimeEdit(frame_Bar);
        dateTimeEdit_End->setObjectName(QStringLiteral("dateTimeEdit_End"));
        dateTimeEdit_End->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_End, 0, 7, 1, 1);

        dateTimeEdit_Begin = new QDateTimeEdit(frame_Bar);
        dateTimeEdit_Begin->setObjectName(QStringLiteral("dateTimeEdit_Begin"));
        dateTimeEdit_Begin->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_Begin, 0, 5, 1, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout->addWidget(pushButton_Query, 0, 8, 1, 1);

        label_To = new QLabel(frame_Bar);
        label_To->setObjectName(QStringLiteral("label_To"));

        gridLayout->addWidget(label_To, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 9, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Widget_RechargeManage);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setFrameShape(QFrame::StyledPanel);
        frame_Content->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Content);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_DataGrid = new Widget_DataGrid_Pa(frame_Content);
        widget_DataGrid->setObjectName(QStringLiteral("widget_DataGrid"));

        gridLayout_2->addWidget(widget_DataGrid, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_Content);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Widget_RechargeManage);

        QMetaObject::connectSlotsByName(Widget_RechargeManage);
    } // setupUi

    void retranslateUi(QWidget *Widget_RechargeManage)
    {
        Widget_RechargeManage->setWindowTitle(QApplication::translate("Widget_RechargeManage", "Widget_Recharge_Manage", Q_NULLPTR));
        comboBox_Status->clear();
        comboBox_Status->insertItems(0, QStringList()
         << QApplication::translate("Widget_RechargeManage", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_VipCode->setText(QApplication::translate("Widget_RechargeManage", "\344\274\232\345\221\230\344\273\243\347\240\201\357\274\232", Q_NULLPTR));
        label_Status->setText(QApplication::translate("Widget_RechargeManage", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_Time->setText(QApplication::translate("Widget_RechargeManage", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Widget_RechargeManage", "\346\237\245\350\257\242", Q_NULLPTR));
        label_To->setText(QApplication::translate("Widget_RechargeManage", "\350\207\263", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_RechargeManage: public Ui_Widget_RechargeManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RECHARGEMANAGE_H

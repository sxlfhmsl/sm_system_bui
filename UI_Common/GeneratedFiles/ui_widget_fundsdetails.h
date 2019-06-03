/********************************************************************************
** Form generated from reading UI file 'widget_fundsdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_FUNDSDETAILS_H
#define UI_WIDGET_FUNDSDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
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

class Ui_Widget_FundsDetails
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_Value;
    QFrame *frame_Time;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *dateTimeEdit_Begin;
    QLabel *label_To;
    QDateTimeEdit *dateTimeEdit_End;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_TranNum;
    QLineEdit *lineEdit_VipAccount;
    QLineEdit *lineEdit_Num;
    QLabel *label_TranNum;
    QLabel *label_VipAccount;
    QLineEdit *lineEdit_Note;
    QLabel *label_Num;
    QLabel *label_Note;
    QLabel *label_Value;
    QLabel *label_Founder;
    QLabel *label_BillType;
    QComboBox *comboBox_FounderType;
    QLabel *label_FounderType;
    QComboBox *comboBox_BillType;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_Founder;
    QLabel *label_Time;
    QPushButton *pushButton_Query;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_FundsDetails)
    {
        if (Widget_FundsDetails->objectName().isEmpty())
            Widget_FundsDetails->setObjectName(QStringLiteral("Widget_FundsDetails"));
        Widget_FundsDetails->resize(1097, 649);
        verticalLayout = new QVBoxLayout(Widget_FundsDetails);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Widget_FundsDetails);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        doubleSpinBox_Value = new QDoubleSpinBox(frame_Bar);
        doubleSpinBox_Value->setObjectName(QStringLiteral("doubleSpinBox_Value"));

        gridLayout->addWidget(doubleSpinBox_Value, 1, 1, 1, 1);

        frame_Time = new QFrame(frame_Bar);
        frame_Time->setObjectName(QStringLiteral("frame_Time"));
        frame_Time->setFrameShape(QFrame::StyledPanel);
        frame_Time->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_Time);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dateTimeEdit_Begin = new QDateTimeEdit(frame_Time);
        dateTimeEdit_Begin->setObjectName(QStringLiteral("dateTimeEdit_Begin"));
        dateTimeEdit_Begin->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_Begin);

        label_To = new QLabel(frame_Time);
        label_To->setObjectName(QStringLiteral("label_To"));

        horizontalLayout->addWidget(label_To);

        dateTimeEdit_End = new QDateTimeEdit(frame_Time);
        dateTimeEdit_End->setObjectName(QStringLiteral("dateTimeEdit_End"));
        dateTimeEdit_End->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_End);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(frame_Time, 1, 7, 1, 3);

        lineEdit_TranNum = new QLineEdit(frame_Bar);
        lineEdit_TranNum->setObjectName(QStringLiteral("lineEdit_TranNum"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_TranNum->sizePolicy().hasHeightForWidth());
        lineEdit_TranNum->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_TranNum, 0, 5, 1, 1);

        lineEdit_VipAccount = new QLineEdit(frame_Bar);
        lineEdit_VipAccount->setObjectName(QStringLiteral("lineEdit_VipAccount"));
        sizePolicy.setHeightForWidth(lineEdit_VipAccount->sizePolicy().hasHeightForWidth());
        lineEdit_VipAccount->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_VipAccount, 0, 3, 1, 1);

        lineEdit_Num = new QLineEdit(frame_Bar);
        lineEdit_Num->setObjectName(QStringLiteral("lineEdit_Num"));
        sizePolicy.setHeightForWidth(lineEdit_Num->sizePolicy().hasHeightForWidth());
        lineEdit_Num->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_Num, 0, 1, 1, 1);

        label_TranNum = new QLabel(frame_Bar);
        label_TranNum->setObjectName(QStringLiteral("label_TranNum"));

        gridLayout->addWidget(label_TranNum, 0, 4, 1, 1);

        label_VipAccount = new QLabel(frame_Bar);
        label_VipAccount->setObjectName(QStringLiteral("label_VipAccount"));

        gridLayout->addWidget(label_VipAccount, 0, 2, 1, 1);

        lineEdit_Note = new QLineEdit(frame_Bar);
        lineEdit_Note->setObjectName(QStringLiteral("lineEdit_Note"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_Note->sizePolicy().hasHeightForWidth());
        lineEdit_Note->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_Note, 0, 9, 1, 1);

        label_Num = new QLabel(frame_Bar);
        label_Num->setObjectName(QStringLiteral("label_Num"));

        gridLayout->addWidget(label_Num, 0, 0, 1, 1);

        label_Note = new QLabel(frame_Bar);
        label_Note->setObjectName(QStringLiteral("label_Note"));

        gridLayout->addWidget(label_Note, 0, 8, 1, 1);

        label_Value = new QLabel(frame_Bar);
        label_Value->setObjectName(QStringLiteral("label_Value"));

        gridLayout->addWidget(label_Value, 1, 0, 1, 1);

        label_Founder = new QLabel(frame_Bar);
        label_Founder->setObjectName(QStringLiteral("label_Founder"));

        gridLayout->addWidget(label_Founder, 0, 6, 1, 1);

        label_BillType = new QLabel(frame_Bar);
        label_BillType->setObjectName(QStringLiteral("label_BillType"));

        gridLayout->addWidget(label_BillType, 1, 2, 1, 1);

        comboBox_FounderType = new QComboBox(frame_Bar);
        comboBox_FounderType->setObjectName(QStringLiteral("comboBox_FounderType"));

        gridLayout->addWidget(comboBox_FounderType, 1, 5, 1, 1);

        label_FounderType = new QLabel(frame_Bar);
        label_FounderType->setObjectName(QStringLiteral("label_FounderType"));

        gridLayout->addWidget(label_FounderType, 1, 4, 1, 1);

        comboBox_BillType = new QComboBox(frame_Bar);
        comboBox_BillType->setObjectName(QStringLiteral("comboBox_BillType"));

        gridLayout->addWidget(comboBox_BillType, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 11, 2, 1);

        lineEdit_Founder = new QLineEdit(frame_Bar);
        lineEdit_Founder->setObjectName(QStringLiteral("lineEdit_Founder"));
        sizePolicy1.setHeightForWidth(lineEdit_Founder->sizePolicy().hasHeightForWidth());
        lineEdit_Founder->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_Founder, 0, 7, 1, 1);

        label_Time = new QLabel(frame_Bar);
        label_Time->setObjectName(QStringLiteral("label_Time"));

        gridLayout->addWidget(label_Time, 1, 6, 1, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout->addWidget(pushButton_Query, 1, 12, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Widget_FundsDetails);
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


        retranslateUi(Widget_FundsDetails);

        QMetaObject::connectSlotsByName(Widget_FundsDetails);
    } // setupUi

    void retranslateUi(QWidget *Widget_FundsDetails)
    {
        Widget_FundsDetails->setWindowTitle(QApplication::translate("Widget_FundsDetails", "Widget_Funds_Details", Q_NULLPTR));
        label_To->setText(QApplication::translate("Widget_FundsDetails", "\350\207\263", Q_NULLPTR));
        label_TranNum->setText(QApplication::translate("Widget_FundsDetails", "\344\272\244\346\230\223\345\215\225\345\217\267\357\274\232", Q_NULLPTR));
        label_VipAccount->setText(QApplication::translate("Widget_FundsDetails", "\344\274\232\345\221\230\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_Num->setText(QApplication::translate("Widget_FundsDetails", "\345\215\225\345\217\267\357\274\232", Q_NULLPTR));
        label_Note->setText(QApplication::translate("Widget_FundsDetails", "\345\244\207\346\263\250\357\274\232", Q_NULLPTR));
        label_Value->setText(QApplication::translate("Widget_FundsDetails", "\345\217\221\347\224\237\351\207\221\351\242\235\357\274\232", Q_NULLPTR));
        label_Founder->setText(QApplication::translate("Widget_FundsDetails", "\345\210\233\345\273\272\344\272\272\357\274\232", Q_NULLPTR));
        label_BillType->setText(QApplication::translate("Widget_FundsDetails", "\350\264\246\345\215\225\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        comboBox_FounderType->clear();
        comboBox_FounderType->insertItems(0, QStringList()
         << QApplication::translate("Widget_FundsDetails", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_FounderType->setText(QApplication::translate("Widget_FundsDetails", "\345\210\233\345\273\272\344\272\272\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        comboBox_BillType->clear();
        comboBox_BillType->insertItems(0, QStringList()
         << QApplication::translate("Widget_FundsDetails", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_Time->setText(QApplication::translate("Widget_FundsDetails", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Widget_FundsDetails", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_FundsDetails: public Ui_Widget_FundsDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_FUNDSDETAILS_H

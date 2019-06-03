/********************************************************************************
** Form generated from reading UI file 'widget_tradingbill.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_TRADINGBILL_H
#define UI_WIDGET_TRADINGBILL_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/widget_datagrid_pa.h"

QT_BEGIN_NAMESPACE

class Ui_Widget_TradingBill
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Bar_Title;
    QFrame *frame_Bar_Content;
    QGridLayout *gridLayout;
    QFrame *frame_TimeSpan;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *dateTimeEdit_Begin;
    QLabel *label_To;
    QDateTimeEdit *dateTimeEdit_End;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_Button;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Query;
    QLabel *label_Num;
    QLineEdit *lineEdit_Account;
    QLabel *label_TranType;
    QLineEdit *lineEdit_StockCode;
    QLabel *label_Account;
    QLabel *label_Time;
    QLineEdit *lineEdit_Num;
    QComboBox *comboBox_TranType;
    QSpinBox *spinBox_Lots;
    QLineEdit *lineEdit_StockName;
    QLabel *label_StockName;
    QLabel *label_Lots;
    QLabel *label_StockCode;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_TradingBill)
    {
        if (Widget_TradingBill->objectName().isEmpty())
            Widget_TradingBill->setObjectName(QStringLiteral("Widget_TradingBill"));
        Widget_TradingBill->resize(1049, 505);
        verticalLayout = new QVBoxLayout(Widget_TradingBill);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Widget_TradingBill);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_Bar);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Bar_Title = new QLabel(frame_Bar);
        label_Bar_Title->setObjectName(QStringLiteral("label_Bar_Title"));

        verticalLayout_2->addWidget(label_Bar_Title);

        frame_Bar_Content = new QFrame(frame_Bar);
        frame_Bar_Content->setObjectName(QStringLiteral("frame_Bar_Content"));
        frame_Bar_Content->setFrameShape(QFrame::StyledPanel);
        frame_Bar_Content->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar_Content);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame_TimeSpan = new QFrame(frame_Bar_Content);
        frame_TimeSpan->setObjectName(QStringLiteral("frame_TimeSpan"));
        frame_TimeSpan->setFrameShape(QFrame::StyledPanel);
        frame_TimeSpan->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_TimeSpan);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dateTimeEdit_Begin = new QDateTimeEdit(frame_TimeSpan);
        dateTimeEdit_Begin->setObjectName(QStringLiteral("dateTimeEdit_Begin"));
        dateTimeEdit_Begin->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_Begin);

        label_To = new QLabel(frame_TimeSpan);
        label_To->setObjectName(QStringLiteral("label_To"));

        horizontalLayout->addWidget(label_To);

        dateTimeEdit_End = new QDateTimeEdit(frame_TimeSpan);
        dateTimeEdit_End->setObjectName(QStringLiteral("dateTimeEdit_End"));
        dateTimeEdit_End->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_End);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addWidget(frame_TimeSpan, 1, 4, 1, 3);

        frame_Button = new QFrame(frame_Bar_Content);
        frame_Button->setObjectName(QStringLiteral("frame_Button"));
        frame_Button->setFrameShape(QFrame::StyledPanel);
        frame_Button->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_Button);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_Query = new QPushButton(frame_Button);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        horizontalLayout_2->addWidget(pushButton_Query);


        gridLayout->addWidget(frame_Button, 1, 10, 1, 1);

        label_Num = new QLabel(frame_Bar_Content);
        label_Num->setObjectName(QStringLiteral("label_Num"));

        gridLayout->addWidget(label_Num, 0, 2, 1, 1);

        lineEdit_Account = new QLineEdit(frame_Bar_Content);
        lineEdit_Account->setObjectName(QStringLiteral("lineEdit_Account"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Account->sizePolicy().hasHeightForWidth());
        lineEdit_Account->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_Account, 0, 6, 1, 1);

        label_TranType = new QLabel(frame_Bar_Content);
        label_TranType->setObjectName(QStringLiteral("label_TranType"));

        gridLayout->addWidget(label_TranType, 0, 0, 1, 1);

        lineEdit_StockCode = new QLineEdit(frame_Bar_Content);
        lineEdit_StockCode->setObjectName(QStringLiteral("lineEdit_StockCode"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_StockCode->sizePolicy().hasHeightForWidth());
        lineEdit_StockCode->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEdit_StockCode, 0, 8, 1, 1);

        label_Account = new QLabel(frame_Bar_Content);
        label_Account->setObjectName(QStringLiteral("label_Account"));

        gridLayout->addWidget(label_Account, 0, 5, 1, 1);

        label_Time = new QLabel(frame_Bar_Content);
        label_Time->setObjectName(QStringLiteral("label_Time"));

        gridLayout->addWidget(label_Time, 1, 2, 1, 1);

        lineEdit_Num = new QLineEdit(frame_Bar_Content);
        lineEdit_Num->setObjectName(QStringLiteral("lineEdit_Num"));
        sizePolicy.setHeightForWidth(lineEdit_Num->sizePolicy().hasHeightForWidth());
        lineEdit_Num->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_Num, 0, 4, 1, 1);

        comboBox_TranType = new QComboBox(frame_Bar_Content);
        comboBox_TranType->setObjectName(QStringLiteral("comboBox_TranType"));

        gridLayout->addWidget(comboBox_TranType, 0, 1, 1, 1);

        spinBox_Lots = new QSpinBox(frame_Bar_Content);
        spinBox_Lots->setObjectName(QStringLiteral("spinBox_Lots"));

        gridLayout->addWidget(spinBox_Lots, 1, 1, 1, 1);

        lineEdit_StockName = new QLineEdit(frame_Bar_Content);
        lineEdit_StockName->setObjectName(QStringLiteral("lineEdit_StockName"));
        sizePolicy.setHeightForWidth(lineEdit_StockName->sizePolicy().hasHeightForWidth());
        lineEdit_StockName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_StockName, 0, 10, 1, 1);

        label_StockName = new QLabel(frame_Bar_Content);
        label_StockName->setObjectName(QStringLiteral("label_StockName"));

        gridLayout->addWidget(label_StockName, 0, 9, 1, 1);

        label_Lots = new QLabel(frame_Bar_Content);
        label_Lots->setObjectName(QStringLiteral("label_Lots"));

        gridLayout->addWidget(label_Lots, 1, 0, 1, 1);

        label_StockCode = new QLabel(frame_Bar_Content);
        label_StockCode->setObjectName(QStringLiteral("label_StockCode"));

        gridLayout->addWidget(label_StockCode, 0, 7, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 11, 2, 1);


        verticalLayout_2->addWidget(frame_Bar_Content);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Widget_TradingBill);
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


        retranslateUi(Widget_TradingBill);

        QMetaObject::connectSlotsByName(Widget_TradingBill);
    } // setupUi

    void retranslateUi(QWidget *Widget_TradingBill)
    {
        Widget_TradingBill->setWindowTitle(QApplication::translate("Widget_TradingBill", "Widget_Trading_Bill", Q_NULLPTR));
        label_Bar_Title->setText(QApplication::translate("Widget_TradingBill", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\270\251\351\246\250\346\217\220\347\244\272\357\274\232\346\234\254\350\264\246\345\215\225\345\212\237\350\203\275\344\273\205\344\276\233\344\272\206\350\247\243\347\224\250\346\210\267\346\257\217\346\227\245\347\232\204\342\200\234\345\212\250\346\200\201\346\215\237\347\233\212\342\200\235\345\217\202\350\200\203\344\275\234\347\224\250\357\274\214\345\205\267\344\275\223\344\273\245\347\224\250\346\210\267\345\271\263\344\273\223\346\225\260\346\215\256\344\270\272\345\207\206\343\200\202</span></p></body></html>", Q_NULLPTR));
        label_To->setText(QApplication::translate("Widget_TradingBill", "\350\207\263", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Widget_TradingBill", "\346\237\245\350\257\242", Q_NULLPTR));
        label_Num->setText(QApplication::translate("Widget_TradingBill", "\345\215\225\345\217\267\357\274\232", Q_NULLPTR));
        label_TranType->setText(QApplication::translate("Widget_TradingBill", "\344\272\244\346\230\223\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        label_Account->setText(QApplication::translate("Widget_TradingBill", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_Time->setText(QApplication::translate("Widget_TradingBill", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        comboBox_TranType->clear();
        comboBox_TranType->insertItems(0, QStringList()
         << QApplication::translate("Widget_TradingBill", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_StockName->setText(QApplication::translate("Widget_TradingBill", "\350\202\241\347\245\250\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_Lots->setText(QApplication::translate("Widget_TradingBill", "\346\211\213\346\225\260\357\274\232", Q_NULLPTR));
        label_StockCode->setText(QApplication::translate("Widget_TradingBill", "\350\202\241\347\245\250\344\273\243\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_TradingBill: public Ui_Widget_TradingBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_TRADINGBILL_H

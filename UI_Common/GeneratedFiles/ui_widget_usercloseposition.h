/********************************************************************************
** Form generated from reading UI file 'widget_usercloseposition.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_USERCLOSEPOSITION_H
#define UI_WIDGET_USERCLOSEPOSITION_H

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

class Ui_Widget_UserClosePosition
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QLabel *label_Time;
    QLabel *label_Account;
    QPushButton *pushButton_Query;
    QLineEdit *lineEdit_Account;
    QLabel *label_Agent;
    QLabel *label_To;
    QComboBox *comboBox_Agent;
    QDateTimeEdit *dateTimeEdit_Begin;
    QDateTimeEdit *dateTimeEdit_End;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_UserClosePosition)
    {
        if (Widget_UserClosePosition->objectName().isEmpty())
            Widget_UserClosePosition->setObjectName(QStringLiteral("Widget_UserClosePosition"));
        Widget_UserClosePosition->resize(995, 638);
        verticalLayout = new QVBoxLayout(Widget_UserClosePosition);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Widget_UserClosePosition);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_Time = new QLabel(frame_Bar);
        label_Time->setObjectName(QStringLiteral("label_Time"));

        gridLayout->addWidget(label_Time, 0, 4, 1, 1);

        label_Account = new QLabel(frame_Bar);
        label_Account->setObjectName(QStringLiteral("label_Account"));

        gridLayout->addWidget(label_Account, 0, 2, 1, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout->addWidget(pushButton_Query, 0, 8, 1, 1);

        lineEdit_Account = new QLineEdit(frame_Bar);
        lineEdit_Account->setObjectName(QStringLiteral("lineEdit_Account"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Account->sizePolicy().hasHeightForWidth());
        lineEdit_Account->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_Account, 0, 3, 1, 1);

        label_Agent = new QLabel(frame_Bar);
        label_Agent->setObjectName(QStringLiteral("label_Agent"));

        gridLayout->addWidget(label_Agent, 0, 0, 1, 1);

        label_To = new QLabel(frame_Bar);
        label_To->setObjectName(QStringLiteral("label_To"));

        gridLayout->addWidget(label_To, 0, 6, 1, 1);

        comboBox_Agent = new QComboBox(frame_Bar);
        comboBox_Agent->setObjectName(QStringLiteral("comboBox_Agent"));

        gridLayout->addWidget(comboBox_Agent, 0, 1, 1, 1);

        dateTimeEdit_Begin = new QDateTimeEdit(frame_Bar);
        dateTimeEdit_Begin->setObjectName(QStringLiteral("dateTimeEdit_Begin"));
        dateTimeEdit_Begin->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_Begin, 0, 5, 1, 1);

        dateTimeEdit_End = new QDateTimeEdit(frame_Bar);
        dateTimeEdit_End->setObjectName(QStringLiteral("dateTimeEdit_End"));
        dateTimeEdit_End->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_End, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 9, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Widget_UserClosePosition);
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


        retranslateUi(Widget_UserClosePosition);

        QMetaObject::connectSlotsByName(Widget_UserClosePosition);
    } // setupUi

    void retranslateUi(QWidget *Widget_UserClosePosition)
    {
        Widget_UserClosePosition->setWindowTitle(QApplication::translate("Widget_UserClosePosition", "Widget_User_ClosePosition", Q_NULLPTR));
        label_Time->setText(QApplication::translate("Widget_UserClosePosition", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_Account->setText(QApplication::translate("Widget_UserClosePosition", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Widget_UserClosePosition", "\346\237\245\350\257\242", Q_NULLPTR));
        label_Agent->setText(QApplication::translate("Widget_UserClosePosition", "\344\273\243\347\220\206\345\225\206\357\274\232", Q_NULLPTR));
        label_To->setText(QApplication::translate("Widget_UserClosePosition", "\350\207\263", Q_NULLPTR));
        comboBox_Agent->clear();
        comboBox_Agent->insertItems(0, QStringList()
         << QApplication::translate("Widget_UserClosePosition", "\345\205\250\351\203\250", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Widget_UserClosePosition: public Ui_Widget_UserClosePosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_USERCLOSEPOSITION_H

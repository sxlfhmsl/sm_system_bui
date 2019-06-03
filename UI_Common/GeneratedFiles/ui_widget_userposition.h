/********************************************************************************
** Form generated from reading UI file 'widget_userposition.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_USERPOSITION_H
#define UI_WIDGET_USERPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/widget_datagrid_pa.h"

QT_BEGIN_NAMESPACE

class Ui_Widget_UserPosition
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Flush;
    QComboBox *comboBox_Agent;
    QLabel *label_Clerk;
    QComboBox *comboBox_Clerk;
    QLabel *label_Agent;
    QLabel *label_Member;
    QComboBox *comboBox_Member;
    QPushButton *pushButton_Query;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_UserPosition)
    {
        if (Widget_UserPosition->objectName().isEmpty())
            Widget_UserPosition->setObjectName(QStringLiteral("Widget_UserPosition"));
        Widget_UserPosition->resize(998, 677);
        verticalLayout = new QVBoxLayout(Widget_UserPosition);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Widget_UserPosition);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_Flush = new QPushButton(frame_Bar);
        pushButton_Flush->setObjectName(QStringLiteral("pushButton_Flush"));

        gridLayout->addWidget(pushButton_Flush, 0, 0, 1, 1);

        comboBox_Agent = new QComboBox(frame_Bar);
        comboBox_Agent->setObjectName(QStringLiteral("comboBox_Agent"));

        gridLayout->addWidget(comboBox_Agent, 0, 2, 1, 1);

        label_Clerk = new QLabel(frame_Bar);
        label_Clerk->setObjectName(QStringLiteral("label_Clerk"));

        gridLayout->addWidget(label_Clerk, 0, 3, 1, 1);

        comboBox_Clerk = new QComboBox(frame_Bar);
        comboBox_Clerk->setObjectName(QStringLiteral("comboBox_Clerk"));

        gridLayout->addWidget(comboBox_Clerk, 0, 4, 1, 1);

        label_Agent = new QLabel(frame_Bar);
        label_Agent->setObjectName(QStringLiteral("label_Agent"));

        gridLayout->addWidget(label_Agent, 0, 1, 1, 1);

        label_Member = new QLabel(frame_Bar);
        label_Member->setObjectName(QStringLiteral("label_Member"));

        gridLayout->addWidget(label_Member, 0, 5, 1, 1);

        comboBox_Member = new QComboBox(frame_Bar);
        comboBox_Member->setObjectName(QStringLiteral("comboBox_Member"));

        gridLayout->addWidget(comboBox_Member, 0, 6, 1, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout->addWidget(pushButton_Query, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 8, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Widget_UserPosition);
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


        retranslateUi(Widget_UserPosition);

        QMetaObject::connectSlotsByName(Widget_UserPosition);
    } // setupUi

    void retranslateUi(QWidget *Widget_UserPosition)
    {
        Widget_UserPosition->setWindowTitle(QApplication::translate("Widget_UserPosition", "Widget_User_Position", Q_NULLPTR));
        pushButton_Flush->setText(QApplication::translate("Widget_UserPosition", "\345\210\267\346\226\260", Q_NULLPTR));
        comboBox_Agent->clear();
        comboBox_Agent->insertItems(0, QStringList()
         << QApplication::translate("Widget_UserPosition", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_Clerk->setText(QApplication::translate("Widget_UserPosition", "\344\270\232\345\212\241\345\221\230\357\274\232", Q_NULLPTR));
        comboBox_Clerk->clear();
        comboBox_Clerk->insertItems(0, QStringList()
         << QApplication::translate("Widget_UserPosition", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_Agent->setText(QApplication::translate("Widget_UserPosition", "\344\273\243\347\220\206\345\225\206\357\274\232", Q_NULLPTR));
        label_Member->setText(QApplication::translate("Widget_UserPosition", "\344\274\232\345\221\230\357\274\232", Q_NULLPTR));
        comboBox_Member->clear();
        comboBox_Member->insertItems(0, QStringList()
         << QApplication::translate("Widget_UserPosition", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        pushButton_Query->setText(QApplication::translate("Widget_UserPosition", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_UserPosition: public Ui_Widget_UserPosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_USERPOSITION_H

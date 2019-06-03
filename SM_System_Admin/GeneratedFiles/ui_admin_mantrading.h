/********************************************************************************
** Form generated from reading UI file 'admin_mantrading.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MANTRADING_H
#define UI_ADMIN_MANTRADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/widget_datagrid_pa.h"

QT_BEGIN_NAMESPACE

class Ui_Admin_ManTrading
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QPushButton *pushButton_ManTrading;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Query;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Admin_ManTrading)
    {
        if (Admin_ManTrading->objectName().isEmpty())
            Admin_ManTrading->setObjectName(QStringLiteral("Admin_ManTrading"));
        Admin_ManTrading->resize(400, 300);
        verticalLayout = new QVBoxLayout(Admin_ManTrading);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Admin_ManTrading);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_ManTrading = new QPushButton(frame_Bar);
        pushButton_ManTrading->setObjectName(QStringLiteral("pushButton_ManTrading"));

        gridLayout->addWidget(pushButton_ManTrading, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout->addWidget(pushButton_Query, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Admin_ManTrading);
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


        retranslateUi(Admin_ManTrading);

        QMetaObject::connectSlotsByName(Admin_ManTrading);
    } // setupUi

    void retranslateUi(QWidget *Admin_ManTrading)
    {
        Admin_ManTrading->setWindowTitle(QApplication::translate("Admin_ManTrading", "Widget_Man_Trading", Q_NULLPTR));
        pushButton_ManTrading->setText(QApplication::translate("Admin_ManTrading", "\346\211\213\345\212\250\345\205\245\346\211\243\346\254\276", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Admin_ManTrading", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin_ManTrading: public Ui_Admin_ManTrading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MANTRADING_H

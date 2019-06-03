/********************************************************************************
** Form generated from reading UI file 'widget_noticemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_NOTICEMANAGE_H
#define UI_WIDGET_NOTICEMANAGE_H

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

class Ui_Widget_NoticeManage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QPushButton *pushButton_AddNotice;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_NoticeManage)
    {
        if (Widget_NoticeManage->objectName().isEmpty())
            Widget_NoticeManage->setObjectName(QStringLiteral("Widget_NoticeManage"));
        Widget_NoticeManage->resize(591, 339);
        verticalLayout = new QVBoxLayout(Widget_NoticeManage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Widget_NoticeManage);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_AddNotice = new QPushButton(frame_Bar);
        pushButton_AddNotice->setObjectName(QStringLiteral("pushButton_AddNotice"));

        gridLayout->addWidget(pushButton_AddNotice, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Widget_NoticeManage);
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


        retranslateUi(Widget_NoticeManage);

        QMetaObject::connectSlotsByName(Widget_NoticeManage);
    } // setupUi

    void retranslateUi(QWidget *Widget_NoticeManage)
    {
        Widget_NoticeManage->setWindowTitle(QApplication::translate("Widget_NoticeManage", "Widget_Notice_Manage", Q_NULLPTR));
        pushButton_AddNotice->setText(QApplication::translate("Widget_NoticeManage", "\346\226\260\345\242\236\345\205\254\345\221\212", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_NoticeManage: public Ui_Widget_NoticeManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_NOTICEMANAGE_H

/********************************************************************************
** Form generated from reading UI file 'widget_memberdrawmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MEMBERDRAWMONEY_H
#define UI_WIDGET_MEMBERDRAWMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_Widget_MemberDrawMoney
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QLabel *label_MemberCode;
    QPushButton *pushButton_Query;
    QLineEdit *lineEdit_AccountName;
    QLineEdit *lineEdit_MemberCode;
    QLabel *label_AccountName;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_MemberDrawMoney)
    {
        if (Widget_MemberDrawMoney->objectName().isEmpty())
            Widget_MemberDrawMoney->setObjectName(QStringLiteral("Widget_MemberDrawMoney"));
        Widget_MemberDrawMoney->resize(748, 598);
        verticalLayout = new QVBoxLayout(Widget_MemberDrawMoney);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Widget_MemberDrawMoney);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_MemberCode = new QLabel(frame_Bar);
        label_MemberCode->setObjectName(QStringLiteral("label_MemberCode"));

        gridLayout->addWidget(label_MemberCode, 0, 2, 1, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout->addWidget(pushButton_Query, 0, 4, 1, 1);

        lineEdit_AccountName = new QLineEdit(frame_Bar);
        lineEdit_AccountName->setObjectName(QStringLiteral("lineEdit_AccountName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_AccountName->sizePolicy().hasHeightForWidth());
        lineEdit_AccountName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_AccountName, 0, 1, 1, 1);

        lineEdit_MemberCode = new QLineEdit(frame_Bar);
        lineEdit_MemberCode->setObjectName(QStringLiteral("lineEdit_MemberCode"));
        sizePolicy.setHeightForWidth(lineEdit_MemberCode->sizePolicy().hasHeightForWidth());
        lineEdit_MemberCode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_MemberCode, 0, 3, 1, 1);

        label_AccountName = new QLabel(frame_Bar);
        label_AccountName->setObjectName(QStringLiteral("label_AccountName"));

        gridLayout->addWidget(label_AccountName, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Widget_MemberDrawMoney);
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


        retranslateUi(Widget_MemberDrawMoney);

        QMetaObject::connectSlotsByName(Widget_MemberDrawMoney);
    } // setupUi

    void retranslateUi(QWidget *Widget_MemberDrawMoney)
    {
        Widget_MemberDrawMoney->setWindowTitle(QApplication::translate("Widget_MemberDrawMoney", "Widget_Member_DrawMoney", Q_NULLPTR));
        label_MemberCode->setText(QApplication::translate("Widget_MemberDrawMoney", "\344\274\232\345\221\230\347\274\226\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Widget_MemberDrawMoney", "\346\237\245\350\257\242", Q_NULLPTR));
        label_AccountName->setText(QApplication::translate("Widget_MemberDrawMoney", "\350\264\246\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_MemberDrawMoney: public Ui_Widget_MemberDrawMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_MEMBERDRAWMONEY_H

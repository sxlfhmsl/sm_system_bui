/********************************************************************************
** Form generated from reading UI file 'agent_withdrawfunds.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENT_WITHDRAWFUNDS_H
#define UI_AGENT_WITHDRAWFUNDS_H

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

class Ui_Agent_WithdrawFunds
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QPushButton *pushButton_WithdrawFunds;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Flush;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Agent_WithdrawFunds)
    {
        if (Agent_WithdrawFunds->objectName().isEmpty())
            Agent_WithdrawFunds->setObjectName(QStringLiteral("Agent_WithdrawFunds"));
        Agent_WithdrawFunds->resize(733, 564);
        verticalLayout = new QVBoxLayout(Agent_WithdrawFunds);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Agent_WithdrawFunds);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_WithdrawFunds = new QPushButton(frame_Bar);
        pushButton_WithdrawFunds->setObjectName(QStringLiteral("pushButton_WithdrawFunds"));

        gridLayout->addWidget(pushButton_WithdrawFunds, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_Flush = new QPushButton(frame_Bar);
        pushButton_Flush->setObjectName(QStringLiteral("pushButton_Flush"));

        gridLayout->addWidget(pushButton_Flush, 0, 2, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Agent_WithdrawFunds);
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


        retranslateUi(Agent_WithdrawFunds);

        QMetaObject::connectSlotsByName(Agent_WithdrawFunds);
    } // setupUi

    void retranslateUi(QWidget *Agent_WithdrawFunds)
    {
        Agent_WithdrawFunds->setWindowTitle(QApplication::translate("Agent_WithdrawFunds", "Widget_Withdraw_Funds", Q_NULLPTR));
        pushButton_WithdrawFunds->setText(QApplication::translate("Agent_WithdrawFunds", "\347\224\263\350\257\267\346\217\220\346\254\276", Q_NULLPTR));
        pushButton_Flush->setText(QApplication::translate("Agent_WithdrawFunds", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Agent_WithdrawFunds: public Ui_Agent_WithdrawFunds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENT_WITHDRAWFUNDS_H

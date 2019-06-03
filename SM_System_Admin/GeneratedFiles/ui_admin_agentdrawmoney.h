/********************************************************************************
** Form generated from reading UI file 'admin_agentdrawmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_AGENTDRAWMONEY_H
#define UI_ADMIN_AGENTDRAWMONEY_H

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

class Ui_Admint_AgentDrawMoney
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QLabel *label_AccountName;
    QLabel *label_AgentName;
    QPushButton *pushButton_Query;
    QLineEdit *lineEdit_AccountName;
    QLineEdit *lineEdit_AgentName;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Admint_AgentDrawMoney)
    {
        if (Admint_AgentDrawMoney->objectName().isEmpty())
            Admint_AgentDrawMoney->setObjectName(QStringLiteral("Admint_AgentDrawMoney"));
        Admint_AgentDrawMoney->resize(705, 420);
        verticalLayout = new QVBoxLayout(Admint_AgentDrawMoney);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Admint_AgentDrawMoney);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_AccountName = new QLabel(frame_Bar);
        label_AccountName->setObjectName(QStringLiteral("label_AccountName"));

        gridLayout->addWidget(label_AccountName, 0, 0, 1, 1);

        label_AgentName = new QLabel(frame_Bar);
        label_AgentName->setObjectName(QStringLiteral("label_AgentName"));

        gridLayout->addWidget(label_AgentName, 0, 2, 1, 1);

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

        lineEdit_AgentName = new QLineEdit(frame_Bar);
        lineEdit_AgentName->setObjectName(QStringLiteral("lineEdit_AgentName"));
        sizePolicy.setHeightForWidth(lineEdit_AgentName->sizePolicy().hasHeightForWidth());
        lineEdit_AgentName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_AgentName, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Admint_AgentDrawMoney);
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


        retranslateUi(Admint_AgentDrawMoney);

        QMetaObject::connectSlotsByName(Admint_AgentDrawMoney);
    } // setupUi

    void retranslateUi(QWidget *Admint_AgentDrawMoney)
    {
        Admint_AgentDrawMoney->setWindowTitle(QApplication::translate("Admint_AgentDrawMoney", "Widget_Agent_DrawMoney", Q_NULLPTR));
        label_AccountName->setText(QApplication::translate("Admint_AgentDrawMoney", "\350\264\246\345\217\267\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_AgentName->setText(QApplication::translate("Admint_AgentDrawMoney", "\344\273\243\347\220\206\350\264\246\346\210\267\357\274\232", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Admint_AgentDrawMoney", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admint_AgentDrawMoney: public Ui_Admint_AgentDrawMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_AGENTDRAWMONEY_H

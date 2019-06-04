/********************************************************************************
** Form generated from reading UI file 'agent_memberinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENT_MEMBERINFO_H
#define UI_AGENT_MEMBERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_Agent_MemberInfo
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout_2;
    QLabel *label_Name;
    QLabel *label_Account;
    QPushButton *pushButton_AddMember;
    QLineEdit *lineEdit_Account;
    QLineEdit *lineEdit_Name;
    QLabel *label_AccountManager;
    QComboBox *comboBox__AccountManager;
    QPushButton *pushButton_Query;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Agent_MemberInfo)
    {
        if (Agent_MemberInfo->objectName().isEmpty())
            Agent_MemberInfo->setObjectName(QStringLiteral("Agent_MemberInfo"));
        Agent_MemberInfo->resize(967, 606);
        verticalLayout = new QVBoxLayout(Agent_MemberInfo);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Agent_MemberInfo);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Bar);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_Name = new QLabel(frame_Bar);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        gridLayout_2->addWidget(label_Name, 0, 3, 2, 1);

        label_Account = new QLabel(frame_Bar);
        label_Account->setObjectName(QStringLiteral("label_Account"));

        gridLayout_2->addWidget(label_Account, 0, 1, 2, 1);

        pushButton_AddMember = new QPushButton(frame_Bar);
        pushButton_AddMember->setObjectName(QStringLiteral("pushButton_AddMember"));

        gridLayout_2->addWidget(pushButton_AddMember, 0, 0, 2, 1);

        lineEdit_Account = new QLineEdit(frame_Bar);
        lineEdit_Account->setObjectName(QStringLiteral("lineEdit_Account"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Account->sizePolicy().hasHeightForWidth());
        lineEdit_Account->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_Account, 0, 2, 2, 1);

        lineEdit_Name = new QLineEdit(frame_Bar);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        sizePolicy.setHeightForWidth(lineEdit_Name->sizePolicy().hasHeightForWidth());
        lineEdit_Name->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_Name, 0, 4, 2, 1);

        label_AccountManager = new QLabel(frame_Bar);
        label_AccountManager->setObjectName(QStringLiteral("label_AccountManager"));

        gridLayout_2->addWidget(label_AccountManager, 0, 5, 2, 1);

        comboBox__AccountManager = new QComboBox(frame_Bar);
        comboBox__AccountManager->setObjectName(QStringLiteral("comboBox__AccountManager"));

        gridLayout_2->addWidget(comboBox__AccountManager, 0, 6, 2, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout_2->addWidget(pushButton_Query, 0, 7, 2, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 8, 2, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Agent_MemberInfo);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setFrameShape(QFrame::StyledPanel);
        frame_Content->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Content);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_DataGrid = new Widget_DataGrid_Pa(frame_Content);
        widget_DataGrid->setObjectName(QStringLiteral("widget_DataGrid"));

        gridLayout->addWidget(widget_DataGrid, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_Content);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Agent_MemberInfo);

        QMetaObject::connectSlotsByName(Agent_MemberInfo);
    } // setupUi

    void retranslateUi(QWidget *Agent_MemberInfo)
    {
        Agent_MemberInfo->setWindowTitle(QApplication::translate("Agent_MemberInfo", "Widget_Member_Info", Q_NULLPTR));
        label_Name->setText(QApplication::translate("Agent_MemberInfo", "\345\220\215\345\255\227\357\274\232", Q_NULLPTR));
        label_Account->setText(QApplication::translate("Agent_MemberInfo", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_AddMember->setText(QApplication::translate("Agent_MemberInfo", "\346\226\260\345\242\236\344\274\232\345\221\230", Q_NULLPTR));
        label_AccountManager->setText(QApplication::translate("Agent_MemberInfo", "\345\256\242\346\210\267\347\273\217\347\220\206\357\274\232", Q_NULLPTR));
        comboBox__AccountManager->clear();
        comboBox__AccountManager->insertItems(0, QStringList()
         << QApplication::translate("Agent_MemberInfo", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        pushButton_Query->setText(QApplication::translate("Agent_MemberInfo", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Agent_MemberInfo: public Ui_Agent_MemberInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENT_MEMBERINFO_H

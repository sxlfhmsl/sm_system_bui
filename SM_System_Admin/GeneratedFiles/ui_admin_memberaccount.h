/********************************************************************************
** Form generated from reading UI file 'admin_memberaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MEMBERACCOUNT_H
#define UI_ADMIN_MEMBERACCOUNT_H

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

class Ui_Admin_MemberAccount
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QGridLayout *gridLayout;
    QPushButton *pushButton_AddMember;
    QLineEdit *lineEdit_CustomName;
    QComboBox *comboBox;
    QLineEdit *lineEdit_Account;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton_Query;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;
    QFrame *frame_foot;
    QGridLayout *gridLayout_3;
    QLabel *label_FootInfo;

    void setupUi(QWidget *Admin_MemberAccount)
    {
        if (Admin_MemberAccount->objectName().isEmpty())
            Admin_MemberAccount->setObjectName(QStringLiteral("Admin_MemberAccount"));
        Admin_MemberAccount->resize(894, 640);
        verticalLayout = new QVBoxLayout(Admin_MemberAccount);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Admin_MemberAccount);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Bar);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        pushButton_AddMember = new QPushButton(frame_Bar);
        pushButton_AddMember->setObjectName(QStringLiteral("pushButton_AddMember"));

        gridLayout->addWidget(pushButton_AddMember, 0, 0, 1, 1);

        lineEdit_CustomName = new QLineEdit(frame_Bar);
        lineEdit_CustomName->setObjectName(QStringLiteral("lineEdit_CustomName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_CustomName->sizePolicy().hasHeightForWidth());
        lineEdit_CustomName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_CustomName, 0, 6, 1, 1);

        comboBox = new QComboBox(frame_Bar);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 2, 1, 1);

        lineEdit_Account = new QLineEdit(frame_Bar);
        lineEdit_Account->setObjectName(QStringLiteral("lineEdit_Account"));
        sizePolicy.setHeightForWidth(lineEdit_Account->sizePolicy().hasHeightForWidth());
        lineEdit_Account->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_Account, 0, 4, 1, 1);

        label_2 = new QLabel(frame_Bar);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(frame_Bar);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        label = new QLabel(frame_Bar);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        pushButton_Query = new QPushButton(frame_Bar);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        gridLayout->addWidget(pushButton_Query, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 8, 1, 1);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Admin_MemberAccount);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setFrameShape(QFrame::StyledPanel);
        frame_Content->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Content);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        widget_DataGrid = new Widget_DataGrid_Pa(frame_Content);
        widget_DataGrid->setObjectName(QStringLiteral("widget_DataGrid"));

        gridLayout_2->addWidget(widget_DataGrid, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_Content);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame_foot = new QFrame(Admin_MemberAccount);
        frame_foot->setObjectName(QStringLiteral("frame_foot"));
        frame_foot->setFrameShape(QFrame::StyledPanel);
        frame_foot->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_foot);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_FootInfo = new QLabel(frame_foot);
        label_FootInfo->setObjectName(QStringLiteral("label_FootInfo"));

        gridLayout_3->addWidget(label_FootInfo, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_foot);


        retranslateUi(Admin_MemberAccount);

        QMetaObject::connectSlotsByName(Admin_MemberAccount);
    } // setupUi

    void retranslateUi(QWidget *Admin_MemberAccount)
    {
        Admin_MemberAccount->setWindowTitle(QApplication::translate("Admin_MemberAccount", "Widget_Vip_Account", Q_NULLPTR));
        pushButton_AddMember->setText(QApplication::translate("Admin_MemberAccount", "\346\226\260\345\242\236\344\274\232\345\221\230", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Admin_MemberAccount", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Admin_MemberAccount", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Admin_MemberAccount", "\345\256\242\346\210\267\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Admin_MemberAccount", "\344\273\243\347\220\206\345\225\206\357\274\232", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Admin_MemberAccount", "\346\237\245\350\257\242", Q_NULLPTR));
        label_FootInfo->setText(QApplication::translate("Admin_MemberAccount", "<html><head/><body><p><span style=\" color:#ff0000;\">\350\257\264\346\230\216\357\274\232</span></p><p><span style=\" color:#ff0000;\">\351\224\201\345\256\232/\350\247\243\351\224\201\357\274\232\350\256\276\347\275\256\351\224\201\345\256\232\345\220\216\347\224\250\346\210\267\346\227\240\346\263\225\347\231\273\351\231\206\357\274\214\347\224\250\346\210\267\350\277\236\347\273\2556\346\254\241\350\276\223\345\205\245\351\224\231\350\257\257\345\257\206\347\240\201\345\210\231\350\207\252\345\212\250\351\224\201\345\256\232\357\274\214\350\247\243\351\224\201\345\220\216\346\201\242\345\244\215\347\224\250\346\210\267\347\231\273\351\231\206\346\235\203\351\231\220\343\200\202</span></p><p><span style=\" color:#ff0000;\">\345\201\234\347\224\250/\345\220\257\347\224\250\357\274\232\345\201\234\346\255\242\346\210\226\345\205\201\350\256\270\347\224\250\346\210\267\347\231\273\351\231\206\343\200\202</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin_MemberAccount: public Ui_Admin_MemberAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MEMBERACCOUNT_H

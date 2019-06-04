/********************************************************************************
** Form generated from reading UI file 'agent_changepass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENT_CHANGEPASS_H
#define UI_AGENT_CHANGEPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Agent_ChangePass
{
public:
    QGridLayout *gridLayout;
    QLabel *label_ConfirmPass;
    QFrame *frame_Box;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_Confirm;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer;
    QLabel *label_OldPass;
    QLineEdit *lineEdit_OldPass;
    QLineEdit *lineEdit_ConfirmPass;
    QLabel *label_NewPass;
    QLineEdit *lineEdit_NewPass;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Agent_ChangePass)
    {
        if (Agent_ChangePass->objectName().isEmpty())
            Agent_ChangePass->setObjectName(QStringLiteral("Agent_ChangePass"));
        Agent_ChangePass->resize(400, 300);
        gridLayout = new QGridLayout(Agent_ChangePass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_ConfirmPass = new QLabel(Agent_ChangePass);
        label_ConfirmPass->setObjectName(QStringLiteral("label_ConfirmPass"));

        gridLayout->addWidget(label_ConfirmPass, 3, 1, 1, 1);

        frame_Box = new QFrame(Agent_ChangePass);
        frame_Box->setObjectName(QStringLiteral("frame_Box"));
        frame_Box->setFrameShape(QFrame::StyledPanel);
        frame_Box->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Box);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_Confirm = new QPushButton(frame_Box);
        pushButton_Confirm->setObjectName(QStringLiteral("pushButton_Confirm"));

        gridLayout_2->addWidget(pushButton_Confirm, 0, 0, 1, 1);

        pushButton_Cancel = new QPushButton(frame_Box);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        gridLayout_2->addWidget(pushButton_Cancel, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout->addWidget(frame_Box, 4, 1, 1, 2);

        label_OldPass = new QLabel(Agent_ChangePass);
        label_OldPass->setObjectName(QStringLiteral("label_OldPass"));

        gridLayout->addWidget(label_OldPass, 1, 1, 1, 1);

        lineEdit_OldPass = new QLineEdit(Agent_ChangePass);
        lineEdit_OldPass->setObjectName(QStringLiteral("lineEdit_OldPass"));

        gridLayout->addWidget(lineEdit_OldPass, 1, 2, 1, 1);

        lineEdit_ConfirmPass = new QLineEdit(Agent_ChangePass);
        lineEdit_ConfirmPass->setObjectName(QStringLiteral("lineEdit_ConfirmPass"));

        gridLayout->addWidget(lineEdit_ConfirmPass, 3, 2, 1, 1);

        label_NewPass = new QLabel(Agent_ChangePass);
        label_NewPass->setObjectName(QStringLiteral("label_NewPass"));

        gridLayout->addWidget(label_NewPass, 2, 1, 1, 1);

        lineEdit_NewPass = new QLineEdit(Agent_ChangePass);
        lineEdit_NewPass->setObjectName(QStringLiteral("lineEdit_NewPass"));

        gridLayout->addWidget(lineEdit_NewPass, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);


        retranslateUi(Agent_ChangePass);

        QMetaObject::connectSlotsByName(Agent_ChangePass);
    } // setupUi

    void retranslateUi(QDialog *Agent_ChangePass)
    {
        Agent_ChangePass->setWindowTitle(QApplication::translate("Agent_ChangePass", "Dialog_Change_Pass", Q_NULLPTR));
        label_ConfirmPass->setText(QApplication::translate("Agent_ChangePass", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_Confirm->setText(QApplication::translate("Agent_ChangePass", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("Agent_ChangePass", "\345\205\263\351\227\255", Q_NULLPTR));
        label_OldPass->setText(QApplication::translate("Agent_ChangePass", "\346\227\247\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_NewPass->setText(QApplication::translate("Agent_ChangePass", "\346\226\260\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Agent_ChangePass: public Ui_Agent_ChangePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENT_CHANGEPASS_H

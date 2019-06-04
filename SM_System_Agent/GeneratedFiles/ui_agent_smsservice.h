/********************************************************************************
** Form generated from reading UI file 'agent_smsservice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENT_SMSSERVICE_H
#define UI_AGENT_SMSSERVICE_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Agent_SMSService
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_Content;
    QGridLayout *gridLayout_2;
    QLabel *label_SMSContent;
    QTextEdit *textEdit_SMSContent;
    QSpacerItem *horizontalSpacer;
    QLabel *label_RecvNum;
    QLineEdit *lineEdit_RecvNum;
    QLabel *label_2;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Send;
    QLabel *label_SMSSignature;
    QLabel *label;
    QLineEdit *lineEdit_SMSSignature;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Agent_SMSService)
    {
        if (Agent_SMSService->objectName().isEmpty())
            Agent_SMSService->setObjectName(QStringLiteral("Agent_SMSService"));
        Agent_SMSService->resize(688, 573);
        gridLayout = new QGridLayout(Agent_SMSService);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_Content = new QFrame(Agent_SMSService);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_Content->sizePolicy().hasHeightForWidth());
        frame_Content->setSizePolicy(sizePolicy);
        frame_Content->setFrameShape(QFrame::StyledPanel);
        frame_Content->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Content);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_SMSContent = new QLabel(frame_Content);
        label_SMSContent->setObjectName(QStringLiteral("label_SMSContent"));

        gridLayout_2->addWidget(label_SMSContent, 2, 0, 1, 1);

        textEdit_SMSContent = new QTextEdit(frame_Content);
        textEdit_SMSContent->setObjectName(QStringLiteral("textEdit_SMSContent"));

        gridLayout_2->addWidget(textEdit_SMSContent, 2, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        label_RecvNum = new QLabel(frame_Content);
        label_RecvNum->setObjectName(QStringLiteral("label_RecvNum"));

        gridLayout_2->addWidget(label_RecvNum, 1, 0, 1, 1);

        lineEdit_RecvNum = new QLineEdit(frame_Content);
        lineEdit_RecvNum->setObjectName(QStringLiteral("lineEdit_RecvNum"));

        gridLayout_2->addWidget(lineEdit_RecvNum, 1, 1, 1, 2);

        label_2 = new QLabel(frame_Content);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 3, 1, 1);

        pushButton_Clear = new QPushButton(frame_Content);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));

        gridLayout_2->addWidget(pushButton_Clear, 3, 3, 1, 1);

        pushButton_Send = new QPushButton(frame_Content);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));

        gridLayout_2->addWidget(pushButton_Send, 3, 2, 1, 1);

        label_SMSSignature = new QLabel(frame_Content);
        label_SMSSignature->setObjectName(QStringLiteral("label_SMSSignature"));

        gridLayout_2->addWidget(label_SMSSignature, 0, 0, 1, 1);

        label = new QLabel(frame_Content);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 3, 1, 1);

        lineEdit_SMSSignature = new QLineEdit(frame_Content);
        lineEdit_SMSSignature->setObjectName(QStringLiteral("lineEdit_SMSSignature"));

        gridLayout_2->addWidget(lineEdit_SMSSignature, 0, 1, 1, 2);


        gridLayout->addWidget(frame_Content, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(Agent_SMSService);

        QMetaObject::connectSlotsByName(Agent_SMSService);
    } // setupUi

    void retranslateUi(QWidget *Agent_SMSService)
    {
        Agent_SMSService->setWindowTitle(QApplication::translate("Agent_SMSService", "Widget_SMS_Service", Q_NULLPTR));
        label_SMSContent->setText(QApplication::translate("Agent_SMSService", "\347\237\255\344\277\241\345\206\205\345\256\271\357\274\232", Q_NULLPTR));
        label_RecvNum->setText(QApplication::translate("Agent_SMSService", "\346\216\245\345\217\227\345\217\267\347\240\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Agent_SMSService", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span></p></body></html>", Q_NULLPTR));
        pushButton_Clear->setText(QApplication::translate("Agent_SMSService", "\346\270\205\347\251\272", Q_NULLPTR));
        pushButton_Send->setText(QApplication::translate("Agent_SMSService", "\345\217\221\351\200\201", Q_NULLPTR));
        label_SMSSignature->setText(QApplication::translate("Agent_SMSService", "\347\237\255\344\277\241\347\255\276\345\220\215\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Agent_SMSService", "<html><head/><body><p><span style=\" color:#ff0000;\">*</span></p></body></html>", Q_NULLPTR));
        lineEdit_SMSSignature->setText(QApplication::translate("Agent_SMSService", "\351\200\232\347\237\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Agent_SMSService: public Ui_Agent_SMSService {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENT_SMSSERVICE_H

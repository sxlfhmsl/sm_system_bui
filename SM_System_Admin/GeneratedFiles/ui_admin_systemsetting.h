/********************************************************************************
** Form generated from reading UI file 'admin_systemsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_SYSTEMSETTING_H
#define UI_ADMIN_SYSTEMSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_SystemSetting
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_Apply;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget_Content;
    QWidget *Widget_BaseSetting;
    QVBoxLayout *verticalLayout;
    QFrame *frame_OpenOrCloseTime;
    QGridLayout *gridLayout_2;
    QLabel *label_OOCT_AM;
    QLabel *label;
    QLabel *label_OOCTTitle;
    QLabel *label_2;
    QTimeEdit *timeEdit_Close_AM;
    QTimeEdit *timeEdit_Open_AM;
    QLabel *label_OOCT_PM;
    QTimeEdit *timeEdit_Open_PM;
    QLabel *label_3;
    QTimeEdit *timeEdit_Close_PM;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_ClosePositionTime;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_4;
    QTimeEdit *timeEdit_CPTEnd_AM;
    QTimeEdit *timeEdit_CPTBegin_AM;
    QLabel *label_CPT_AM;
    QLabel *label_CPT_PM;
    QLabel *label_CPT_Title;
    QTimeEdit *timeEdit_CPTBegin_PM;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_DrawTime;
    QGridLayout *gridLayout_4;
    QLabel *label_DT_AM;
    QTimeEdit *timeEdit_DTEnd_AM;
    QLabel *label_DT_PM;
    QTimeEdit *timeEdit_2;
    QTimeEdit *timeEdit_DTBegin_AM;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTimeEdit *timeEdit_3;
    QLabel *label_DT_Title;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_Base;
    QGridLayout *gridLayout_5;
    QLabel *label_TryTime;
    QSpinBox *spinBox_TryTime;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_Base_Title;
    QFrame *frame_Account;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBox_Password_Length_Max;
    QLabel *label_17;
    QSpinBox *spinBox_Name_Length_Min;
    QLabel *label_Name_Length;
    QLabel *label_18;
    QLabel *label_14;
    QLabel *label_AgentAccount_Length;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBox_MemberAccount_Length_Max;
    QSpinBox *spinBox_AgentAccount_Length_Min;
    QSpinBox *spinBox_AgentAccount_Length_Max;
    QLabel *label_Password_Length;
    QLabel *label_13;
    QSpinBox *spinBox_Password_Length_Min;
    QLabel *label_CharLimit;
    QLabel *label_MemberAccount_Length;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_CharLimit;
    QSpinBox *spinBox_Name_Length_Max;
    QLabel *label_19;
    QSpinBox *spinBox_MemberAccount_Length_Min;
    QLabel *label_Overtime;
    QSpinBox *spinBox_OverTime_Value;
    QLabel *label_20;
    QLabel *label_Account_Title;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_Auto_ClosePosition;
    QGridLayout *gridLayout_7;
    QLabel *label_23;
    QLabel *label_PLRatio;
    QLabel *label_21;
    QLabel *label_PERatio;
    QSpinBox *spinBox_PLRatio;
    QSpinBox *spinBox_PERatio;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_Auto_ClosePosition_Title;
    QSpacerItem *verticalSpacer;
    QWidget *Widget_Charge_Setting;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_CostLimit;
    QGridLayout *gridLayout_8;
    QLabel *label_22;
    QLabel *label_RemainTime_Max;
    QSpinBox *spinBox_RemainFee;
    QLabel *label_Deposit_Min;
    QLabel *label_RemainFee;
    QSpinBox *spinBox_RemainTime_Max;
    QDoubleSpinBox *doubleSpinBox_SellTime_Limit;
    QLabel *label_SellTime_Limit;
    QLabel *label_OnSche_SellCharge;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_30;
    QSpinBox *spinBox_OnSche_SellCharge;
    QLabel *label_26;
    QLabel *label_28;
    QLabel *label_BLOIAD_SD;
    QLabel *label_BLOIAD_DD;
    QLabel *label_27;
    QSpinBox *spinBox_BLOIAD_DD;
    QLabel *label_StampDuty;
    QLabel *label_29;
    QLabel *label_31;
    QSpinBox *spinBox_BLOIAD_SD;
    QLabel *label_FinancingInterest;
    QLabel *label_32;
    QLabel *label_33;
    QSpinBox *spinBox_StampDuty;
    QSpinBox *spinBox_FinancingInterest;
    QDoubleSpinBox *doubleSpinBox_Recharge_Min;
    QLabel *label_34;
    QDoubleSpinBox *doubleSpinBox_Turnover_Min;
    QLabel *label_Turnover_Min;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_Recharge_Min;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QSpinBox *spinBox_Deposit_Min;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_CostLimit_Title;
    QFrame *frame_Other;
    QGridLayout *gridLayout_9;
    QSpinBox *spinBox_MNOPPS;
    QSpinBox *spinBox_BuyNum_Min;
    QSpinBox *spinBox_BuyNum_Max;
    QLabel *label_MarginWarn;
    QLabel *label_42;
    QLabel *label_BuyNum_Max;
    QLabel *label_BuyNum_Min;
    QLabel *label_AOSS;
    QLabel *label_MNOPPS;
    QSpinBox *spinBox_AOSS;
    QDoubleSpinBox *doubleSpinBox_MarginWarn;
    QLabel *label_41;
    QLabel *label_45;
    QLabel *label_43;
    QLabel *label_TP;
    QSpinBox *spinBox_TP_Up;
    QLabel *label_47;
    QLabel *label_44;
    QSpinBox *spinBox_TP_Down;
    QLabel *label_46;
    QLabel *label_FLASDOS;
    QSpinBox *spinBox_FLASDOS;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_48;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_Other_Title;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Admin_SystemSetting)
    {
        if (Admin_SystemSetting->objectName().isEmpty())
            Admin_SystemSetting->setObjectName(QStringLiteral("Admin_SystemSetting"));
        Admin_SystemSetting->resize(1008, 806);
        gridLayout = new QGridLayout(Admin_SystemSetting);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 9);
        pushButton_Apply = new QPushButton(Admin_SystemSetting);
        pushButton_Apply->setObjectName(QStringLiteral("pushButton_Apply"));

        gridLayout->addWidget(pushButton_Apply, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        tabWidget_Content = new QTabWidget(Admin_SystemSetting);
        tabWidget_Content->setObjectName(QStringLiteral("tabWidget_Content"));
        Widget_BaseSetting = new QWidget();
        Widget_BaseSetting->setObjectName(QStringLiteral("Widget_BaseSetting"));
        verticalLayout = new QVBoxLayout(Widget_BaseSetting);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        frame_OpenOrCloseTime = new QFrame(Widget_BaseSetting);
        frame_OpenOrCloseTime->setObjectName(QStringLiteral("frame_OpenOrCloseTime"));
        frame_OpenOrCloseTime->setFrameShape(QFrame::StyledPanel);
        frame_OpenOrCloseTime->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_OpenOrCloseTime);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_OOCT_AM = new QLabel(frame_OpenOrCloseTime);
        label_OOCT_AM->setObjectName(QStringLiteral("label_OOCT_AM"));

        gridLayout_2->addWidget(label_OOCT_AM, 1, 0, 1, 1);

        label = new QLabel(frame_OpenOrCloseTime);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 2, 1, 1);

        label_OOCTTitle = new QLabel(frame_OpenOrCloseTime);
        label_OOCTTitle->setObjectName(QStringLiteral("label_OOCTTitle"));

        gridLayout_2->addWidget(label_OOCTTitle, 0, 0, 1, 6);

        label_2 = new QLabel(frame_OpenOrCloseTime);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 4, 1, 1);

        timeEdit_Close_AM = new QTimeEdit(frame_OpenOrCloseTime);
        timeEdit_Close_AM->setObjectName(QStringLiteral("timeEdit_Close_AM"));
        timeEdit_Close_AM->setMaximumTime(QTime(11, 59, 59));
        timeEdit_Close_AM->setMinimumTime(QTime(0, 0, 0));
        timeEdit_Close_AM->setTime(QTime(11, 30, 0));

        gridLayout_2->addWidget(timeEdit_Close_AM, 1, 3, 1, 1);

        timeEdit_Open_AM = new QTimeEdit(frame_OpenOrCloseTime);
        timeEdit_Open_AM->setObjectName(QStringLiteral("timeEdit_Open_AM"));
        timeEdit_Open_AM->setMaximumTime(QTime(11, 59, 59));
        timeEdit_Open_AM->setCalendarPopup(false);
        timeEdit_Open_AM->setTime(QTime(9, 35, 0));

        gridLayout_2->addWidget(timeEdit_Open_AM, 1, 1, 1, 1);

        label_OOCT_PM = new QLabel(frame_OpenOrCloseTime);
        label_OOCT_PM->setObjectName(QStringLiteral("label_OOCT_PM"));

        gridLayout_2->addWidget(label_OOCT_PM, 2, 0, 1, 1);

        timeEdit_Open_PM = new QTimeEdit(frame_OpenOrCloseTime);
        timeEdit_Open_PM->setObjectName(QStringLiteral("timeEdit_Open_PM"));
        timeEdit_Open_PM->setMinimumTime(QTime(12, 0, 0));
        timeEdit_Open_PM->setTime(QTime(13, 5, 0));

        gridLayout_2->addWidget(timeEdit_Open_PM, 2, 1, 1, 1);

        label_3 = new QLabel(frame_OpenOrCloseTime);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 2, 1, 1);

        timeEdit_Close_PM = new QTimeEdit(frame_OpenOrCloseTime);
        timeEdit_Close_PM->setObjectName(QStringLiteral("timeEdit_Close_PM"));
        timeEdit_Close_PM->setMinimumTime(QTime(12, 0, 0));
        timeEdit_Close_PM->setTime(QTime(14, 58, 0));

        gridLayout_2->addWidget(timeEdit_Close_PM, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 5, 2, 1);


        verticalLayout->addWidget(frame_OpenOrCloseTime);

        frame_ClosePositionTime = new QFrame(Widget_BaseSetting);
        frame_ClosePositionTime->setObjectName(QStringLiteral("frame_ClosePositionTime"));
        frame_ClosePositionTime->setFrameShape(QFrame::StyledPanel);
        frame_ClosePositionTime->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_ClosePositionTime);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(frame_ClosePositionTime);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 4, 1, 1);

        label_4 = new QLabel(frame_ClosePositionTime);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 1, 2, 1, 1);

        timeEdit_CPTEnd_AM = new QTimeEdit(frame_ClosePositionTime);
        timeEdit_CPTEnd_AM->setObjectName(QStringLiteral("timeEdit_CPTEnd_AM"));
        timeEdit_CPTEnd_AM->setMaximumTime(QTime(11, 59, 59));
        timeEdit_CPTEnd_AM->setTime(QTime(11, 30, 0));

        gridLayout_3->addWidget(timeEdit_CPTEnd_AM, 1, 3, 1, 1);

        timeEdit_CPTBegin_AM = new QTimeEdit(frame_ClosePositionTime);
        timeEdit_CPTBegin_AM->setObjectName(QStringLiteral("timeEdit_CPTBegin_AM"));
        timeEdit_CPTBegin_AM->setMaximumTime(QTime(11, 59, 59));
        timeEdit_CPTBegin_AM->setTime(QTime(9, 35, 0));

        gridLayout_3->addWidget(timeEdit_CPTBegin_AM, 1, 1, 1, 1);

        label_CPT_AM = new QLabel(frame_ClosePositionTime);
        label_CPT_AM->setObjectName(QStringLiteral("label_CPT_AM"));

        gridLayout_3->addWidget(label_CPT_AM, 1, 0, 1, 1);

        label_CPT_PM = new QLabel(frame_ClosePositionTime);
        label_CPT_PM->setObjectName(QStringLiteral("label_CPT_PM"));

        gridLayout_3->addWidget(label_CPT_PM, 2, 0, 1, 1);

        label_CPT_Title = new QLabel(frame_ClosePositionTime);
        label_CPT_Title->setObjectName(QStringLiteral("label_CPT_Title"));

        gridLayout_3->addWidget(label_CPT_Title, 0, 0, 1, 6);

        timeEdit_CPTBegin_PM = new QTimeEdit(frame_ClosePositionTime);
        timeEdit_CPTBegin_PM->setObjectName(QStringLiteral("timeEdit_CPTBegin_PM"));
        timeEdit_CPTBegin_PM->setMinimumTime(QTime(12, 0, 0));
        timeEdit_CPTBegin_PM->setTime(QTime(13, 5, 0));

        gridLayout_3->addWidget(timeEdit_CPTBegin_PM, 2, 1, 1, 1);

        label_6 = new QLabel(frame_ClosePositionTime);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 2, 2, 1, 1);

        timeEdit = new QTimeEdit(frame_ClosePositionTime);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setMinimumTime(QTime(12, 0, 0));
        timeEdit->setTime(QTime(14, 58, 0));

        gridLayout_3->addWidget(timeEdit, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 5, 2, 1);


        verticalLayout->addWidget(frame_ClosePositionTime);

        frame_DrawTime = new QFrame(Widget_BaseSetting);
        frame_DrawTime->setObjectName(QStringLiteral("frame_DrawTime"));
        frame_DrawTime->setFrameShape(QFrame::StyledPanel);
        frame_DrawTime->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_DrawTime);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_DT_AM = new QLabel(frame_DrawTime);
        label_DT_AM->setObjectName(QStringLiteral("label_DT_AM"));

        gridLayout_4->addWidget(label_DT_AM, 1, 0, 1, 1);

        timeEdit_DTEnd_AM = new QTimeEdit(frame_DrawTime);
        timeEdit_DTEnd_AM->setObjectName(QStringLiteral("timeEdit_DTEnd_AM"));
        timeEdit_DTEnd_AM->setMaximumTime(QTime(11, 59, 59));
        timeEdit_DTEnd_AM->setTime(QTime(11, 30, 0));

        gridLayout_4->addWidget(timeEdit_DTEnd_AM, 1, 3, 1, 1);

        label_DT_PM = new QLabel(frame_DrawTime);
        label_DT_PM->setObjectName(QStringLiteral("label_DT_PM"));

        gridLayout_4->addWidget(label_DT_PM, 2, 0, 1, 1);

        timeEdit_2 = new QTimeEdit(frame_DrawTime);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setMinimumTime(QTime(12, 0, 0));
        timeEdit_2->setTime(QTime(13, 5, 0));

        gridLayout_4->addWidget(timeEdit_2, 2, 1, 1, 1);

        timeEdit_DTBegin_AM = new QTimeEdit(frame_DrawTime);
        timeEdit_DTBegin_AM->setObjectName(QStringLiteral("timeEdit_DTBegin_AM"));
        timeEdit_DTBegin_AM->setMaximumTime(QTime(11, 59, 59));
        timeEdit_DTBegin_AM->setTime(QTime(9, 35, 0));

        gridLayout_4->addWidget(timeEdit_DTBegin_AM, 1, 1, 1, 1);

        label_7 = new QLabel(frame_DrawTime);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_4->addWidget(label_7, 1, 4, 1, 1);

        label_8 = new QLabel(frame_DrawTime);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 1, 2, 1, 1);

        label_9 = new QLabel(frame_DrawTime);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 2, 2, 1, 1);

        timeEdit_3 = new QTimeEdit(frame_DrawTime);
        timeEdit_3->setObjectName(QStringLiteral("timeEdit_3"));
        timeEdit_3->setMinimumTime(QTime(12, 0, 0));
        timeEdit_3->setTime(QTime(14, 56, 0));

        gridLayout_4->addWidget(timeEdit_3, 2, 3, 1, 1);

        label_DT_Title = new QLabel(frame_DrawTime);
        label_DT_Title->setObjectName(QStringLiteral("label_DT_Title"));

        gridLayout_4->addWidget(label_DT_Title, 0, 0, 1, 6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 5, 2, 1);


        verticalLayout->addWidget(frame_DrawTime);

        frame_Base = new QFrame(Widget_BaseSetting);
        frame_Base->setObjectName(QStringLiteral("frame_Base"));
        frame_Base->setFrameShape(QFrame::StyledPanel);
        frame_Base->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_Base);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_TryTime = new QLabel(frame_Base);
        label_TryTime->setObjectName(QStringLiteral("label_TryTime"));

        gridLayout_5->addWidget(label_TryTime, 1, 0, 1, 1);

        spinBox_TryTime = new QSpinBox(frame_Base);
        spinBox_TryTime->setObjectName(QStringLiteral("spinBox_TryTime"));
        spinBox_TryTime->setValue(6);

        gridLayout_5->addWidget(spinBox_TryTime, 1, 1, 1, 1);

        label_10 = new QLabel(frame_Base);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        label_Base_Title = new QLabel(frame_Base);
        label_Base_Title->setObjectName(QStringLiteral("label_Base_Title"));

        gridLayout_5->addWidget(label_Base_Title, 0, 0, 1, 4);


        verticalLayout->addWidget(frame_Base);

        frame_Account = new QFrame(Widget_BaseSetting);
        frame_Account->setObjectName(QStringLiteral("frame_Account"));
        frame_Account->setFrameShape(QFrame::StyledPanel);
        frame_Account->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_Account);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        spinBox_Password_Length_Max = new QSpinBox(frame_Account);
        spinBox_Password_Length_Max->setObjectName(QStringLiteral("spinBox_Password_Length_Max"));
        spinBox_Password_Length_Max->setValue(15);

        gridLayout_6->addWidget(spinBox_Password_Length_Max, 4, 3, 1, 1);

        label_17 = new QLabel(frame_Account);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_6->addWidget(label_17, 4, 4, 1, 1);

        spinBox_Name_Length_Min = new QSpinBox(frame_Account);
        spinBox_Name_Length_Min->setObjectName(QStringLiteral("spinBox_Name_Length_Min"));
        spinBox_Name_Length_Min->setValue(3);

        gridLayout_6->addWidget(spinBox_Name_Length_Min, 5, 1, 1, 1);

        label_Name_Length = new QLabel(frame_Account);
        label_Name_Length->setObjectName(QStringLiteral("label_Name_Length"));

        gridLayout_6->addWidget(label_Name_Length, 5, 0, 1, 1);

        label_18 = new QLabel(frame_Account);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_6->addWidget(label_18, 5, 2, 1, 1);

        label_14 = new QLabel(frame_Account);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_6->addWidget(label_14, 3, 2, 1, 1);

        label_AgentAccount_Length = new QLabel(frame_Account);
        label_AgentAccount_Length->setObjectName(QStringLiteral("label_AgentAccount_Length"));

        gridLayout_6->addWidget(label_AgentAccount_Length, 2, 0, 1, 1);

        label_11 = new QLabel(frame_Account);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_6->addWidget(label_11, 1, 5, 1, 1);

        label_12 = new QLabel(frame_Account);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_6->addWidget(label_12, 2, 2, 1, 1);

        spinBox_MemberAccount_Length_Max = new QSpinBox(frame_Account);
        spinBox_MemberAccount_Length_Max->setObjectName(QStringLiteral("spinBox_MemberAccount_Length_Max"));
        spinBox_MemberAccount_Length_Max->setMaximum(200);
        spinBox_MemberAccount_Length_Max->setValue(100);

        gridLayout_6->addWidget(spinBox_MemberAccount_Length_Max, 3, 3, 1, 1);

        spinBox_AgentAccount_Length_Min = new QSpinBox(frame_Account);
        spinBox_AgentAccount_Length_Min->setObjectName(QStringLiteral("spinBox_AgentAccount_Length_Min"));
        spinBox_AgentAccount_Length_Min->setValue(3);

        gridLayout_6->addWidget(spinBox_AgentAccount_Length_Min, 2, 1, 1, 1);

        spinBox_AgentAccount_Length_Max = new QSpinBox(frame_Account);
        spinBox_AgentAccount_Length_Max->setObjectName(QStringLiteral("spinBox_AgentAccount_Length_Max"));
        spinBox_AgentAccount_Length_Max->setValue(10);

        gridLayout_6->addWidget(spinBox_AgentAccount_Length_Max, 2, 3, 1, 1);

        label_Password_Length = new QLabel(frame_Account);
        label_Password_Length->setObjectName(QStringLiteral("label_Password_Length"));

        gridLayout_6->addWidget(label_Password_Length, 4, 0, 1, 1);

        label_13 = new QLabel(frame_Account);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_6->addWidget(label_13, 2, 4, 1, 1);

        spinBox_Password_Length_Min = new QSpinBox(frame_Account);
        spinBox_Password_Length_Min->setObjectName(QStringLiteral("spinBox_Password_Length_Min"));
        spinBox_Password_Length_Min->setValue(3);

        gridLayout_6->addWidget(spinBox_Password_Length_Min, 4, 1, 1, 1);

        label_CharLimit = new QLabel(frame_Account);
        label_CharLimit->setObjectName(QStringLiteral("label_CharLimit"));

        gridLayout_6->addWidget(label_CharLimit, 1, 0, 1, 1);

        label_MemberAccount_Length = new QLabel(frame_Account);
        label_MemberAccount_Length->setObjectName(QStringLiteral("label_MemberAccount_Length"));

        gridLayout_6->addWidget(label_MemberAccount_Length, 3, 0, 1, 1);

        label_15 = new QLabel(frame_Account);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_6->addWidget(label_15, 3, 4, 1, 1);

        label_16 = new QLabel(frame_Account);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_6->addWidget(label_16, 4, 2, 1, 1);

        lineEdit_CharLimit = new QLineEdit(frame_Account);
        lineEdit_CharLimit->setObjectName(QStringLiteral("lineEdit_CharLimit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_CharLimit->sizePolicy().hasHeightForWidth());
        lineEdit_CharLimit->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(lineEdit_CharLimit, 1, 1, 1, 4);

        spinBox_Name_Length_Max = new QSpinBox(frame_Account);
        spinBox_Name_Length_Max->setObjectName(QStringLiteral("spinBox_Name_Length_Max"));
        spinBox_Name_Length_Max->setValue(20);

        gridLayout_6->addWidget(spinBox_Name_Length_Max, 5, 3, 1, 1);

        label_19 = new QLabel(frame_Account);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_6->addWidget(label_19, 5, 4, 1, 1);

        spinBox_MemberAccount_Length_Min = new QSpinBox(frame_Account);
        spinBox_MemberAccount_Length_Min->setObjectName(QStringLiteral("spinBox_MemberAccount_Length_Min"));
        spinBox_MemberAccount_Length_Min->setValue(3);

        gridLayout_6->addWidget(spinBox_MemberAccount_Length_Min, 3, 1, 1, 1);

        label_Overtime = new QLabel(frame_Account);
        label_Overtime->setObjectName(QStringLiteral("label_Overtime"));

        gridLayout_6->addWidget(label_Overtime, 6, 0, 1, 1);

        spinBox_OverTime_Value = new QSpinBox(frame_Account);
        spinBox_OverTime_Value->setObjectName(QStringLiteral("spinBox_OverTime_Value"));
        spinBox_OverTime_Value->setMaximum(100000);
        spinBox_OverTime_Value->setValue(66400);

        gridLayout_6->addWidget(spinBox_OverTime_Value, 6, 1, 1, 2);

        label_20 = new QLabel(frame_Account);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_6->addWidget(label_20, 6, 5, 1, 1);

        label_Account_Title = new QLabel(frame_Account);
        label_Account_Title->setObjectName(QStringLiteral("label_Account_Title"));

        gridLayout_6->addWidget(label_Account_Title, 0, 0, 1, 7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 1, 6, 6, 1);


        verticalLayout->addWidget(frame_Account);

        frame_Auto_ClosePosition = new QFrame(Widget_BaseSetting);
        frame_Auto_ClosePosition->setObjectName(QStringLiteral("frame_Auto_ClosePosition"));
        frame_Auto_ClosePosition->setFrameShape(QFrame::StyledPanel);
        frame_Auto_ClosePosition->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_Auto_ClosePosition);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_23 = new QLabel(frame_Auto_ClosePosition);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_7->addWidget(label_23, 2, 2, 1, 1);

        label_PLRatio = new QLabel(frame_Auto_ClosePosition);
        label_PLRatio->setObjectName(QStringLiteral("label_PLRatio"));

        gridLayout_7->addWidget(label_PLRatio, 2, 0, 1, 1);

        label_21 = new QLabel(frame_Auto_ClosePosition);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_7->addWidget(label_21, 1, 2, 1, 1);

        label_PERatio = new QLabel(frame_Auto_ClosePosition);
        label_PERatio->setObjectName(QStringLiteral("label_PERatio"));

        gridLayout_7->addWidget(label_PERatio, 1, 0, 1, 1);

        spinBox_PLRatio = new QSpinBox(frame_Auto_ClosePosition);
        spinBox_PLRatio->setObjectName(QStringLiteral("spinBox_PLRatio"));
        spinBox_PLRatio->setMaximum(10000);
        spinBox_PLRatio->setValue(1000);

        gridLayout_7->addWidget(spinBox_PLRatio, 2, 1, 1, 1);

        spinBox_PERatio = new QSpinBox(frame_Auto_ClosePosition);
        spinBox_PERatio->setObjectName(QStringLiteral("spinBox_PERatio"));
        spinBox_PERatio->setMaximum(10000);
        spinBox_PERatio->setValue(1000);

        gridLayout_7->addWidget(spinBox_PERatio, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 1, 3, 2, 1);

        label_Auto_ClosePosition_Title = new QLabel(frame_Auto_ClosePosition);
        label_Auto_ClosePosition_Title->setObjectName(QStringLiteral("label_Auto_ClosePosition_Title"));

        gridLayout_7->addWidget(label_Auto_ClosePosition_Title, 0, 0, 1, 4);


        verticalLayout->addWidget(frame_Auto_ClosePosition);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget_Content->addTab(Widget_BaseSetting, QString());
        Widget_Charge_Setting = new QWidget();
        Widget_Charge_Setting->setObjectName(QStringLiteral("Widget_Charge_Setting"));
        verticalLayout_2 = new QVBoxLayout(Widget_Charge_Setting);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        frame_CostLimit = new QFrame(Widget_Charge_Setting);
        frame_CostLimit->setObjectName(QStringLiteral("frame_CostLimit"));
        frame_CostLimit->setFrameShape(QFrame::StyledPanel);
        frame_CostLimit->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_CostLimit);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_22 = new QLabel(frame_CostLimit);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_8->addWidget(label_22, 2, 2, 1, 1);

        label_RemainTime_Max = new QLabel(frame_CostLimit);
        label_RemainTime_Max->setObjectName(QStringLiteral("label_RemainTime_Max"));

        gridLayout_8->addWidget(label_RemainTime_Max, 2, 3, 1, 1);

        spinBox_RemainFee = new QSpinBox(frame_CostLimit);
        spinBox_RemainFee->setObjectName(QStringLiteral("spinBox_RemainFee"));
        spinBox_RemainFee->setMaximum(10000);
        spinBox_RemainFee->setValue(6);

        gridLayout_8->addWidget(spinBox_RemainFee, 2, 1, 1, 1);

        label_Deposit_Min = new QLabel(frame_CostLimit);
        label_Deposit_Min->setObjectName(QStringLiteral("label_Deposit_Min"));

        gridLayout_8->addWidget(label_Deposit_Min, 1, 0, 1, 1);

        label_RemainFee = new QLabel(frame_CostLimit);
        label_RemainFee->setObjectName(QStringLiteral("label_RemainFee"));

        gridLayout_8->addWidget(label_RemainFee, 2, 0, 1, 1);

        spinBox_RemainTime_Max = new QSpinBox(frame_CostLimit);
        spinBox_RemainTime_Max->setObjectName(QStringLiteral("spinBox_RemainTime_Max"));
        spinBox_RemainTime_Max->setValue(7);

        gridLayout_8->addWidget(spinBox_RemainTime_Max, 2, 4, 1, 1);

        doubleSpinBox_SellTime_Limit = new QDoubleSpinBox(frame_CostLimit);
        doubleSpinBox_SellTime_Limit->setObjectName(QStringLiteral("doubleSpinBox_SellTime_Limit"));
        doubleSpinBox_SellTime_Limit->setValue(15);

        gridLayout_8->addWidget(doubleSpinBox_SellTime_Limit, 3, 1, 1, 1);

        label_SellTime_Limit = new QLabel(frame_CostLimit);
        label_SellTime_Limit->setObjectName(QStringLiteral("label_SellTime_Limit"));

        gridLayout_8->addWidget(label_SellTime_Limit, 3, 0, 1, 1);

        label_OnSche_SellCharge = new QLabel(frame_CostLimit);
        label_OnSche_SellCharge->setObjectName(QStringLiteral("label_OnSche_SellCharge"));

        gridLayout_8->addWidget(label_OnSche_SellCharge, 4, 0, 1, 1);

        label_24 = new QLabel(frame_CostLimit);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_8->addWidget(label_24, 2, 5, 1, 1);

        label_25 = new QLabel(frame_CostLimit);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_8->addWidget(label_25, 3, 2, 1, 1);

        label_30 = new QLabel(frame_CostLimit);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_8->addWidget(label_30, 6, 3, 1, 1);

        spinBox_OnSche_SellCharge = new QSpinBox(frame_CostLimit);
        spinBox_OnSche_SellCharge->setObjectName(QStringLiteral("spinBox_OnSche_SellCharge"));
        spinBox_OnSche_SellCharge->setMaximum(10000);

        gridLayout_8->addWidget(spinBox_OnSche_SellCharge, 4, 1, 1, 1);

        label_26 = new QLabel(frame_CostLimit);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_8->addWidget(label_26, 4, 2, 1, 1);

        label_28 = new QLabel(frame_CostLimit);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_8->addWidget(label_28, 5, 3, 1, 1);

        label_BLOIAD_SD = new QLabel(frame_CostLimit);
        label_BLOIAD_SD->setObjectName(QStringLiteral("label_BLOIAD_SD"));

        gridLayout_8->addWidget(label_BLOIAD_SD, 5, 0, 1, 1);

        label_BLOIAD_DD = new QLabel(frame_CostLimit);
        label_BLOIAD_DD->setObjectName(QStringLiteral("label_BLOIAD_DD"));

        gridLayout_8->addWidget(label_BLOIAD_DD, 6, 0, 1, 1);

        label_27 = new QLabel(frame_CostLimit);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_8->addWidget(label_27, 5, 2, 1, 1);

        spinBox_BLOIAD_DD = new QSpinBox(frame_CostLimit);
        spinBox_BLOIAD_DD->setObjectName(QStringLiteral("spinBox_BLOIAD_DD"));
        spinBox_BLOIAD_DD->setMaximum(10000);
        spinBox_BLOIAD_DD->setValue(1000);

        gridLayout_8->addWidget(spinBox_BLOIAD_DD, 6, 1, 1, 1);

        label_StampDuty = new QLabel(frame_CostLimit);
        label_StampDuty->setObjectName(QStringLiteral("label_StampDuty"));

        gridLayout_8->addWidget(label_StampDuty, 8, 0, 1, 1);

        label_29 = new QLabel(frame_CostLimit);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_8->addWidget(label_29, 6, 2, 1, 1);

        label_31 = new QLabel(frame_CostLimit);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_8->addWidget(label_31, 7, 2, 1, 1);

        spinBox_BLOIAD_SD = new QSpinBox(frame_CostLimit);
        spinBox_BLOIAD_SD->setObjectName(QStringLiteral("spinBox_BLOIAD_SD"));
        spinBox_BLOIAD_SD->setMaximum(10000);
        spinBox_BLOIAD_SD->setValue(600);

        gridLayout_8->addWidget(spinBox_BLOIAD_SD, 5, 1, 1, 1);

        label_FinancingInterest = new QLabel(frame_CostLimit);
        label_FinancingInterest->setObjectName(QStringLiteral("label_FinancingInterest"));

        gridLayout_8->addWidget(label_FinancingInterest, 7, 0, 1, 1);

        label_32 = new QLabel(frame_CostLimit);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_8->addWidget(label_32, 8, 2, 1, 1);

        label_33 = new QLabel(frame_CostLimit);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_8->addWidget(label_33, 9, 2, 1, 1);

        spinBox_StampDuty = new QSpinBox(frame_CostLimit);
        spinBox_StampDuty->setObjectName(QStringLiteral("spinBox_StampDuty"));
        spinBox_StampDuty->setMaximum(10000);
        spinBox_StampDuty->setValue(10);

        gridLayout_8->addWidget(spinBox_StampDuty, 8, 1, 1, 1);

        spinBox_FinancingInterest = new QSpinBox(frame_CostLimit);
        spinBox_FinancingInterest->setObjectName(QStringLiteral("spinBox_FinancingInterest"));
        spinBox_FinancingInterest->setMaximum(10000);
        spinBox_FinancingInterest->setValue(24);

        gridLayout_8->addWidget(spinBox_FinancingInterest, 7, 1, 1, 1);

        doubleSpinBox_Recharge_Min = new QDoubleSpinBox(frame_CostLimit);
        doubleSpinBox_Recharge_Min->setObjectName(QStringLiteral("doubleSpinBox_Recharge_Min"));
        doubleSpinBox_Recharge_Min->setMaximum(1e+8);
        doubleSpinBox_Recharge_Min->setSingleStep(10000);
        doubleSpinBox_Recharge_Min->setValue(100);

        gridLayout_8->addWidget(doubleSpinBox_Recharge_Min, 10, 1, 1, 1);

        label_34 = new QLabel(frame_CostLimit);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_8->addWidget(label_34, 2, 6, 1, 1);

        doubleSpinBox_Turnover_Min = new QDoubleSpinBox(frame_CostLimit);
        doubleSpinBox_Turnover_Min->setObjectName(QStringLiteral("doubleSpinBox_Turnover_Min"));
        doubleSpinBox_Turnover_Min->setMaximum(1e+8);
        doubleSpinBox_Turnover_Min->setSingleStep(10000);
        doubleSpinBox_Turnover_Min->setValue(1000);

        gridLayout_8->addWidget(doubleSpinBox_Turnover_Min, 9, 1, 1, 1);

        label_Turnover_Min = new QLabel(frame_CostLimit);
        label_Turnover_Min->setObjectName(QStringLiteral("label_Turnover_Min"));

        gridLayout_8->addWidget(label_Turnover_Min, 9, 0, 1, 1);

        label_35 = new QLabel(frame_CostLimit);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_8->addWidget(label_35, 10, 2, 1, 1);

        label_36 = new QLabel(frame_CostLimit);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_8->addWidget(label_36, 1, 6, 1, 1);

        label_37 = new QLabel(frame_CostLimit);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_8->addWidget(label_37, 3, 6, 1, 1);

        label_Recharge_Min = new QLabel(frame_CostLimit);
        label_Recharge_Min->setObjectName(QStringLiteral("label_Recharge_Min"));

        gridLayout_8->addWidget(label_Recharge_Min, 10, 0, 1, 1);

        label_38 = new QLabel(frame_CostLimit);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout_8->addWidget(label_38, 4, 6, 1, 1);

        label_39 = new QLabel(frame_CostLimit);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_8->addWidget(label_39, 9, 6, 1, 1);

        label_40 = new QLabel(frame_CostLimit);
        label_40->setObjectName(QStringLiteral("label_40"));

        gridLayout_8->addWidget(label_40, 10, 6, 1, 1);

        spinBox_Deposit_Min = new QSpinBox(frame_CostLimit);
        spinBox_Deposit_Min->setObjectName(QStringLiteral("spinBox_Deposit_Min"));
        spinBox_Deposit_Min->setMaximum(10000);
        spinBox_Deposit_Min->setValue(100);

        gridLayout_8->addWidget(spinBox_Deposit_Min, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 1, 7, 10, 1);

        label_CostLimit_Title = new QLabel(frame_CostLimit);
        label_CostLimit_Title->setObjectName(QStringLiteral("label_CostLimit_Title"));

        gridLayout_8->addWidget(label_CostLimit_Title, 0, 0, 1, 8);


        verticalLayout_2->addWidget(frame_CostLimit);

        frame_Other = new QFrame(Widget_Charge_Setting);
        frame_Other->setObjectName(QStringLiteral("frame_Other"));
        frame_Other->setFrameShape(QFrame::StyledPanel);
        frame_Other->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_Other);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        spinBox_MNOPPS = new QSpinBox(frame_Other);
        spinBox_MNOPPS->setObjectName(QStringLiteral("spinBox_MNOPPS"));
        spinBox_MNOPPS->setMaximum(1000000000);
        spinBox_MNOPPS->setSingleStep(10000);
        spinBox_MNOPPS->setValue(999999981);

        gridLayout_9->addWidget(spinBox_MNOPPS, 3, 1, 1, 1);

        spinBox_BuyNum_Min = new QSpinBox(frame_Other);
        spinBox_BuyNum_Min->setObjectName(QStringLiteral("spinBox_BuyNum_Min"));
        spinBox_BuyNum_Min->setMaximum(100000000);
        spinBox_BuyNum_Min->setSingleStep(10);
        spinBox_BuyNum_Min->setValue(10);

        gridLayout_9->addWidget(spinBox_BuyNum_Min, 1, 1, 1, 1);

        spinBox_BuyNum_Max = new QSpinBox(frame_Other);
        spinBox_BuyNum_Max->setObjectName(QStringLiteral("spinBox_BuyNum_Max"));
        spinBox_BuyNum_Max->setMaximum(100000000);
        spinBox_BuyNum_Max->setSingleStep(10000);
        spinBox_BuyNum_Max->setValue(1000000);

        gridLayout_9->addWidget(spinBox_BuyNum_Max, 2, 1, 1, 1);

        label_MarginWarn = new QLabel(frame_Other);
        label_MarginWarn->setObjectName(QStringLiteral("label_MarginWarn"));

        gridLayout_9->addWidget(label_MarginWarn, 5, 0, 1, 1);

        label_42 = new QLabel(frame_Other);
        label_42->setObjectName(QStringLiteral("label_42"));

        gridLayout_9->addWidget(label_42, 4, 2, 1, 1);

        label_BuyNum_Max = new QLabel(frame_Other);
        label_BuyNum_Max->setObjectName(QStringLiteral("label_BuyNum_Max"));

        gridLayout_9->addWidget(label_BuyNum_Max, 2, 0, 1, 1);

        label_BuyNum_Min = new QLabel(frame_Other);
        label_BuyNum_Min->setObjectName(QStringLiteral("label_BuyNum_Min"));

        gridLayout_9->addWidget(label_BuyNum_Min, 1, 0, 1, 1);

        label_AOSS = new QLabel(frame_Other);
        label_AOSS->setObjectName(QStringLiteral("label_AOSS"));

        gridLayout_9->addWidget(label_AOSS, 4, 0, 1, 1);

        label_MNOPPS = new QLabel(frame_Other);
        label_MNOPPS->setObjectName(QStringLiteral("label_MNOPPS"));

        gridLayout_9->addWidget(label_MNOPPS, 3, 0, 1, 1);

        spinBox_AOSS = new QSpinBox(frame_Other);
        spinBox_AOSS->setObjectName(QStringLiteral("spinBox_AOSS"));
        spinBox_AOSS->setMaximum(1000);
        spinBox_AOSS->setSingleStep(10);
        spinBox_AOSS->setValue(1000);

        gridLayout_9->addWidget(spinBox_AOSS, 4, 1, 1, 1);

        doubleSpinBox_MarginWarn = new QDoubleSpinBox(frame_Other);
        doubleSpinBox_MarginWarn->setObjectName(QStringLiteral("doubleSpinBox_MarginWarn"));

        gridLayout_9->addWidget(doubleSpinBox_MarginWarn, 5, 2, 1, 1);

        label_41 = new QLabel(frame_Other);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayout_9->addWidget(label_41, 5, 1, 1, 1);

        label_45 = new QLabel(frame_Other);
        label_45->setObjectName(QStringLiteral("label_45"));

        gridLayout_9->addWidget(label_45, 6, 1, 1, 1);

        label_43 = new QLabel(frame_Other);
        label_43->setObjectName(QStringLiteral("label_43"));

        gridLayout_9->addWidget(label_43, 5, 3, 1, 1);

        label_TP = new QLabel(frame_Other);
        label_TP->setObjectName(QStringLiteral("label_TP"));

        gridLayout_9->addWidget(label_TP, 6, 0, 1, 1);

        spinBox_TP_Up = new QSpinBox(frame_Other);
        spinBox_TP_Up->setObjectName(QStringLiteral("spinBox_TP_Up"));
        spinBox_TP_Up->setMaximum(10000);
        spinBox_TP_Up->setSingleStep(10);

        gridLayout_9->addWidget(spinBox_TP_Up, 6, 2, 1, 1);

        label_47 = new QLabel(frame_Other);
        label_47->setObjectName(QStringLiteral("label_47"));

        gridLayout_9->addWidget(label_47, 6, 6, 1, 1);

        label_44 = new QLabel(frame_Other);
        label_44->setObjectName(QStringLiteral("label_44"));

        gridLayout_9->addWidget(label_44, 6, 3, 1, 1);

        spinBox_TP_Down = new QSpinBox(frame_Other);
        spinBox_TP_Down->setObjectName(QStringLiteral("spinBox_TP_Down"));
        spinBox_TP_Down->setMaximum(10000);
        spinBox_TP_Down->setSingleStep(10);

        gridLayout_9->addWidget(spinBox_TP_Down, 6, 5, 1, 1);

        label_46 = new QLabel(frame_Other);
        label_46->setObjectName(QStringLiteral("label_46"));

        gridLayout_9->addWidget(label_46, 6, 4, 1, 1);

        label_FLASDOS = new QLabel(frame_Other);
        label_FLASDOS->setObjectName(QStringLiteral("label_FLASDOS"));

        gridLayout_9->addWidget(label_FLASDOS, 7, 0, 1, 1);

        spinBox_FLASDOS = new QSpinBox(frame_Other);
        spinBox_FLASDOS->setObjectName(QStringLiteral("spinBox_FLASDOS"));

        gridLayout_9->addWidget(spinBox_FLASDOS, 7, 1, 1, 1);

        label_49 = new QLabel(frame_Other);
        label_49->setObjectName(QStringLiteral("label_49"));

        gridLayout_9->addWidget(label_49, 7, 7, 1, 1);

        label_50 = new QLabel(frame_Other);
        label_50->setObjectName(QStringLiteral("label_50"));

        gridLayout_9->addWidget(label_50, 5, 7, 1, 1);

        label_48 = new QLabel(frame_Other);
        label_48->setObjectName(QStringLiteral("label_48"));

        gridLayout_9->addWidget(label_48, 7, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 1, 8, 7, 1);

        label_Other_Title = new QLabel(frame_Other);
        label_Other_Title->setObjectName(QStringLiteral("label_Other_Title"));

        gridLayout_9->addWidget(label_Other_Title, 0, 0, 1, 9);


        verticalLayout_2->addWidget(frame_Other);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget_Content->addTab(Widget_Charge_Setting, QString());

        gridLayout->addWidget(tabWidget_Content, 0, 0, 1, 2);


        retranslateUi(Admin_SystemSetting);

        tabWidget_Content->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin_SystemSetting);
    } // setupUi

    void retranslateUi(QWidget *Admin_SystemSetting)
    {
        Admin_SystemSetting->setWindowTitle(QApplication::translate("Admin_SystemSetting", "Widget_System_Setting", Q_NULLPTR));
        pushButton_Apply->setText(QApplication::translate("Admin_SystemSetting", "\344\277\235\345\255\230", Q_NULLPTR));
        label_OOCT_AM->setText(QApplication::translate("Admin_SystemSetting", "\344\270\212\345\215\210\345\274\200\346\224\266\345\270\202\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Admin_SystemSetting", "-", Q_NULLPTR));
        label_OOCTTitle->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\274\200\345\270\202\345\222\214\346\224\266\345\270\202\346\227\266\351\227\264\350\256\276\345\256\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\345\274\200\346\224\266\345\270\202\346\227\266\351\227\264\350\256\276\345\256\232\357\274\214\345\205\201\350\256\270\346\210\226\347\246\201\346\255\242\344\271\260\345\215\226\350\202\241\347\245\250\357\274\214\345\247\224\346\211\230\357\274\210\346\240\274\345\274\217\344\276\213\345\246\20209:30\357\274\211</span></p></body></html>", Q_NULLPTR));
        timeEdit_Close_AM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        timeEdit_Open_AM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_OOCT_PM->setText(QApplication::translate("Admin_SystemSetting", "\344\270\213\345\215\210\345\274\200\346\224\266\345\270\202\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        timeEdit_Open_PM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_3->setText(QApplication::translate("Admin_SystemSetting", "-", Q_NULLPTR));
        timeEdit_Close_PM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_5->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\214\207\345\256\232\346\227\266\351\227\264\345\206\205\345\205\201\350\256\270\344\274\232\345\221\230\345\271\263\344\273\223\357\274\210\345\215\226\345\207\272\357\274\211\357\274\210\346\240\274\345\274\217\344\276\213\345\246\202\357\274\23209:30\357\274\211</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("Admin_SystemSetting", "-", Q_NULLPTR));
        timeEdit_CPTEnd_AM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        timeEdit_CPTBegin_AM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_CPT_AM->setText(QApplication::translate("Admin_SystemSetting", "\344\270\212\345\215\210\345\271\263\344\273\223\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_CPT_PM->setText(QApplication::translate("Admin_SystemSetting", "\344\270\213\345\215\210\345\271\263\344\273\223\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_CPT_Title->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\271\263\344\273\223\346\227\266\351\227\264\350\256\276\347\275\256</span></p></body></html>", Q_NULLPTR));
        timeEdit_CPTBegin_PM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_6->setText(QApplication::translate("Admin_SystemSetting", "-", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_DT_AM->setText(QApplication::translate("Admin_SystemSetting", "\344\270\212\345\215\210\346\217\220\346\254\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        timeEdit_DTEnd_AM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_DT_PM->setText(QApplication::translate("Admin_SystemSetting", "\344\270\213\345\215\210\346\217\220\346\254\276\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        timeEdit_2->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        timeEdit_DTBegin_AM->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_7->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\214\207\345\256\232\346\227\266\351\227\264\345\206\205\345\205\201\350\256\270\344\274\232\345\221\230\345\271\263\344\273\223\357\274\210\345\215\226\345\207\272\357\274\211\357\274\210\346\240\274\345\274\217\344\276\213\345\246\202\357\274\23209:30\357\274\211</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("Admin_SystemSetting", "-", Q_NULLPTR));
        label_9->setText(QApplication::translate("Admin_SystemSetting", "-", Q_NULLPTR));
        timeEdit_3->setDisplayFormat(QApplication::translate("Admin_SystemSetting", "hh:mm", Q_NULLPTR));
        label_DT_Title->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\217\220\346\254\276\346\227\266\351\227\264\350\256\276\347\275\256</span></p></body></html>", Q_NULLPTR));
        label_TryTime->setText(QApplication::translate("Admin_SystemSetting", "\345\260\235\350\257\225\347\231\273\345\275\225\346\254\241\346\225\260\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\345\275\223\347\224\250\346\210\267\350\276\223\345\205\245\351\224\231\350\257\257\345\257\206\347\240\201\350\276\276\345\210\260\346\214\207\345\256\232\346\254\241\346\225\260\345\215\263\351\224\201\345\256\232\347\224\250\346\210\267</span></p></body></html>", Q_NULLPTR));
        label_Base_Title->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\237\272\347\241\200\350\256\276\347\275\256</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("Admin_SystemSetting", "\344\275\215", Q_NULLPTR));
        label_Name_Length->setText(QApplication::translate("Admin_SystemSetting", "\345\220\215\347\247\260\351\231\220\345\210\266\357\274\232", Q_NULLPTR));
        label_18->setText(QApplication::translate("Admin_SystemSetting", "\350\207\263", Q_NULLPTR));
        label_14->setText(QApplication::translate("Admin_SystemSetting", "\350\207\263", Q_NULLPTR));
        label_AgentAccount_Length->setText(QApplication::translate("Admin_SystemSetting", "\344\273\243\347\220\206\345\225\206\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\346\226\260\345\273\272\347\224\250\346\210\267\346\227\266\345\217\252\350\203\275\345\214\205\345\220\253\347\232\204\345\255\227\347\254\246\345\222\214\347\254\246\345\217\267</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("Admin_SystemSetting", "\350\207\263", Q_NULLPTR));
        label_Password_Length->setText(QApplication::translate("Admin_SystemSetting", "\345\257\206\347\240\201\351\231\220\345\210\266\357\274\232", Q_NULLPTR));
        label_13->setText(QApplication::translate("Admin_SystemSetting", "\344\275\215", Q_NULLPTR));
        label_CharLimit->setText(QApplication::translate("Admin_SystemSetting", "\350\264\246\345\217\267\347\224\263\350\257\267\351\231\220\345\210\266\357\274\232", Q_NULLPTR));
        label_MemberAccount_Length->setText(QApplication::translate("Admin_SystemSetting", "\344\274\232\345\221\230\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("Admin_SystemSetting", "\344\275\215", Q_NULLPTR));
        label_16->setText(QApplication::translate("Admin_SystemSetting", "\350\207\263", Q_NULLPTR));
        lineEdit_CharLimit->setText(QApplication::translate("Admin_SystemSetting", "([0-9][a-z][A-Z])+", Q_NULLPTR));
        label_19->setText(QApplication::translate("Admin_SystemSetting", "\344\275\215", Q_NULLPTR));
        label_Overtime->setText(QApplication::translate("Admin_SystemSetting", "\345\234\250\347\272\277\350\266\205\346\227\266\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_20->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\350\277\231\351\207\214\347\232\204\346\227\266\351\227\264\346\230\257\347\224\250\346\210\267\347\231\273\351\231\206\344\277\235\346\214\201\346\227\266\351\227\264\357\274\214\350\266\205\345\207\272\350\277\231\344\270\252\346\227\266\351\227\264\346\227\240\345\212\250\344\275\234\345\210\231\350\207\252\345\212\250\350\270\242\345\207\272</span></p></body></html>", Q_NULLPTR));
        label_Account_Title->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\237\272\347\241\200\350\256\276\347\275\256</span></p></body></html>", Q_NULLPTR));
        label_23->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_PLRatio->setText(QApplication::translate("Admin_SystemSetting", "\344\272\217\347\216\207\350\266\205\350\277\207\346\210\226\347\255\211\344\272\216\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_PERatio->setText(QApplication::translate("Admin_SystemSetting", "\347\233\210\347\216\207\350\266\205\350\277\207\346\210\226\347\255\211\344\272\216\357\274\232", Q_NULLPTR));
        label_Auto_ClosePosition_Title->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\350\207\252\345\212\250\345\271\263\344\273\223</span></p></body></html>", Q_NULLPTR));
        tabWidget_Content->setTabText(tabWidget_Content->indexOf(Widget_BaseSetting), QApplication::translate("Admin_SystemSetting", "\345\237\272\347\241\200\350\256\276\347\275\256", Q_NULLPTR));
        label_22->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_RemainTime_Max->setText(QApplication::translate("Admin_SystemSetting", "\346\234\200\351\225\277\347\225\231\344\273\223", Q_NULLPTR));
        label_Deposit_Min->setText(QApplication::translate("Admin_SystemSetting", "\346\234\200\344\275\216\344\277\235\350\257\201\351\207\221\357\274\232", Q_NULLPTR));
        label_RemainFee->setText(QApplication::translate("Admin_SystemSetting", "\347\225\231\344\273\223\346\211\213\347\273\255\350\264\271\357\274\232", Q_NULLPTR));
        label_SellTime_Limit->setText(QApplication::translate("Admin_SystemSetting", "\346\234\200\345\260\217\345\207\272\345\215\226\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_OnSche_SellCharge->setText(QApplication::translate("Admin_SystemSetting", "\350\247\204\345\256\232\346\227\266\351\227\264\345\206\205\345\215\226\345\207\272\345\212\240\346\224\266\346\211\213\347\273\255\350\264\271\357\274\232", Q_NULLPTR));
        label_24->setText(QApplication::translate("Admin_SystemSetting", "\345\244\251", Q_NULLPTR));
        label_25->setText(QApplication::translate("Admin_SystemSetting", "\345\210\206\351\222\237", Q_NULLPTR));
        label_30->setText(QApplication::translate("Admin_SystemSetting", "\344\270\215\350\256\270\344\271\260\345\205\245", Q_NULLPTR));
        label_26->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_28->setText(QApplication::translate("Admin_SystemSetting", "\344\270\215\350\256\270\344\271\260\345\205\245", Q_NULLPTR));
        label_BLOIAD_SD->setText(QApplication::translate("Admin_SystemSetting", "\345\215\225\346\227\245\346\266\250\350\267\214\345\271\205\344\271\260\345\205\245\351\231\220\345\210\266\357\274\232", Q_NULLPTR));
        label_BLOIAD_DD->setText(QApplication::translate("Admin_SystemSetting", "\345\217\214\346\227\245\346\266\250\350\267\214\345\271\205\344\271\260\345\205\245\351\231\220\345\210\266\357\274\232", Q_NULLPTR));
        label_27->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_StampDuty->setText(QApplication::translate("Admin_SystemSetting", "\345\215\260\350\212\261\347\250\216\357\274\232", Q_NULLPTR));
        label_29->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_31->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_FinancingInterest->setText(QApplication::translate("Admin_SystemSetting", "\350\236\215\350\265\204\345\210\251\346\201\257\357\274\232", Q_NULLPTR));
        label_32->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_33->setText(QApplication::translate("Admin_SystemSetting", "\345\205\203", Q_NULLPTR));
        label_34->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\350\256\276\347\275\256\347\225\231\344\273\223\350\264\271\347\224\250\346\234\200\345\244\247\351\231\220\345\210\266\344\273\245\345\217\212\346\234\200\345\244\247\345\244\251\346\225\260</span></p></body></html>", Q_NULLPTR));
        label_Turnover_Min->setText(QApplication::translate("Admin_SystemSetting", "\346\234\200\344\275\216\346\210\220\344\272\244\351\242\235\350\256\276\347\275\256\357\274\232", Q_NULLPTR));
        label_35->setText(QApplication::translate("Admin_SystemSetting", "\345\205\203", Q_NULLPTR));
        label_36->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\347\263\273\347\273\237\347\225\231\344\273\223\346\227\266\344\275\277\347\224\250</span></p></body></html>", Q_NULLPTR));
        label_37->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\344\271\260\345\205\245\350\202\241\347\245\250\345\220\216\351\227\264\351\232\224\345\244\232\345\260\221\346\227\266\351\227\264\345\217\257\344\273\245\345\215\226\345\207\272</span></p></body></html>", Q_NULLPTR));
        label_Recharge_Min->setText(QApplication::translate("Admin_SystemSetting", "\346\234\200\344\275\216\345\205\205\345\200\274\351\242\235\345\272\246\357\274\232", Q_NULLPTR));
        label_38->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\345\212\240\346\224\266\346\211\213\347\273\255\350\264\271\346\227\266\351\227\264\345\206\205\345\215\226\345\207\272\350\202\241\347\245\250\345\212\240\346\224\266\346\211\213\347\273\255\350\264\271</span></p></body></html>", Q_NULLPTR));
        label_39->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\345\275\223\346\210\220\344\272\244\351\242\235\345\260\217\344\272\216\350\256\276\345\256\232\345\200\274\345\220\216\347\246\201\346\255\242\344\271\260\345\205\245</span></p></body></html>", Q_NULLPTR));
        label_40->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\345\275\223\345\277\205\351\241\273\344\270\272\346\225\264\346\225\260</span></p></body></html>", Q_NULLPTR));
        label_CostLimit_Title->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\350\264\271\347\224\250\351\231\220\345\210\266</span></p></body></html>", Q_NULLPTR));
        label_MarginWarn->setText(QApplication::translate("Admin_SystemSetting", "\344\277\235\350\257\201\351\207\221\351\242\204\350\255\246\357\274\232", Q_NULLPTR));
        label_42->setText(QApplication::translate("Admin_SystemSetting", "\342\200\260", Q_NULLPTR));
        label_BuyNum_Max->setText(QApplication::translate("Admin_SystemSetting", "\346\234\200\345\244\247\344\271\260\345\205\245\346\211\213\346\225\260\357\274\232", Q_NULLPTR));
        label_BuyNum_Min->setText(QApplication::translate("Admin_SystemSetting", "\346\234\200\345\260\217\344\271\260\345\205\245\346\211\213\346\225\260\357\274\232", Q_NULLPTR));
        label_AOSS->setText(QApplication::translate("Admin_SystemSetting", "\345\215\225\350\202\241\345\217\257\347\224\250\351\242\235\345\272\246\357\274\232", Q_NULLPTR));
        label_MNOPPS->setText(QApplication::translate("Admin_SystemSetting", "\345\215\225\350\202\241\345\215\207\350\267\214\346\234\200\345\244\247\346\214\201\344\273\223\346\225\260\357\274\232", Q_NULLPTR));
        label_41->setText(QApplication::translate("Admin_SystemSetting", "\345\275\223\345\217\257\347\224\250\344\277\235\350\257\201\351\207\221\344\275\216\344\272\216", Q_NULLPTR));
        label_45->setText(QApplication::translate("Admin_SystemSetting", "\344\270\212\346\266\250", Q_NULLPTR));
        label_43->setText(QApplication::translate("Admin_SystemSetting", "\346\227\266\346\217\220\347\244\272\347\224\250\346\210\267", Q_NULLPTR));
        label_TP->setText(QApplication::translate("Admin_SystemSetting", "\344\271\260\345\215\226\346\273\221\344\273\267\357\274\232", Q_NULLPTR));
        label_47->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_44->setText(QApplication::translate("Admin_SystemSetting", "/10000", Q_NULLPTR));
        label_46->setText(QApplication::translate("Admin_SystemSetting", "\344\270\213\350\267\214", Q_NULLPTR));
        label_FLASDOS->setText(QApplication::translate("Admin_SystemSetting", "\345\201\234\347\211\214\345\207\240\345\244\251\345\220\216\345\274\272\345\210\266\345\271\263\344\273\223\357\274\232", Q_NULLPTR));
        label_49->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\345\201\234\347\211\214\345\207\240\345\244\251\345\220\216\345\274\272\345\210\266\345\271\263\344\273\223</span></p></body></html>", Q_NULLPTR));
        label_50->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" color:#ff0000;\">\345\273\272\344\273\245\346\225\260\345\200\274\345\234\2500-200\344\271\213\351\227\264</span></p></body></html>", Q_NULLPTR));
        label_48->setText(QApplication::translate("Admin_SystemSetting", "\345\244\251", Q_NULLPTR));
        label_Other_Title->setText(QApplication::translate("Admin_SystemSetting", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\205\266\344\273\226\350\256\276\347\275\256</span></p></body></html>", Q_NULLPTR));
        tabWidget_Content->setTabText(tabWidget_Content->indexOf(Widget_Charge_Setting), QApplication::translate("Admin_SystemSetting", "\346\224\266\346\254\276\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin_SystemSetting: public Ui_Admin_SystemSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_SYSTEMSETTING_H

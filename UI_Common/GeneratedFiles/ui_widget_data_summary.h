/********************************************************************************
** Form generated from reading UI file 'widget_data_summary.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DATA_SUMMARY_H
#define UI_WIDGET_DATA_SUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_Data_Summary
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_BaseInfoTitle;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_BaseInfoContent;
    QGridLayout *gridLayout;
    QLabel *label_BaseInfoContent;
    QFrame *frame_TodayDataTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_TodayDataContent;
    QGridLayout *gridLayout_2;
    QLabel *label_TodayDataContent;
    QFrame *frame_SummaryTitle;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_SummaryContent;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_SummaryContent;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget_Data_Summary)
    {
        if (Widget_Data_Summary->objectName().isEmpty())
            Widget_Data_Summary->setObjectName(QStringLiteral("Widget_Data_Summary"));
        Widget_Data_Summary->resize(1116, 753);
        verticalLayout = new QVBoxLayout(Widget_Data_Summary);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_BaseInfoTitle = new QFrame(Widget_Data_Summary);
        frame_BaseInfoTitle->setObjectName(QStringLiteral("frame_BaseInfoTitle"));
        frame_BaseInfoTitle->setFrameShape(QFrame::StyledPanel);
        frame_BaseInfoTitle->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_BaseInfoTitle);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame_BaseInfoTitle);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(frame_BaseInfoTitle);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame_BaseInfoTitle);

        frame_BaseInfoContent = new QFrame(Widget_Data_Summary);
        frame_BaseInfoContent->setObjectName(QStringLiteral("frame_BaseInfoContent"));
        frame_BaseInfoContent->setFrameShape(QFrame::StyledPanel);
        frame_BaseInfoContent->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_BaseInfoContent);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_BaseInfoContent = new QLabel(frame_BaseInfoContent);
        label_BaseInfoContent->setObjectName(QStringLiteral("label_BaseInfoContent"));

        gridLayout->addWidget(label_BaseInfoContent, 2, 2, 1, 1);


        verticalLayout->addWidget(frame_BaseInfoContent);

        frame_TodayDataTitle = new QFrame(Widget_Data_Summary);
        frame_TodayDataTitle->setObjectName(QStringLiteral("frame_TodayDataTitle"));
        frame_TodayDataTitle->setFrameShape(QFrame::StyledPanel);
        frame_TodayDataTitle->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_TodayDataTitle);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(frame_TodayDataTitle);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        pushButton_2 = new QPushButton(frame_TodayDataTitle);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame_TodayDataTitle);

        frame_TodayDataContent = new QFrame(Widget_Data_Summary);
        frame_TodayDataContent->setObjectName(QStringLiteral("frame_TodayDataContent"));
        frame_TodayDataContent->setFrameShape(QFrame::StyledPanel);
        frame_TodayDataContent->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_TodayDataContent);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_TodayDataContent = new QLabel(frame_TodayDataContent);
        label_TodayDataContent->setObjectName(QStringLiteral("label_TodayDataContent"));

        gridLayout_2->addWidget(label_TodayDataContent, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_TodayDataContent);

        frame_SummaryTitle = new QFrame(Widget_Data_Summary);
        frame_SummaryTitle->setObjectName(QStringLiteral("frame_SummaryTitle"));
        frame_SummaryTitle->setFrameShape(QFrame::StyledPanel);
        frame_SummaryTitle->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_SummaryTitle);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(frame_SummaryTitle);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(frame_SummaryTitle);

        frame_SummaryContent = new QFrame(Widget_Data_Summary);
        frame_SummaryContent->setObjectName(QStringLiteral("frame_SummaryContent"));
        frame_SummaryContent->setFrameShape(QFrame::StyledPanel);
        frame_SummaryContent->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_SummaryContent);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        comboBox = new QComboBox(frame_SummaryContent);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_3->addWidget(comboBox, 0, 1, 1, 1);

        label_4 = new QLabel(frame_SummaryContent);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(frame_SummaryContent);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 4, 1, 1);

        pushButton_3 = new QPushButton(frame_SummaryContent);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 0, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 7, 3, 1);

        label_5 = new QLabel(frame_SummaryContent);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 2, 1, 1);

        comboBox_2 = new QComboBox(frame_SummaryContent);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_3->addWidget(comboBox_2, 0, 3, 1, 1);

        comboBox_3 = new QComboBox(frame_SummaryContent);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout_3->addWidget(comboBox_3, 0, 5, 1, 1);

        label_SummaryContent = new QLabel(frame_SummaryContent);
        label_SummaryContent->setObjectName(QStringLiteral("label_SummaryContent"));

        gridLayout_3->addWidget(label_SummaryContent, 3, 0, 1, 8);

        frame = new QFrame(frame_SummaryContent);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(frame);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(frame);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout_4->addWidget(radioButton_4);


        gridLayout_3->addWidget(frame, 1, 0, 1, 6);


        verticalLayout->addWidget(frame_SummaryContent);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Widget_Data_Summary);

        QMetaObject::connectSlotsByName(Widget_Data_Summary);
    } // setupUi

    void retranslateUi(QWidget *Widget_Data_Summary)
    {
        Widget_Data_Summary->setWindowTitle(QApplication::translate("Widget_Data_Summary", "Widget_Data_Summary", Q_NULLPTR));
        label->setText(QApplication::translate("Widget_Data_Summary", "\345\237\272\346\234\254\344\277\241\346\201\257    ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget_Data_Summary", "\345\210\267\346\226\260", Q_NULLPTR));
        label_BaseInfoContent->setText(QString());
        label_2->setText(QApplication::translate("Widget_Data_Summary", "\344\273\212\346\227\245\346\225\260\346\215\256    ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget_Data_Summary", "\345\210\267\346\226\260", Q_NULLPTR));
        label_TodayDataContent->setText(QString());
        label_3->setText(QApplication::translate("Widget_Data_Summary", "\346\261\207\346\200\273\346\225\260\346\215\256", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget_Data_Summary", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Widget_Data_Summary", "\344\273\243\347\220\206\345\225\206\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget_Data_Summary", "\344\274\232\345\221\230\357\274\232", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget_Data_Summary", "\346\237\245\350\257\242", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget_Data_Summary", "\344\270\232\345\212\241\345\221\230\357\274\232", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Widget_Data_Summary", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Widget_Data_Summary", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_SummaryContent->setText(QString());
        radioButton->setText(QApplication::translate("Widget_Data_Summary", "\346\234\210", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Widget_Data_Summary", "\345\221\250", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Widget_Data_Summary", "\346\227\245", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("Widget_Data_Summary", "\350\207\252\345\256\232\344\271\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_Data_Summary: public Ui_Widget_Data_Summary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DATA_SUMMARY_H

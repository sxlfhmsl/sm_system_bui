/********************************************************************************
** Form generated from reading UI file 'widget_login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_LOGIN_H
#define UI_WIDGET_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../component/vercodelabel.h"

QT_BEGIN_NAMESPACE

class Ui_Widget_Login
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_Main;
    QVBoxLayout *verticalLayout;
    QLabel *label_Title;
    QFrame *frame_Edit;
    QGridLayout *gridLayout_2;
    QLabel *label_Password;
    QLabel *label_Username;
    QLabel *label_Code;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Code;
    VerCodeLabel *label_CodeVal;
    QLineEdit *lineEdit_Password;
    QFrame *frame_Button;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Login;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_Out;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget_Login)
    {
        if (Widget_Login->objectName().isEmpty())
            Widget_Login->setObjectName(QStringLiteral("Widget_Login"));
        Widget_Login->resize(819, 609);
        gridLayout = new QGridLayout(Widget_Login);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        frame_Main = new QFrame(Widget_Login);
        frame_Main->setObjectName(QStringLiteral("frame_Main"));
        frame_Main->setMinimumSize(QSize(400, 300));
        frame_Main->setMaximumSize(QSize(400, 300));
        frame_Main->setFrameShape(QFrame::StyledPanel);
        frame_Main->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_Main);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Title = new QLabel(frame_Main);
        label_Title->setObjectName(QStringLiteral("label_Title"));
        label_Title->setMinimumSize(QSize(0, 45));
        label_Title->setMaximumSize(QSize(16777215, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_Title->setFont(font);
        label_Title->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"border-top-left-radius: 20px; \n"
"border-top-right-radius: 20px;"));
        label_Title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_Title);

        frame_Edit = new QFrame(frame_Main);
        frame_Edit->setObjectName(QStringLiteral("frame_Edit"));
        frame_Edit->setMinimumSize(QSize(0, 0));
        frame_Edit->setStyleSheet(QStringLiteral(""));
        frame_Edit->setFrameShape(QFrame::StyledPanel);
        frame_Edit->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Edit);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(40, 10, 40, 10);
        label_Password = new QLabel(frame_Edit);
        label_Password->setObjectName(QStringLiteral("label_Password"));
        label_Password->setMinimumSize(QSize(40, 40));
        label_Password->setMaximumSize(QSize(40, 40));
        label_Password->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/password.png")));
        label_Password->setScaledContents(true);
        label_Password->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Password, 1, 0, 1, 1);

        label_Username = new QLabel(frame_Edit);
        label_Username->setObjectName(QStringLiteral("label_Username"));
        label_Username->setMinimumSize(QSize(40, 40));
        label_Username->setMaximumSize(QSize(40, 40));
        label_Username->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/user.png")));
        label_Username->setScaledContents(true);
        label_Username->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Username, 0, 0, 1, 1);

        label_Code = new QLabel(frame_Edit);
        label_Code->setObjectName(QStringLiteral("label_Code"));
        label_Code->setMinimumSize(QSize(40, 40));
        label_Code->setMaximumSize(QSize(40, 40));
        label_Code->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/ver_code.png")));
        label_Code->setScaledContents(true);
        label_Code->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Code, 2, 0, 1, 1);

        lineEdit_Username = new QLineEdit(frame_Edit);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setMinimumSize(QSize(0, 30));
        lineEdit_Username->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(12);
        lineEdit_Username->setFont(font1);
        lineEdit_Username->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"padding-right: 10px;\n"
"border-radius: 10px;\n"
""));

        gridLayout_2->addWidget(lineEdit_Username, 0, 1, 1, 2);

        lineEdit_Code = new QLineEdit(frame_Edit);
        lineEdit_Code->setObjectName(QStringLiteral("lineEdit_Code"));
        lineEdit_Code->setMinimumSize(QSize(0, 30));
        lineEdit_Code->setMaximumSize(QSize(16777215, 30));
        lineEdit_Code->setFont(font1);
        lineEdit_Code->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"padding-right: 10px;\n"
"border-radius: 10px;"));

        gridLayout_2->addWidget(lineEdit_Code, 2, 1, 1, 1);

        label_CodeVal = new VerCodeLabel(frame_Edit);
        label_CodeVal->setObjectName(QStringLiteral("label_CodeVal"));
        label_CodeVal->setMinimumSize(QSize(100, 30));
        label_CodeVal->setMaximumSize(QSize(100, 30));

        gridLayout_2->addWidget(label_CodeVal, 2, 2, 1, 1);

        lineEdit_Password = new QLineEdit(frame_Edit);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setMinimumSize(QSize(0, 30));
        lineEdit_Password->setMaximumSize(QSize(16777215, 30));
        lineEdit_Password->setFont(font1);
        lineEdit_Password->setStyleSheet(QLatin1String("padding-left: 10px;\n"
"padding-right: 10px;\n"
"border-radius: 10px;\n"
""));

        gridLayout_2->addWidget(lineEdit_Password, 1, 1, 1, 2);


        verticalLayout->addWidget(frame_Edit);

        frame_Button = new QFrame(frame_Main);
        frame_Button->setObjectName(QStringLiteral("frame_Button"));
        frame_Button->setMinimumSize(QSize(0, 50));
        frame_Button->setMaximumSize(QSize(16777215, 50));
        frame_Button->setFrameShape(QFrame::StyledPanel);
        frame_Button->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_Button);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Login = new QPushButton(frame_Button);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setMinimumSize(QSize(0, 40));
        pushButton_Login->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_Login->setFont(font2);
        pushButton_Login->setStyleSheet(QLatin1String("Padding: 10px;\n"
"Border-radius: 15px;\n"
"Background: #393;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(pushButton_Login);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_Out = new QPushButton(frame_Button);
        pushButton_Out->setObjectName(QStringLiteral("pushButton_Out"));
        pushButton_Out->setMinimumSize(QSize(0, 40));
        pushButton_Out->setMaximumSize(QSize(16777215, 40));
        pushButton_Out->setFont(font2);
        pushButton_Out->setStyleSheet(QLatin1String("Padding: 10px;\n"
"Border-radius: 15px;\n"
"Background: #933;\n"
"Color: #fefefe;"));

        horizontalLayout->addWidget(pushButton_Out);


        verticalLayout->addWidget(frame_Button);


        gridLayout->addWidget(frame_Main, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(Widget_Login);

        QMetaObject::connectSlotsByName(Widget_Login);
    } // setupUi

    void retranslateUi(QWidget *Widget_Login)
    {
        Widget_Login->setWindowTitle(QApplication::translate("Widget_Login", "Form", Q_NULLPTR));
        label_Title->setText(QApplication::translate("Widget_Login", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        label_Password->setText(QString());
        label_Username->setText(QString());
        label_Code->setText(QString());
        lineEdit_Username->setPlaceholderText(QApplication::translate("Widget_Login", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        lineEdit_Code->setPlaceholderText(QApplication::translate("Widget_Login", "\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_CodeVal->setText(QString());
        lineEdit_Password->setPlaceholderText(QApplication::translate("Widget_Login", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_Login->setText(QApplication::translate("Widget_Login", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_Out->setText(QApplication::translate("Widget_Login", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_Login: public Ui_Widget_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_LOGIN_H

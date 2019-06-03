/********************************************************************************
** Form generated from reading UI file 'widget_tradingrules.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_TRADINGRULES_H
#define UI_WIDGET_TRADINGRULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_TradingRules
{
public:
    QGridLayout *gridLayout;
    QLabel *label_Title;
    QLineEdit *lineEdit_Title;
    QPushButton *pushButton_Save;
    QTextEdit *textEdit_Content;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget_TradingRules)
    {
        if (Widget_TradingRules->objectName().isEmpty())
            Widget_TradingRules->setObjectName(QStringLiteral("Widget_TradingRules"));
        Widget_TradingRules->resize(687, 497);
        gridLayout = new QGridLayout(Widget_TradingRules);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_Title = new QLabel(Widget_TradingRules);
        label_Title->setObjectName(QStringLiteral("label_Title"));

        gridLayout->addWidget(label_Title, 0, 0, 1, 1);

        lineEdit_Title = new QLineEdit(Widget_TradingRules);
        lineEdit_Title->setObjectName(QStringLiteral("lineEdit_Title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Title->sizePolicy().hasHeightForWidth());
        lineEdit_Title->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit_Title, 0, 1, 1, 1);

        pushButton_Save = new QPushButton(Widget_TradingRules);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));

        gridLayout->addWidget(pushButton_Save, 2, 3, 1, 1);

        textEdit_Content = new QTextEdit(Widget_TradingRules);
        textEdit_Content->setObjectName(QStringLiteral("textEdit_Content"));

        gridLayout->addWidget(textEdit_Content, 1, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        retranslateUi(Widget_TradingRules);

        QMetaObject::connectSlotsByName(Widget_TradingRules);
    } // setupUi

    void retranslateUi(QWidget *Widget_TradingRules)
    {
        Widget_TradingRules->setWindowTitle(QApplication::translate("Widget_TradingRules", "Widget_Trading_Rules", Q_NULLPTR));
        label_Title->setText(QApplication::translate("Widget_TradingRules", "\346\240\207\351\242\230\357\274\232", Q_NULLPTR));
        lineEdit_Title->setText(QApplication::translate("Widget_TradingRules", "\347\263\273\347\273\237\344\272\244\346\230\223\350\247\204\345\210\231\350\257\264\346\230\216\357\274\232", Q_NULLPTR));
        pushButton_Save->setText(QApplication::translate("Widget_TradingRules", "\344\277\235\345\255\230\350\256\276\347\275\256", Q_NULLPTR));
        textEdit_Content->setHtml(QApplication::translate("Widget_TradingRules", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\344\270\200\343\200\201\350\236\215\350\265\204\350\236\215\345\210\270\344\272\244\346\230\223\347\263\273\347\273\237\350\257\264\346\230\216\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201 \346\234\254\347\263"
                        "\273\347\273\237\345\261\236\344\272\216\350\236\215\350\265\204\350\236\215\345\210\270\347\213\254\347\253\213\344\272\244\346\230\223\350\275\257\344\273\266\357\274\214\344\273\245\344\270\255\345\233\275A\350\202\241\350\236\215\350\265\204\350\236\215\345\210\270\344\272\244\346\230\223\345\216\237\345\210\231\347\224\237\346\210\220\345\244\232\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201 \345\256\242\346\210\267\351\234\200\344\272\206\350\247\243\344\270\224\346\230\216\347\231\275\350\257\245\345\271\263\345\217\260\346\217\220\344\276\233\347\232\204\346\240\207\347\232\204\350\202\241\345\235\207\346\230\257\344\273\245\350\236\215\350\265\204\350\236\215\345\210\270\344\277\235\350\257\201\351\207\221\345\275\242\345\274\217\344\272\244\346\230\223\347\232\204\357\274\214\344\277\235\350\257\201\351\207\221\347\232\204\346\211\233\346\235\206\346\225\210\345\272\224\345\217\257\344\273\245"
                        "\345\260\217\345\215\232\345\244\247\357\274\214\344\275\206\344\271\237\346\234\211\345\217\257\350\203\275\345\257\274\350\207\264\346\223\215\344\275\234\351\243\216\351\231\251\347\232\204\346\224\276\345\244\247\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201 \347\224\261\344\272\216\351\200\232\350\256\257\350\256\276\345\244\207\346\210\226\344\272\222\350\201\224\347\275\221\347\273\234\344\274\240\351\200\201\344\270\255\346\226\255\346\210\226\346\225\205\351\232\234\357\274\214\344\273\245\345\217\212\351\273\221\345\256\242\346\224\273\345\207\273\350\200\214\345\257\274\350\207\264\347\232\204\345\256\242\346\210\267\344\270\213\345\215\225\346\214\207\344\273\244\344\271\213\344\274\240\351\200\201\343\200\201\346\216\245\346\224\266\346\210\226\346\211\247\350\241\214\345\207\272\347\216\260\345\273\266\350\257\257\343\200\201\351\224\231\350\257\257\346\210\226\344\270\215\345\256\214\346\225"
                        "\264\347\255\211\351\227\256\351\242\230\357\274\214\350\236\215\346\230\223\351\200\232\350\236\215\350\265\204\350\236\215\345\210\270\345\271\266\344\270\215\346\211\277\346\213\205\347\233\270\345\272\224\347\232\204\350\264\243\344\273\273\344\270\224\345\205\254\345\217\270\346\234\211\346\235\203\345\217\226\346\266\210\346\210\226\344\277\256\346\255\243\346\255\244\347\261\273\344\272\244\346\230\223\345\215\225\357\274\233</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\344\272\214\343\200\201\347\210\266\346\230\223\347\263\273\347\273\237\350\247\204\345\210\231\344\273\213\347\273\215\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201 \344\272\244\346\230\223\350\236\215\350\265\204\346\257\224\344\276\213\344\270\2721:10,\345\215\263\346\234\200\345\244\247\350\265\204\351\207\221\344\275\277\347\224\250\351\207\217\344\270\272\345\256\242\346\210\267\344\277\241\347\224\250\344\277\235\350\257\201\351\207\221\357\274\210\345\215\263\346\234\254\351\207\221\357\274\211\347\232\20410\345\200\215\345\244\232\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201 \346\226\260\344\270\212\345\270\202\350\202\241\347\245\250\346\234\252\346\273\2418\344\270\252\346\234\210\343\200\201\345\210\233\344\270\232\346\235\277\343\200\201ST/*ST/S*ST/SST\343\200\201\347\211\271\345\210\253\345\257\271\345\276\205\350\202\241\347\263\273\347\273"
                        "\237\346\213\222\346\224\266\346\226\260\345\215\225\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201 \344\272\244\346\230\223\347\206\224\346\226\255\351\230\210\345\200\274\344\270\272\344\272\244\346\230\223\345\223\201\347\247\215\346\257\217\346\227\245\346\266\250\357\274\210\350\267\214\357\274\211\345\271\205\350\276\276\345\210\260\347\231\276\345\210\206\344\271\213\345\205\255\357\274\214\346\210\226\345\211\215\344\270\200\346\227\245\346\266\250\357\274\210\350\267\214\357\274\211\345\271\205\350\276\276\345\210\260\347\231\276\345\210\206\344\271\213\345\215\201\346\227\266\347\263\273\347\273\237\345\260\206\345\201\234\346\255\242\345\275\223\346\227\245\350\257\245\344\272\244\346\230\223\345\223\201\347\247\215\345\244\232\357\274\210\347\251\272\357\274\211\346\226\260\345\215\225\347\232\204\350\264\255\344\271\260\345\244\232\347\263\273\347\273\237\345\271\266\346\234\211\346\235\203\344"
                        "\277\256\346\255\243\347\206\224\346\226\255\346\234\237\351\227\264\344\273\273\344\275\225\345\274\202\345\270\270\344\270\213\345\215\225\345\244\232\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4\343\200\201 \345\201\234\347\211\214\350\202\241\347\245\250\350\202\241\347\245\250\344\274\232\345\234\250\344\270\200\344\270\252\344\272\244\346\230\223\346\227\245\345\206\205\346\214\211\347\205\247\345\211\215\344\270\200\346\227\245\347\232\204\346\224\266\347\233\230\344\273\267\346\240\274\350\207\252\345\212\250\345\271\263\344\273\223\345\244\232\357\274\233</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;"
                        "\">\344\270\211\343\200\201 \347\225\231\344\273\223\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201 \347\225\231\344\273\223\346\234\200\345\244\247\346\227\266\351\231\220\344\270\2725\344\270\252\344\272\244\346\230\223\346\227\245\345\244\232\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201 \347\225\231\344\273\223\350\264\271\346\214\211\345\256\236\351\231\205\347\225\231\344\273\223\346\227\266\351\227\264\347\273\223\347\256\227\345\244\232\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201 \347\225\231\344\273\223\345\244\251"
                        "\346\225\260\345\210\260\346\234\237\357\274\214\346\234\252\344\272\216\347\272\246\345\256\232\346\227\266\351\227\264\345\206\205\344\272\244\346\224\266\357\274\214\344\273\245\345\210\260\346\234\237\345\275\223\346\227\245\346\224\266\347\233\230\344\273\267\350\207\252\345\212\250\345\271\263\344\273\223\345\244\232\357\274\233</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\345\233\233\343\200\201 \345\271\263\344\273\223\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\">1\343\200\201 \346\226\260\345\273\272\344\273\223\347\232\204\350\202\241\347\245\25015\345\210\206\351\222\237\345\220\216\346\211\215\345\217\257\345\271\263\344\273\223\345\244\232\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201 \344\273\245\350\202\241\347\245\250\344\271\260\345\205\245\346\210\220\346\234\254\344\273\267\350\256\241\347\256\227\357\274\214\346\266\250\350\267\214\345\271\205\350\276\276\345\210\26010%,\344\270\272\344\272\206\344\277\235\350\257\201\345\256\242\346\210\267\345\210\251\347\233\212\357\274\214\347\263\273\347\273\237\350\207\252\345\212\250\346\255\242\347\233\210\346\255\242\346\215\237\345\274\272\350\241\214\345\271\263\344\273\223\357\274\214\350\267\263\347\251\272\350\241\214\346\203\205\344\270\213\344\270\215\346\216\222\351\231\244\344\274\232\346\234\211\346\255\243\350\264\237\345\267\256\357\274\233</p>\n"
"<p style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3\343\200\201 \345\246\202\351\201\207\347\263\273\347\273\237\346\226\255\347\272\277\345\257\274\350\207\264\346\227\240\346\263\225\345\271\263\344\273\223\357\274\214\345\256\242\346\210\267\345\217\257\345\247\224\346\211\230\344\272\272\345\267\245\345\215\225\346\226\271\345\274\217\346\217\220\344\276\233\345\271\263\344\273\223\345\244\232\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4\343\200\201 \351\231\244\346\235\203\351\231\244\346\201\257\351\200\201\350\275\254\344\270\252\350\202\241\347\233\264\346\216\245\346\214\211\347\205\247\345\211\215\344\270\200\346\233\260\346\224\266\347\233\230\344\273\267\346\240\274\345\271\263\344\273\223\357\274\214\345\275\223\346\233\260\350\264\255\344\271\260\347\263\273\347\273\237\346\243\200\346\265\213\345\210\260\344\274\232\347\233\264\346\216\245\345\271"
                        "\263\344\273\223\345\244\204\347\220\206\357\274\233</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\344\272\224\343\200\201 \344\272\244\346\230\223\350\264\271\347\224\250\350\257\264\346\230\216\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\211\213\347\273\255\350\264\271:\346\257\217\347\254\224\344\272\244\346\230\223\345\235\207\344\273\245\344\272\244\346\230\223\351\207\221\351\242\235\344\270\272\345\207\206\344\270\213\345\215\225\345"
                        "\215\263\346\227\266\346\211\243\351\231\244\344\272\244\346\230\223\350\264\271\347\224\250\357\274\210\345\205\266\344\270\255\345\214\205\346\213\254\357\274\232\344\271\260\345\205\245\345\215\203\345\210\206\344\271\2131.8,\345\215\226\345\207\272\345\215\203\345\210\206\344\271\2131.8,\345\215\260\350\212\261\347\250\216\345\215\203\345\210\206\344\271\2131,\350\236\215\350\265\204\345\210\251\346\201\257\345\215\203\345\210\206\344\271\2132.4)\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\225\231\344\273\223\350\202\241\347\245\250\345\235\207\344\273\245\344\272\244\346\230\223\346\200\273\351\207\221\351\242\235\346\211\243\351\231\244\344\270\207\345\210\206\344\271\213\345\205\255\347\225\231\344\273\223\350\277\207\345\244\234\350\264\271\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\345\205\255\343\200\201 \344\272\244\346\230\223\346\227\266\351\227\264\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\273\272\344\273\223\345\222\214\345\271\263\344\273\223\346\227\266\351\227\264\357\274\232\357\274\210\344\270\212\345\215\210\357\274\2119:35-11:30 (\344\270\213\345\215\210\357\274\21113:05-14:58</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\344\270\203\343\200\201 \345\207\272\345\205\245\351\207\221\350\257\264\346\230\216\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \342\221\264\345\256\242\346\210\267\345\205\245\351\207\221\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\256\242\346\210\267\351\223\266\350\241\214\350\264\246\346\210\267#\351\200\232\347\275\221\351\223\266\350\275\254\350\264\246\345\212\237\350\203\275\347\232\204\357\274\214\345\217\257\344\273\216\345\256\242\346\210\267\344\272\244\346\230\223\347\253\257\347\225\214\351\235\242\347\232\204"
                        "1\350\211\256\350\257\201\350\275\254\350\264\246&quot;\346\240\217\347\202\271\345\207\273\350\277\233\345\205\245\357\274\214\351\200\232\350\277\207\347\275\221\344\270\212\345\210\222\350\275\254\347\232\204\345\275\242\345\274\217\345\256\214\346\210\220\344\270\211\346\226\271\345\255\230\347\256\241\346\224\257\344\273\230\347\232\204\345\205\245\351\207\221\346\223\215\344\275\234\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> \342\221\265\345\256\242\346\210\267\345\207\272\351\207\221\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\207\272\351\207\221\345\235\207\345\217\257\351\200\232\350\277\207\345\256\242\346\210\267\344\272\244\346\230\223\347\253\257\347\225\214\351\235\242\347\232\2041\350\211\256\350\257\201\350\275\254\350\264\246\357\274\214\351\241\271\357\274\214\346\217\220\344\272\244\345\207\272"
                        "\351\207\221\346\214\207\344\273\244\357\274\214\346\257\217\345\221\250\344\270\200\350\207\263\345\221\250\344\272\224\346\255\243\345\270\270\345\267\245\344\275\234\346\227\266\351\227\264\345\206\205\357\274\210\344\270\212\345\215\2109:35-11:30-\344\270\213\345\215\21013:05-14:58)\345\256\242\346\210\267\345\235\207\345\217\257\344\273\245\350\207\252\344\270\273\346\217\220\346\254\276\342\227\212\342\200\224\350\210\25430\345\210\206\351\222\237\345\206\205\345\256\242\346\210\267\345\215\263\345\217\257\346\224\266\345\210\260\346\211\200\345\207\272\351\207\221\346\254\276\351\241\271\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\345\205\253\343\200\201 \351\243\216\351\231\251\346"
                        "\217\220\347\244\272\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1\343\200\201 \350\202\241\345\270\202\346\234\211\351\243\216\351\231\251\357\274\214\350\257\267\346\240\271\346\215\256\350\207\252\345\267\261\347\232\204\346\212\225\350\265\204\345\256\236\345\212\233\345\217\202\344\270\216\357\274\201\346\234\254\345\205\254\345\217\270\344\270\215\346\211\277\346\213\205\345\233\240\344\270\272\350\257\245\350\202\241\345\270\202\344\272\244\346\230\223\350\200\214\344\272\247\347\224\237\347\232\204\345\205\266\344\273\226\350\201\224\345\270\246\350\264\243\344\273\273\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2\343\200\201 \346\234\254\344\272\244"
                        "\346\230\223\350\247\204\345\210\231\345\246\202\346\234\211\346\234\252\345\260\275\344\272\213\345\256\234\357\274\214\345\217\257\350\247\206\347\212\266\345\206\265\351\232\217\346\227\266\350\260\203\346\225\264\342\227\212\346\234\254\345\205\254\345\217\270\344\277\235\347\225\231\350\247\204\345\210\231\345\222\214\346\235\241\346\254\276\347\232\204\346\234\200\347\273\210\350\247\243\351\207\212\346\235\203\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_TradingRules: public Ui_Widget_TradingRules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_TRADINGRULES_H

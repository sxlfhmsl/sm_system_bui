/********************************************************************************
** Form generated from reading UI file 'httptest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTTPTEST_H
#define UI_HTTPTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HttpTestClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HttpTestClass)
    {
        if (HttpTestClass->objectName().isEmpty())
            HttpTestClass->setObjectName(QStringLiteral("HttpTestClass"));
        HttpTestClass->resize(600, 400);
        centralWidget = new QWidget(HttpTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 90, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 190, 54, 12));
        HttpTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HttpTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        HttpTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HttpTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HttpTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HttpTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HttpTestClass->setStatusBar(statusBar);

        retranslateUi(HttpTestClass);

        QMetaObject::connectSlotsByName(HttpTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *HttpTestClass)
    {
        HttpTestClass->setWindowTitle(QApplication::translate("HttpTestClass", "HttpTest", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HttpTestClass", "\350\256\277\351\227\256\350\257\267\346\261\202", Q_NULLPTR));
        label->setText(QApplication::translate("HttpTestClass", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HttpTestClass: public Ui_HttpTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTTPTEST_H

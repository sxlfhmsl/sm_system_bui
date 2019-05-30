/********************************************************************************
** Form generated from reading UI file 'sm_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SM_MAINWINDOW_H
#define UI_SM_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SM_MainWindow
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *SM_MainWindow)
    {
        if (SM_MainWindow->objectName().isEmpty())
            SM_MainWindow->setObjectName(QStringLiteral("SM_MainWindow"));
        SM_MainWindow->resize(881, 712);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SM_MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(SM_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SM_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SM_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 881, 23));
        SM_MainWindow->setMenuBar(menuBar);

        retranslateUi(SM_MainWindow);

        QMetaObject::connectSlotsByName(SM_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SM_MainWindow)
    {
        SM_MainWindow->setWindowTitle(QApplication::translate("SM_MainWindow", "SM_MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SM_MainWindow: public Ui_SM_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SM_MAINWINDOW_H

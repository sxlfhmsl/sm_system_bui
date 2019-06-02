/********************************************************************************
** Form generated from reading UI file 'widget_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_MAIN_H
#define UI_WIDGET_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_Main
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QFrame *frame_Status;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Status_NameTitle;
    QLabel *label_Status_NameVal;
    QSpacerItem *horizontalSpacer_Status;
    QPushButton *pushButton_Logout;
    QFrame *frame_Content;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QTreeWidget *treeWidget_Menu;
    QTabWidget *tabWidget_Content;
    QWidget *tab_3;
    QWidget *tab_4;
    QFrame *frame_Msg;

    void setupUi(QWidget *Widget_Main)
    {
        if (Widget_Main->objectName().isEmpty())
            Widget_Main->setObjectName(QStringLiteral("Widget_Main"));
        Widget_Main->resize(1200, 900);
        verticalLayout = new QVBoxLayout(Widget_Main);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter_2 = new QSplitter(Widget_Main);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(0);
        frame_Status = new QFrame(splitter_2);
        frame_Status->setObjectName(QStringLiteral("frame_Status"));
        frame_Status->setMinimumSize(QSize(0, 40));
        frame_Status->setMaximumSize(QSize(16777215, 40));
        frame_Status->setFrameShape(QFrame::StyledPanel);
        frame_Status->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_Status);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Status_NameTitle = new QLabel(frame_Status);
        label_Status_NameTitle->setObjectName(QStringLiteral("label_Status_NameTitle"));

        horizontalLayout_2->addWidget(label_Status_NameTitle);

        label_Status_NameVal = new QLabel(frame_Status);
        label_Status_NameVal->setObjectName(QStringLiteral("label_Status_NameVal"));

        horizontalLayout_2->addWidget(label_Status_NameVal);

        horizontalSpacer_Status = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_Status);

        pushButton_Logout = new QPushButton(frame_Status);
        pushButton_Logout->setObjectName(QStringLiteral("pushButton_Logout"));

        horizontalLayout_2->addWidget(pushButton_Logout);

        splitter_2->addWidget(frame_Status);
        frame_Content = new QFrame(splitter_2);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setFrameShape(QFrame::StyledPanel);
        frame_Content->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_Content);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(frame_Content);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(0);
        treeWidget_Menu = new QTreeWidget(splitter);
        treeWidget_Menu->setObjectName(QStringLiteral("treeWidget_Menu"));
        treeWidget_Menu->setMinimumSize(QSize(100, 0));
        treeWidget_Menu->setMaximumSize(QSize(200, 16777215));
        treeWidget_Menu->setColumnCount(0);
        splitter->addWidget(treeWidget_Menu);
        tabWidget_Content = new QTabWidget(splitter);
        tabWidget_Content->setObjectName(QStringLiteral("tabWidget_Content"));
        tabWidget_Content->setTabsClosable(true);
        tabWidget_Content->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_Content->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_Content->addTab(tab_4, QString());
        splitter->addWidget(tabWidget_Content);

        horizontalLayout->addWidget(splitter);

        splitter_2->addWidget(frame_Content);
        frame_Msg = new QFrame(splitter_2);
        frame_Msg->setObjectName(QStringLiteral("frame_Msg"));
        frame_Msg->setMinimumSize(QSize(0, 40));
        frame_Msg->setMaximumSize(QSize(16777215, 40));
        frame_Msg->setFrameShape(QFrame::StyledPanel);
        frame_Msg->setFrameShadow(QFrame::Raised);
        splitter_2->addWidget(frame_Msg);

        verticalLayout->addWidget(splitter_2);


        retranslateUi(Widget_Main);

        tabWidget_Content->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget_Main);
    } // setupUi

    void retranslateUi(QWidget *Widget_Main)
    {
        Widget_Main->setWindowTitle(QApplication::translate("Widget_Main", "Form", Q_NULLPTR));
        label_Status_NameTitle->setText(QApplication::translate("Widget_Main", "\347\224\250\346\210\267\357\274\232", Q_NULLPTR));
        label_Status_NameVal->setText(QApplication::translate("Widget_Main", "admin", Q_NULLPTR));
        pushButton_Logout->setText(QApplication::translate("Widget_Main", "\351\200\200\345\207\272", Q_NULLPTR));
        tabWidget_Content->setTabText(tabWidget_Content->indexOf(tab_3), QApplication::translate("Widget_Main", "Tab 1", Q_NULLPTR));
        tabWidget_Content->setTabText(tabWidget_Content->indexOf(tab_4), QApplication::translate("Widget_Main", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_Main: public Ui_Widget_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_MAIN_H

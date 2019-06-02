/********************************************************************************
** Form generated from reading UI file 'widget_pagination.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_PAGINATION_H
#define UI_WIDGET_PAGINATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_Pagination
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_Big;
    QPushButton *pushButton_BigM;
    QLabel *label_Counts;
    QComboBox *comboBox_CountPage;
    QPushButton *pushButton_SmallM;
    QPushButton *pushButton_Small;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_CurrentPage;
    QLabel *label_Pages;

    void setupUi(QWidget *Widget_Pagination)
    {
        if (Widget_Pagination->objectName().isEmpty())
            Widget_Pagination->setObjectName(QStringLiteral("Widget_Pagination"));
        Widget_Pagination->resize(816, 41);
        gridLayout = new QGridLayout(Widget_Pagination);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 9, 0, 9);
        pushButton_Big = new QPushButton(Widget_Pagination);
        pushButton_Big->setObjectName(QStringLiteral("pushButton_Big"));
        pushButton_Big->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButton_Big, 0, 7, 1, 1);

        pushButton_BigM = new QPushButton(Widget_Pagination);
        pushButton_BigM->setObjectName(QStringLiteral("pushButton_BigM"));
        pushButton_BigM->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButton_BigM, 0, 8, 1, 1);

        label_Counts = new QLabel(Widget_Pagination);
        label_Counts->setObjectName(QStringLiteral("label_Counts"));

        gridLayout->addWidget(label_Counts, 0, 1, 1, 1);

        comboBox_CountPage = new QComboBox(Widget_Pagination);
        comboBox_CountPage->setObjectName(QStringLiteral("comboBox_CountPage"));

        gridLayout->addWidget(comboBox_CountPage, 0, 2, 1, 1);

        pushButton_SmallM = new QPushButton(Widget_Pagination);
        pushButton_SmallM->setObjectName(QStringLiteral("pushButton_SmallM"));
        pushButton_SmallM->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButton_SmallM, 0, 3, 1, 1);

        pushButton_Small = new QPushButton(Widget_Pagination);
        pushButton_Small->setObjectName(QStringLiteral("pushButton_Small"));
        pushButton_Small->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(pushButton_Small, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        lineEdit_CurrentPage = new QLineEdit(Widget_Pagination);
        lineEdit_CurrentPage->setObjectName(QStringLiteral("lineEdit_CurrentPage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_CurrentPage->sizePolicy().hasHeightForWidth());
        lineEdit_CurrentPage->setSizePolicy(sizePolicy);
        lineEdit_CurrentPage->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lineEdit_CurrentPage, 0, 5, 1, 1);

        label_Pages = new QLabel(Widget_Pagination);
        label_Pages->setObjectName(QStringLiteral("label_Pages"));

        gridLayout->addWidget(label_Pages, 0, 6, 1, 1);


        retranslateUi(Widget_Pagination);

        QMetaObject::connectSlotsByName(Widget_Pagination);
    } // setupUi

    void retranslateUi(QWidget *Widget_Pagination)
    {
        Widget_Pagination->setWindowTitle(QApplication::translate("Widget_Pagination", "Widget_Pagination", Q_NULLPTR));
        pushButton_Big->setText(QApplication::translate("Widget_Pagination", ">", Q_NULLPTR));
        pushButton_BigM->setText(QApplication::translate("Widget_Pagination", ">>", Q_NULLPTR));
        label_Counts->setText(QApplication::translate("Widget_Pagination", "\345\205\261 0 \346\235\241", Q_NULLPTR));
        pushButton_SmallM->setText(QApplication::translate("Widget_Pagination", "<<", Q_NULLPTR));
        pushButton_Small->setText(QApplication::translate("Widget_Pagination", "<", Q_NULLPTR));
        label_Pages->setText(QApplication::translate("Widget_Pagination", "/1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_Pagination: public Ui_Widget_Pagination {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_PAGINATION_H

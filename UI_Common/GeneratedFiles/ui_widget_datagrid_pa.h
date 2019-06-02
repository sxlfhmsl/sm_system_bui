/********************************************************************************
** Form generated from reading UI file 'widget_datagrid_pa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DATAGRID_PA_H
#define UI_WIDGET_DATAGRID_PA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/widget_pagination.h"

QT_BEGIN_NAMESPACE

class Ui_Widget_DataGrid_Pa
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView_DataGrid;
    Widget_Pagination *widget_Pa;

    void setupUi(QWidget *Widget_DataGrid_Pa)
    {
        if (Widget_DataGrid_Pa->objectName().isEmpty())
            Widget_DataGrid_Pa->setObjectName(QStringLiteral("Widget_DataGrid_Pa"));
        Widget_DataGrid_Pa->resize(637, 538);
        verticalLayout = new QVBoxLayout(Widget_DataGrid_Pa);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView_DataGrid = new QTableView(Widget_DataGrid_Pa);
        tableView_DataGrid->setObjectName(QStringLiteral("tableView_DataGrid"));

        verticalLayout->addWidget(tableView_DataGrid);

        widget_Pa = new Widget_Pagination(Widget_DataGrid_Pa);
        widget_Pa->setObjectName(QStringLiteral("widget_Pa"));

        verticalLayout->addWidget(widget_Pa);


        retranslateUi(Widget_DataGrid_Pa);

        QMetaObject::connectSlotsByName(Widget_DataGrid_Pa);
    } // setupUi

    void retranslateUi(QWidget *Widget_DataGrid_Pa)
    {
        Widget_DataGrid_Pa->setWindowTitle(QApplication::translate("Widget_DataGrid_Pa", "Widget_DataGrid_Pa", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_DataGrid_Pa: public Ui_Widget_DataGrid_Pa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DATAGRID_PA_H

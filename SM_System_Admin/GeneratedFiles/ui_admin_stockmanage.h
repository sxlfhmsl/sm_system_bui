/********************************************************************************
** Form generated from reading UI file 'admin_stockmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_STOCKMANAGE_H
#define UI_ADMIN_STOCKMANAGE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "component/widget_datagrid_pa.h"

QT_BEGIN_NAMESPACE

class Ui_Admin_StockManage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_Bar;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_BarHead;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_AddStock;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_BarCenter;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_StockCode;
    QLineEdit *lineEdit_StockCode;
    QLabel *label_StockName;
    QLineEdit *lineEdit_StockName;
    QLabel *label_StockType;
    QComboBox *comboBox_StockType;
    QLabel *label_Suspension;
    QFrame *frame_Suspension;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_SusAll;
    QRadioButton *radioButton_SusEnable;
    QRadioButton *radioButton_SusDisable;
    QLabel *label_Close;
    QFrame *frame_Close;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_CloseAll;
    QRadioButton *radioButton_CloseEnable;
    QRadioButton *radioButton_CloseDisable;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_BarFoot;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_BuyMore;
    QFrame *frame_BuyMore;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_BuyMoreAll;
    QRadioButton *radioButton_BuyMoreEnable;
    QRadioButton *radioButton_BuyMoreDisable;
    QLabel *label_LongSale;
    QFrame *frame_LongSale;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_LongSaleAll;
    QRadioButton *radioButton_LongSaleEnable;
    QRadioButton *radioButton_LongSaleDisable;
    QLabel *label_Buy;
    QFrame *frame_Buy;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButton_BuyAll;
    QRadioButton *radioButton_BuyEnable;
    QRadioButton *radioButton_BuyDisable;
    QLabel *label_Sell;
    QFrame *frame_Sell;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_SellAll;
    QRadioButton *radioButton_SellEnable;
    QRadioButton *radioButton_SellDisable;
    QLabel *label_Forbidden;
    QFrame *frame_Forbidden;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_ForbiddenAll;
    QRadioButton *radioButton_ForbiddenEnable;
    QRadioButton *radioButton_ForbiddenDisable;
    QPushButton *pushButton_Query;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_Content;
    QGridLayout *gridLayout;
    Widget_DataGrid_Pa *widget_DataGrid;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Admin_StockManage)
    {
        if (Admin_StockManage->objectName().isEmpty())
            Admin_StockManage->setObjectName(QStringLiteral("Admin_StockManage"));
        Admin_StockManage->resize(1090, 538);
        verticalLayout = new QVBoxLayout(Admin_StockManage);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_Bar = new QFrame(Admin_StockManage);
        frame_Bar->setObjectName(QStringLiteral("frame_Bar"));
        frame_Bar->setFrameShape(QFrame::StyledPanel);
        frame_Bar->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_Bar);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_BarHead = new QFrame(frame_Bar);
        frame_BarHead->setObjectName(QStringLiteral("frame_BarHead"));
        frame_BarHead->setFrameShape(QFrame::StyledPanel);
        frame_BarHead->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_BarHead);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_AddStock = new QPushButton(frame_BarHead);
        pushButton_AddStock->setObjectName(QStringLiteral("pushButton_AddStock"));

        horizontalLayout->addWidget(pushButton_AddStock);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(frame_BarHead);

        frame_BarCenter = new QFrame(frame_Bar);
        frame_BarCenter->setObjectName(QStringLiteral("frame_BarCenter"));
        frame_BarCenter->setFrameShape(QFrame::StyledPanel);
        frame_BarCenter->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_BarCenter);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_StockCode = new QLabel(frame_BarCenter);
        label_StockCode->setObjectName(QStringLiteral("label_StockCode"));

        horizontalLayout_2->addWidget(label_StockCode);

        lineEdit_StockCode = new QLineEdit(frame_BarCenter);
        lineEdit_StockCode->setObjectName(QStringLiteral("lineEdit_StockCode"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_StockCode->sizePolicy().hasHeightForWidth());
        lineEdit_StockCode->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEdit_StockCode);

        label_StockName = new QLabel(frame_BarCenter);
        label_StockName->setObjectName(QStringLiteral("label_StockName"));

        horizontalLayout_2->addWidget(label_StockName);

        lineEdit_StockName = new QLineEdit(frame_BarCenter);
        lineEdit_StockName->setObjectName(QStringLiteral("lineEdit_StockName"));
        sizePolicy.setHeightForWidth(lineEdit_StockName->sizePolicy().hasHeightForWidth());
        lineEdit_StockName->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEdit_StockName);

        label_StockType = new QLabel(frame_BarCenter);
        label_StockType->setObjectName(QStringLiteral("label_StockType"));

        horizontalLayout_2->addWidget(label_StockType);

        comboBox_StockType = new QComboBox(frame_BarCenter);
        comboBox_StockType->setObjectName(QStringLiteral("comboBox_StockType"));

        horizontalLayout_2->addWidget(comboBox_StockType);

        label_Suspension = new QLabel(frame_BarCenter);
        label_Suspension->setObjectName(QStringLiteral("label_Suspension"));

        horizontalLayout_2->addWidget(label_Suspension);

        frame_Suspension = new QFrame(frame_BarCenter);
        frame_Suspension->setObjectName(QStringLiteral("frame_Suspension"));
        frame_Suspension->setFrameShape(QFrame::StyledPanel);
        frame_Suspension->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_Suspension);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_SusAll = new QRadioButton(frame_Suspension);
        radioButton_SusAll->setObjectName(QStringLiteral("radioButton_SusAll"));
        radioButton_SusAll->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_SusAll);

        radioButton_SusEnable = new QRadioButton(frame_Suspension);
        radioButton_SusEnable->setObjectName(QStringLiteral("radioButton_SusEnable"));

        horizontalLayout_3->addWidget(radioButton_SusEnable);

        radioButton_SusDisable = new QRadioButton(frame_Suspension);
        radioButton_SusDisable->setObjectName(QStringLiteral("radioButton_SusDisable"));

        horizontalLayout_3->addWidget(radioButton_SusDisable);


        horizontalLayout_2->addWidget(frame_Suspension);

        label_Close = new QLabel(frame_BarCenter);
        label_Close->setObjectName(QStringLiteral("label_Close"));

        horizontalLayout_2->addWidget(label_Close);

        frame_Close = new QFrame(frame_BarCenter);
        frame_Close->setObjectName(QStringLiteral("frame_Close"));
        frame_Close->setFrameShape(QFrame::StyledPanel);
        frame_Close->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_Close);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton_CloseAll = new QRadioButton(frame_Close);
        radioButton_CloseAll->setObjectName(QStringLiteral("radioButton_CloseAll"));
        radioButton_CloseAll->setChecked(true);

        horizontalLayout_4->addWidget(radioButton_CloseAll);

        radioButton_CloseEnable = new QRadioButton(frame_Close);
        radioButton_CloseEnable->setObjectName(QStringLiteral("radioButton_CloseEnable"));

        horizontalLayout_4->addWidget(radioButton_CloseEnable);

        radioButton_CloseDisable = new QRadioButton(frame_Close);
        radioButton_CloseDisable->setObjectName(QStringLiteral("radioButton_CloseDisable"));

        horizontalLayout_4->addWidget(radioButton_CloseDisable);


        horizontalLayout_2->addWidget(frame_Close);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(frame_BarCenter);

        frame_BarFoot = new QFrame(frame_Bar);
        frame_BarFoot->setObjectName(QStringLiteral("frame_BarFoot"));
        frame_BarFoot->setFrameShape(QFrame::StyledPanel);
        frame_BarFoot->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_BarFoot);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_BuyMore = new QLabel(frame_BarFoot);
        label_BuyMore->setObjectName(QStringLiteral("label_BuyMore"));

        horizontalLayout_5->addWidget(label_BuyMore);

        frame_BuyMore = new QFrame(frame_BarFoot);
        frame_BuyMore->setObjectName(QStringLiteral("frame_BuyMore"));
        frame_BuyMore->setFrameShape(QFrame::StyledPanel);
        frame_BuyMore->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_BuyMore);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButton_BuyMoreAll = new QRadioButton(frame_BuyMore);
        radioButton_BuyMoreAll->setObjectName(QStringLiteral("radioButton_BuyMoreAll"));
        radioButton_BuyMoreAll->setChecked(true);

        horizontalLayout_6->addWidget(radioButton_BuyMoreAll);

        radioButton_BuyMoreEnable = new QRadioButton(frame_BuyMore);
        radioButton_BuyMoreEnable->setObjectName(QStringLiteral("radioButton_BuyMoreEnable"));

        horizontalLayout_6->addWidget(radioButton_BuyMoreEnable);

        radioButton_BuyMoreDisable = new QRadioButton(frame_BuyMore);
        radioButton_BuyMoreDisable->setObjectName(QStringLiteral("radioButton_BuyMoreDisable"));

        horizontalLayout_6->addWidget(radioButton_BuyMoreDisable);


        horizontalLayout_5->addWidget(frame_BuyMore);

        label_LongSale = new QLabel(frame_BarFoot);
        label_LongSale->setObjectName(QStringLiteral("label_LongSale"));

        horizontalLayout_5->addWidget(label_LongSale);

        frame_LongSale = new QFrame(frame_BarFoot);
        frame_LongSale->setObjectName(QStringLiteral("frame_LongSale"));
        frame_LongSale->setFrameShape(QFrame::StyledPanel);
        frame_LongSale->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_LongSale);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        radioButton_LongSaleAll = new QRadioButton(frame_LongSale);
        radioButton_LongSaleAll->setObjectName(QStringLiteral("radioButton_LongSaleAll"));
        radioButton_LongSaleAll->setChecked(true);

        horizontalLayout_7->addWidget(radioButton_LongSaleAll);

        radioButton_LongSaleEnable = new QRadioButton(frame_LongSale);
        radioButton_LongSaleEnable->setObjectName(QStringLiteral("radioButton_LongSaleEnable"));

        horizontalLayout_7->addWidget(radioButton_LongSaleEnable);

        radioButton_LongSaleDisable = new QRadioButton(frame_LongSale);
        radioButton_LongSaleDisable->setObjectName(QStringLiteral("radioButton_LongSaleDisable"));

        horizontalLayout_7->addWidget(radioButton_LongSaleDisable);


        horizontalLayout_5->addWidget(frame_LongSale);

        label_Buy = new QLabel(frame_BarFoot);
        label_Buy->setObjectName(QStringLiteral("label_Buy"));

        horizontalLayout_5->addWidget(label_Buy);

        frame_Buy = new QFrame(frame_BarFoot);
        frame_Buy->setObjectName(QStringLiteral("frame_Buy"));
        frame_Buy->setFrameShape(QFrame::StyledPanel);
        frame_Buy->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_Buy);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        radioButton_BuyAll = new QRadioButton(frame_Buy);
        radioButton_BuyAll->setObjectName(QStringLiteral("radioButton_BuyAll"));
        radioButton_BuyAll->setChecked(true);

        horizontalLayout_8->addWidget(radioButton_BuyAll);

        radioButton_BuyEnable = new QRadioButton(frame_Buy);
        radioButton_BuyEnable->setObjectName(QStringLiteral("radioButton_BuyEnable"));

        horizontalLayout_8->addWidget(radioButton_BuyEnable);

        radioButton_BuyDisable = new QRadioButton(frame_Buy);
        radioButton_BuyDisable->setObjectName(QStringLiteral("radioButton_BuyDisable"));

        horizontalLayout_8->addWidget(radioButton_BuyDisable);


        horizontalLayout_5->addWidget(frame_Buy);

        label_Sell = new QLabel(frame_BarFoot);
        label_Sell->setObjectName(QStringLiteral("label_Sell"));

        horizontalLayout_5->addWidget(label_Sell);

        frame_Sell = new QFrame(frame_BarFoot);
        frame_Sell->setObjectName(QStringLiteral("frame_Sell"));
        frame_Sell->setFrameShape(QFrame::StyledPanel);
        frame_Sell->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_Sell);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        radioButton_SellAll = new QRadioButton(frame_Sell);
        radioButton_SellAll->setObjectName(QStringLiteral("radioButton_SellAll"));
        radioButton_SellAll->setChecked(true);

        horizontalLayout_9->addWidget(radioButton_SellAll);

        radioButton_SellEnable = new QRadioButton(frame_Sell);
        radioButton_SellEnable->setObjectName(QStringLiteral("radioButton_SellEnable"));

        horizontalLayout_9->addWidget(radioButton_SellEnable);

        radioButton_SellDisable = new QRadioButton(frame_Sell);
        radioButton_SellDisable->setObjectName(QStringLiteral("radioButton_SellDisable"));

        horizontalLayout_9->addWidget(radioButton_SellDisable);


        horizontalLayout_5->addWidget(frame_Sell);

        label_Forbidden = new QLabel(frame_BarFoot);
        label_Forbidden->setObjectName(QStringLiteral("label_Forbidden"));

        horizontalLayout_5->addWidget(label_Forbidden);

        frame_Forbidden = new QFrame(frame_BarFoot);
        frame_Forbidden->setObjectName(QStringLiteral("frame_Forbidden"));
        frame_Forbidden->setFrameShape(QFrame::StyledPanel);
        frame_Forbidden->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_Forbidden);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        radioButton_ForbiddenAll = new QRadioButton(frame_Forbidden);
        radioButton_ForbiddenAll->setObjectName(QStringLiteral("radioButton_ForbiddenAll"));
        radioButton_ForbiddenAll->setChecked(true);

        horizontalLayout_10->addWidget(radioButton_ForbiddenAll);

        radioButton_ForbiddenEnable = new QRadioButton(frame_Forbidden);
        radioButton_ForbiddenEnable->setObjectName(QStringLiteral("radioButton_ForbiddenEnable"));

        horizontalLayout_10->addWidget(radioButton_ForbiddenEnable);

        radioButton_ForbiddenDisable = new QRadioButton(frame_Forbidden);
        radioButton_ForbiddenDisable->setObjectName(QStringLiteral("radioButton_ForbiddenDisable"));

        horizontalLayout_10->addWidget(radioButton_ForbiddenDisable);


        horizontalLayout_5->addWidget(frame_Forbidden);

        pushButton_Query = new QPushButton(frame_BarFoot);
        pushButton_Query->setObjectName(QStringLiteral("pushButton_Query"));

        horizontalLayout_5->addWidget(pushButton_Query);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(frame_BarFoot);


        verticalLayout->addWidget(frame_Bar);

        frame_Content = new QFrame(Admin_StockManage);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setFrameShape(QFrame::StyledPanel);
        frame_Content->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_Content);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_DataGrid = new Widget_DataGrid_Pa(frame_Content);
        widget_DataGrid->setObjectName(QStringLiteral("widget_DataGrid"));

        gridLayout->addWidget(widget_DataGrid, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_Content);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Admin_StockManage);

        QMetaObject::connectSlotsByName(Admin_StockManage);
    } // setupUi

    void retranslateUi(QWidget *Admin_StockManage)
    {
        Admin_StockManage->setWindowTitle(QApplication::translate("Admin_StockManage", "Widget_Stock_Manage", Q_NULLPTR));
        pushButton_AddStock->setText(QApplication::translate("Admin_StockManage", "\346\226\260\345\242\236\350\202\241\347\245\250", Q_NULLPTR));
        label_StockCode->setText(QApplication::translate("Admin_StockManage", "\344\273\243\347\240\201\357\274\232", Q_NULLPTR));
        label_StockName->setText(QApplication::translate("Admin_StockManage", "\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_StockType->setText(QApplication::translate("Admin_StockManage", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        comboBox_StockType->clear();
        comboBox_StockType->insertItems(0, QStringList()
         << QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_Suspension->setText(QApplication::translate("Admin_StockManage", "\345\201\234\347\211\214\357\274\232", Q_NULLPTR));
        radioButton_SusAll->setText(QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR));
        radioButton_SusEnable->setText(QApplication::translate("Admin_StockManage", "\346\230\257", Q_NULLPTR));
        radioButton_SusDisable->setText(QApplication::translate("Admin_StockManage", "\345\220\246", Q_NULLPTR));
        label_Close->setText(QApplication::translate("Admin_StockManage", "\345\205\263\347\233\230\357\274\232", Q_NULLPTR));
        radioButton_CloseAll->setText(QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR));
        radioButton_CloseEnable->setText(QApplication::translate("Admin_StockManage", "\346\230\257", Q_NULLPTR));
        radioButton_CloseDisable->setText(QApplication::translate("Admin_StockManage", "\345\220\246", Q_NULLPTR));
        label_BuyMore->setText(QApplication::translate("Admin_StockManage", "\345\217\257\344\271\260\345\244\232\357\274\232", Q_NULLPTR));
        radioButton_BuyMoreAll->setText(QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR));
        radioButton_BuyMoreEnable->setText(QApplication::translate("Admin_StockManage", "\346\230\257", Q_NULLPTR));
        radioButton_BuyMoreDisable->setText(QApplication::translate("Admin_StockManage", "\345\220\246", Q_NULLPTR));
        label_LongSale->setText(QApplication::translate("Admin_StockManage", "\345\217\257\344\271\260\347\251\272\357\274\232", Q_NULLPTR));
        radioButton_LongSaleAll->setText(QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR));
        radioButton_LongSaleEnable->setText(QApplication::translate("Admin_StockManage", "\346\230\257", Q_NULLPTR));
        radioButton_LongSaleDisable->setText(QApplication::translate("Admin_StockManage", "\345\220\246", Q_NULLPTR));
        label_Buy->setText(QApplication::translate("Admin_StockManage", "\345\217\257\344\271\260\357\274\232", Q_NULLPTR));
        radioButton_BuyAll->setText(QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR));
        radioButton_BuyEnable->setText(QApplication::translate("Admin_StockManage", "\346\230\257", Q_NULLPTR));
        radioButton_BuyDisable->setText(QApplication::translate("Admin_StockManage", "\345\220\246", Q_NULLPTR));
        label_Sell->setText(QApplication::translate("Admin_StockManage", "\345\217\257\345\215\226\357\274\232", Q_NULLPTR));
        radioButton_SellAll->setText(QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR));
        radioButton_SellEnable->setText(QApplication::translate("Admin_StockManage", "\346\230\257", Q_NULLPTR));
        radioButton_SellDisable->setText(QApplication::translate("Admin_StockManage", "\345\220\246", Q_NULLPTR));
        label_Forbidden->setText(QApplication::translate("Admin_StockManage", "\347\246\201\347\224\250\357\274\232", Q_NULLPTR));
        radioButton_ForbiddenAll->setText(QApplication::translate("Admin_StockManage", "\345\205\250\351\203\250", Q_NULLPTR));
        radioButton_ForbiddenEnable->setText(QApplication::translate("Admin_StockManage", "\346\230\257", Q_NULLPTR));
        radioButton_ForbiddenDisable->setText(QApplication::translate("Admin_StockManage", "\345\220\246", Q_NULLPTR));
        pushButton_Query->setText(QApplication::translate("Admin_StockManage", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Admin_StockManage: public Ui_Admin_StockManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_STOCKMANAGE_H

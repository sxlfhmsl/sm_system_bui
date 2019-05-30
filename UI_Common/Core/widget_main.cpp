#include "widget_main.h"
#include "ui_widget_main.h"

#include <QMessageBox>

Widget_Main::Widget_Main(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::Widget_Main();
	ui->setupUi(this);
	init_Widget();
}

Widget_Main::~Widget_Main()
{
	delete ui;
}

void Widget_Main::on_pushButton_Logout_clicked()
{
	// 退出成功
	emit signal_LogoutSuccess();
}

void Widget_Main::on_treeWidget_Menu_itemClicked(QTreeWidgetItem* item, int column)
{
	if (column == 0)
	{
		this->switch_TabWidget(item->text(column));
	}
}

void Widget_Main::init_Widget()
{
	// 初始化tabwidget，删除多余的
	int count = ui->tabWidget_Content->count();
	for (int i = 0; i < count; i++)
	{
		QWidget *del_widget = ui->tabWidget_Content->widget(0);
		ui->tabWidget_Content->removeTab(0);
		delete del_widget;
	}
	this->switch_TabWidget("数据汇总");
}

void Widget_Main::switch_TabWidget(QString tab_name)
{
	int count = ui->tabWidget_Content->count();
	for (int i = 0; i < count; i++)
	{
		if (tab_name == ui->tabWidget_Content->tabText(i))
		{
			ui->tabWidget_Content->setCurrentIndex(i);
			return;
		}
	}
	ui->tabWidget_Content->setCurrentIndex(ui->tabWidget_Content->count() - 1);
}

void Widget_Main::on_tabWidget_Content_tabCloseRequested(int index)
{
	if (1 >= ui->tabWidget_Content->count())
	{
		QMessageBox::critical(this, "禁止", "至少需要一个页面");
		return;
	}
	// 获取欲删除窗口
	QWidget *del_widget = ui->tabWidget_Content->widget(index);
	ui->tabWidget_Content->removeTab(index);
	delete del_widget;
}

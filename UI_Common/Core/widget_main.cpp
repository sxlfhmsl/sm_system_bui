#include "widget_main.h"
#include "ui_widget_main.h"

#include <QMessageBox>

Widget_Main::Widget_Main(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_Main();
	ui->setupUi(this);
	this->init_UI();
}

Widget_Main::~Widget_Main()
{
	qDeleteAll(this->menu);
	this->menu.clear();
	delete ui;
}

void Widget_Main::on_pushButton_Logout_clicked()
{
	// 退出成功
	emit signal_LogoutSuccess();
}

void Widget_Main::on_treeWidget_Menu_itemClicked(QTreeWidgetItem* item, int column)
{
	foreach(M_Menu *menu_c, this->menu)
	{
		if (menu_c->judge_clickable(item->text(column)))
		{
			if (column == 0)
			{
				if (this->switch_TabWidget(item->text(column)))
				{
					// 返回true为新建
					ui->tabWidget_Content->setCurrentIndex(ui->tabWidget_Content->count() - 1);
				}
			}
		}
	}
}

void Widget_Main::init_UI()
{
	// 初始化tabwidget，删除多余的
	int count = ui->tabWidget_Content->count();
	for (int i = 0; i < count; i++)
	{
		QWidget *del_widget = ui->tabWidget_Content->widget(0);
		ui->tabWidget_Content->removeTab(0);
		delete del_widget;
	}
}

bool Widget_Main::switch_TabWidget(QString tab_name)
{
	int count = ui->tabWidget_Content->count();
	for (int i = 0; i < count; i++)
	{
		if (tab_name == ui->tabWidget_Content->tabText(i))
		{
			ui->tabWidget_Content->setCurrentIndex(i);
			return false;
		}
	}
	return true;
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

void Widget_Main::init_Menu(const QList<M_Menu*> &menu)
{
	qDeleteAll(this->menu);
	this->menu.clear();
	this->menu = menu;
	int count = 0;

	ui->treeWidget_Menu->clear();
	ui->treeWidget_Menu->setColumnCount(1);
	ui->treeWidget_Menu->setHeaderHidden(true);
	foreach (M_Menu* menu_c, this->menu)
	{
		ui->treeWidget_Menu->insertTopLevelItem(count++, menu_c->create_TreeWidgetItem(ui->treeWidget_Menu));
	}
	ui->treeWidget_Menu->expandAll();
}

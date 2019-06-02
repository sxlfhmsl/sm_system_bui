#include "widget_datagrid_pa.h"
#include "ui_widget_datagrid_pa.h"

#include <QStandardItemModel>

//数据表格_带有分页条
Widget_DataGrid_Pa::Widget_DataGrid_Pa(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::Widget_DataGrid_Pa();
	ui->setupUi(this);
	// 初始化
	this->init_Widget();
}

Widget_DataGrid_Pa::~Widget_DataGrid_Pa()
{
	delete ui;
}

QStandardItemModel* Widget_DataGrid_Pa::get_Model()
{
	return this->model;
}

void Widget_DataGrid_Pa::setHorizontalHeaderLabels(const QStringList &labels)
{
	this->model->setHorizontalHeaderLabels(labels);
}

void Widget_DataGrid_Pa::init_Widget()
{
	this->model = new QStandardItemModel(this);
	ui->tableView_DataGrid->setModel(this->model);
	//ui->tableView_DataGrid->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

#include "widget_datagrid_pa.h"
#include "ui_widget_datagrid_pa.h"

#include <QStandardItemModel>
#include <QJsonArray>

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

void Widget_DataGrid_Pa::setHorizontalHeaderLabels(const QStringList &labels)
{
	this->labels = labels;
	this->model->setHorizontalHeaderLabels(labels);
}

void Widget_DataGrid_Pa::init_Widget()
{
	this->model = new QStandardItemModel(this);
	ui->tableView_DataGrid->setModel(this->model);
	// 页面修改
	QObject::connect(ui->widget_Pa, SIGNAL(page_Change(int, int)), this, SIGNAL(page_Change(int, int)));
	//ui->tableView_DataGrid->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

void Widget_DataGrid_Pa::setItem(const int &row, const int &col, const QVariant &value)
{
	this->model->setItem(row, col, new QStandardItem(value.toString()));
}

void Widget_DataGrid_Pa::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->tableView_DataGrid->setIndexWidget(this->model->index(row, col), widget);
}

void Widget_DataGrid_Pa::set_PaginationInfo(int counts)
{
	ui->widget_Pa->set_PaginationInfo(counts);
}

void Widget_DataGrid_Pa::clear() 
{
	this->model->clear();
}

QMap<QString, int> Widget_DataGrid_Pa::count()
{
	QMap<QString, int> result;
	result.insert("row", this->model->rowCount());
	result.insert("col", this->model->columnCount());
	return result;
}

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

QStandardItemModel* Widget_DataGrid_Pa::get_Model()
{
	return this->model;
}

void Widget_DataGrid_Pa::setHorizontalHeaderLabels(const QStringList &labels)
{
	this->labels = labels;
	this->model->setHorizontalHeaderLabels(labels);
}

void Widget_DataGrid_Pa::setHorizontalHeaderLabels(const QStringList &labels, const QStringList &names)
{
	this->labels = labels;
	this->names = names;
	this->model->setHorizontalHeaderLabels(labels);
}

void Widget_DataGrid_Pa::setGridData(const QJsonObject &data)
{
	this->model->clear();
	this->setHorizontalHeaderLabels(this->labels);
	if (data.contains("rows"))
	{
		QJsonArray rows = data.value("rows").toArray();
		for (int row_c = 0; row_c < rows.count(); row_c++)
		{
			QJsonObject row = rows.at(row_c).toObject();
			for (int col_c = 0; col_c < this->names.count(); col_c++)
			{
				this->model->setItem(row_c, col_c, new QStandardItem(row[this->names[col_c]].toString()));
			}
		}
	}
}

void Widget_DataGrid_Pa::init_Widget()
{
	this->model = new QStandardItemModel(this);
	ui->tableView_DataGrid->setModel(this->model);
	//ui->tableView_DataGrid->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

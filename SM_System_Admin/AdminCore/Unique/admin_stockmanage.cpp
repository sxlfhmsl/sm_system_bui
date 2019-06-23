#include "admin_stockmanage.h"
#include "ui_admin_stockmanage.h"

// “股票管理”页面
Admin_StockManage::Admin_StockManage(QWidget *parent)
	: Widget_Base(System_Type::Admin, parent)
{
	ui = new Ui::Admin_StockManage();
	ui->setupUi(this);
	// 初始化界面
	this->init_UI();
}

Admin_StockManage::~Admin_StockManage()
{
	delete ui;
}

void Admin_StockManage::init_UI()
{
	this->init_DataGrid();
}

void Admin_StockManage::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "代码" << "名称" << "拼音缩写" << "类型" << "可买多" << "可买空"
		<< "可买" << "可卖" << "关盘" << "停牌" << "停牌时间" << "禁用"
		<< "备注" << "修改" << "禁用" << "删除";
	this->setHorizontalHeaderLabels(grid_head);
}

void  Admin_StockManage::setHorizontalHeaderLabels(const QStringList &labels)
{
	ui->widget_DataGrid->setHorizontalHeaderLabels(labels);
}

void Admin_StockManage::setItem(const int &row, const int &col, const QVariant &value)
{
	ui->widget_DataGrid->setItem(row, col, value);
}

void Admin_StockManage::setIndexWidget(const int &row, const int &col, QWidget* widget)
{
	ui->widget_DataGrid->setIndexWidget(row, col, widget);
}

void Admin_StockManage::set_PaginationInfo(int counts)
{
	ui->widget_DataGrid->set_PaginationInfo(counts);
}

void Admin_StockManage::clear()
{
	ui->widget_DataGrid->clear();
}

QMap<QString, int> Admin_StockManage::count()
{
	return ui->widget_DataGrid->count();
}

#include "widget_user_position.h"
#include "ui_widget_user_position.h"

// “用户持仓”页面
Widget_User_Position::Widget_User_Position(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::Widget_User_Position();
	ui->setupUi(this);
	this->init_Widget();
}

Widget_User_Position::~Widget_User_Position()
{
	delete ui;
}

void Widget_User_Position::init_Widget()
{
	this->init_DataGrid();
}

void Widget_User_Position::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "单号" << "会员" << "代理" << "时间" << "代码/名称" << "买价格"
		<< "现价" << "多/空" << "数量（手）" << "浮盈" << "盈亏比率" << "金额"
		<< "留仓费" << "手续费" << "修改" << "平仓" << "买价平仓" << "删除";
	ui->widget_DataGrid->setHorizontalHeaderLabels(grid_head);
}

#include "widget_member_drawmoney.h"
#include "ui_widget_member_drawmoney.h"

// “会员提款”界面
Widget_Member_DrawMoney::Widget_Member_DrawMoney(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::Widget_Member_DrawMoney();
	ui->setupUi(this);
	// 初始化界面
	this->init_Widget();
}

Widget_Member_DrawMoney::~Widget_Member_DrawMoney()
{
	delete ui;
}

void Widget_Member_DrawMoney::init_Widget()
{
	this->init_DataGrid();
}

void Widget_Member_DrawMoney::init_DataGrid()
{
	QStringList grid_head;
	grid_head << "会员编码" << "提款日期" << "提款金额" << "银行" << "开户行" << "账户名"
		<< "银行账号" << "提款状态" << "处理时间" << "备注" << "通过" << "不通过";
	ui->widget_DataGrid->setHorizontalHeaderLabels(grid_head);
}

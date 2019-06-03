#include "admin_memberdrawmoney.h"

// 管理员-----会员提款
Admin_MemberDrawMoney::Admin_MemberDrawMoney(QWidget *parent)
	: Widget_MemberDrawMoney(System_Type::Admin, parent)
{
	// 创造表头
	this->create_GridHead();
}

Admin_MemberDrawMoney::~Admin_MemberDrawMoney()
{
}

void Admin_MemberDrawMoney::create_GridHead()
{
	QStringList grid_head;
	grid_head << "会员编码" << "提款日期" << "提款金额" << "银行" << "开户行" << "账户名"
	<< "银行账号" << "提款状态" << "处理时间" << "备注" << "通过" << "不通过";
	this->setHorizontalHeaderLabels(grid_head);
}

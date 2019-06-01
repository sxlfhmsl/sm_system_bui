#include "widget_base.h"

//界面基类，主要用于存放可能用到的公共变量和方法
Widget_Base::Widget_Base(System_Type type, QWidget *parent)
	: QWidget(parent)
{
	this->current_Type = type;
}

Widget_Base::~Widget_Base()
{
}

#include "widget_base.h"

#include <QTimer>

//界面基类，主要用于存放可能用到的公共变量和方法
Widget_Base::Widget_Base(System_Type type, QWidget *parent)
	: QWidget(parent)
{
	this->current_Type = type;
	QTimer* timer = new QTimer(this);
	timer->setSingleShot(true);
	QObject::connect(timer, SIGNAL(timeout()), this, SLOT(slot_need_delay()));
	timer->start(200);
}

Widget_Base::~Widget_Base()
{
}

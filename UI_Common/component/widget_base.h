#pragma once

#include <QWidget>

/**
 * @brief The Widget_Base class
 * @details 界面基类，主要用于存放可能用到的公共变量和方法
 */
class Widget_Base : public QWidget
{
	Q_OBJECT

public:
	// 系统类型
    enum System_Type {
	    Admin,          // 管理员
		Agent           // 代理
	};

public:
	Widget_Base(System_Type type, QWidget *parent);
	~Widget_Base();

protected:
	System_Type current_Type;
};

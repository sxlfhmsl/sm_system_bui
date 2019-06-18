#pragma once

#include <QWidget>

#include "ui_common_global.h"

/**
 * @brief The Widget_Base class
 * @details 界面基类，主要用于存放可能用到的公共变量和方法
 */
class UI_COMMON_EXPORT Widget_Base : public QWidget
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

protected slots:
    // 此函数存放需要界面初始化完成后执行的代码，
    // 加入原因（在界面初始化函数中加入http请求，可能会加入事件循环失败）。
    // 实现原理单次 QTimer
    virtual void slot_need_delay() {};
};

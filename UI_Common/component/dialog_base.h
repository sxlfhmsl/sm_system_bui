#pragma once

#include <QDialog>

#include "ui_common_global.h"

/**
* @brief The Dialog_Base class
* @details 弹窗基类，主要用于存放可能用到的公共变量和方法
*/
class UI_COMMON_EXPORT Dialog_Base : public QDialog
{
	Q_OBJECT

public:
	Dialog_Base(QWidget *parent);
	~Dialog_Base();
};

#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_NoticeManage; };

/**
* @brief The Widget_NoticeManage class
* @details “公告管理”页面
*/
class UI_COMMON_EXPORT Widget_NoticeManage : public Widget_Base
{
	Q_OBJECT

public:
	Widget_NoticeManage(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_NoticeManage();

private:
	Ui::Widget_NoticeManage *ui;

protected:
	//设置headerlabels
	void setHorizontalHeaderLabels(QStringList header);

private:
	/**
	* @brief init_UI
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();

	/**
	* @brief init_DataGrid
	* @author 盛录
	* @details 初始化数据表格
	*/
	void init_DataGrid();
};

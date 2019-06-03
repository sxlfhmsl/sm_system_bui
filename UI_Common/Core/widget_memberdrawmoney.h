#pragma once

#include <QWidget>
namespace Ui { class Widget_Member_DrawMoney; };

/**
* @brief The Widget_Member_DrawMoney class
* @details “会员提款”界面
*/
class Widget_Member_DrawMoney : public QWidget
{
	Q_OBJECT

public:
	Widget_Member_DrawMoney(QWidget *parent = Q_NULLPTR);
	~Widget_Member_DrawMoney();

private:
	Ui::Widget_Member_DrawMoney *ui;

private:
	/**
	* @brief init_Widget
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_Widget();

	/**
	* @brief init_DataGrid
	* @author 盛录
	* @details 初始化数据表格
	*/
	void init_DataGrid();
};

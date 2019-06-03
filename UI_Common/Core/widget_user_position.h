#pragma once

#include <QWidget>
namespace Ui { class Widget_User_Position; };

/**
* @brief The Widget_User_Position class
* @details “用户持仓”页面
*/
class Widget_User_Position : public QWidget
{
	Q_OBJECT

public:
	Widget_User_Position(QWidget *parent = Q_NULLPTR);
	~Widget_User_Position();

private:
	Ui::Widget_User_Position *ui;

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

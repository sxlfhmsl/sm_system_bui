#pragma once

#include <QWidget>
namespace Ui { class Widget_Closed_Arrange; };

/**
* @brief The Widget_Closed_Arrange class
* @details “休市安排”页面
*/
class Widget_Closed_Arrange : public QWidget
{
	Q_OBJECT

public:
	Widget_Closed_Arrange(QWidget *parent = Q_NULLPTR);
	~Widget_Closed_Arrange();

private:
	Ui::Widget_Closed_Arrange *ui;

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

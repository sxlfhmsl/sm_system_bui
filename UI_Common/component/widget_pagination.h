#pragma once

#include <QWidget>
namespace Ui { class Widget_Pagination; };

/**
* @brief The Widget_Pagination class
* @details 分页界面
*/
class Widget_Pagination : public QWidget
{
	Q_OBJECT

public:
	Widget_Pagination(QWidget *parent = Q_NULLPTR);
	~Widget_Pagination();

	/**
	* @brief set_PaginationInfo
	* @author 盛录
	* @para(counts):总数量
	* @details 更改分页信息
	*/
	void set_PaginationInfo(int counts);

	/**
	* @brief get_CurrentPage
	* @author 盛录
	* @details 获取当前页
	*/
	int get_CurrentPage();

	/**
	* @brief get_CountPage
	* @author 盛录
	* @details 获取当前每页条目数
	*/
	int get_CountPage();

private:
	Ui::Widget_Pagination *ui;
	// 数据总条目数
	int counts = 0;
	// 每页显示多少条数据筛选
	QList<int> count_Page;
	// 当前页
	int currentPage = 0;

private:
	/**
	* @brief init_Widget
	* @author 盛录
	* @details 初始化分页控件
	*/
	void init_Widget();

signals:
	// 分页信息发生变化 当前页， 每页条目数
	void page_Change(int, int);

private slots:
    // 使得页数减小 1
    void on_pushButton_Small_clicked();
    // 使得页数减小 10
    void on_pushButton_SmallM_clicked();
	// 使得页数增大 1
	void on_pushButton_Big_clicked();
	// 使得页数增大 10
	void on_pushButton_BigM_clicked();
};

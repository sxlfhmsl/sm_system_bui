#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_RechargeManage; };

/**
* @brief The Widget_RechargeManage class
* @details “充值管理”页面
*/
class UI_COMMON_EXPORT Widget_RechargeManage : public Widget_Base
{
	Q_OBJECT

public:
	Widget_RechargeManage(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_RechargeManage();

protected:

	/**
	* @brief setHorizontalHeaderLabels
	* @para: labels 表头
	* @author 盛录
	* @details 设置表格头
	*/
	void setHorizontalHeaderLabels(const QStringList &labels);

	/**
	* @brief setItem
	* @para: row 行号
	* @para: col 列号
	* @para: value 值
	* @author 盛录
	* @details 设置单元格数据
	*/
	void setItem(const int &row, const int &col, const QVariant &value);


	/**
	* @brief setIndexWidget
	* @para: row 行号
	* @para: col 列号
	* @para: widget 窗体部件
	* @author 盛录
	* @details 设置单元格部件
	*/
	void setIndexWidget(const int &row, const int &col, QWidget* widget);

	/**
	* @brief clear
	* @author 盛录
	* @details 清空
	*/
	void clear();

	/**
	* @brief set_PaginationInfo
	* @author 盛录
	* @para(counts):总数量
	* @details 更改分页信息
	*/
	void set_PaginationInfo(int counts);

	/**
	* @brief count
	* @author 盛录
	* @details 返回行数和列数， row和col
	*/
	QMap<QString, int> count();

private:
	Ui::Widget_RechargeManage *ui;

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

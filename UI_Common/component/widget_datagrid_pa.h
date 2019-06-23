#pragma once

#include <QWidget>
#include <QJsonObject>

#include "ui_common_global.h"
namespace Ui { class Widget_DataGrid_Pa; };
class QStandardItemModel;

/**
* @brief The Widget_DataGrid_Pa class
* @details 数据表格_带有分页条
*/
class UI_COMMON_EXPORT Widget_DataGrid_Pa : public QWidget
{
	Q_OBJECT

signals :
	// 分页信息发生变化 当前页， 每页条目数
	void page_Change(int, int);

public:
	// labels：表头
	QStringList labels;

	Widget_DataGrid_Pa(QWidget *parent = Q_NULLPTR);
	~Widget_DataGrid_Pa();

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
	* @brief set_PaginationInfo
	* @author 盛录
	* @para(counts):总数量
	* @details 更改分页信息
	*/
	void set_PaginationInfo(int counts);

	/**
	 * @brief clear
	 * @author 盛录
	 * @details 清空
	 */
	void clear();

	/**
	 * @brief count
	 * @author 盛录
	 * @details 返回行数和列数， row和col
	 */
	QMap<QString, int> count();
private:
	Ui::Widget_DataGrid_Pa *ui;
	QStandardItemModel *model;

private:
	/**
	* @brief init_Widget
	* @author 盛录
	* @details 初始化当前窗口，创建并使用Model
	*/
	void init_Widget();
};

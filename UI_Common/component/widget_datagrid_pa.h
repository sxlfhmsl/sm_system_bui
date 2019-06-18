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

public:
	// 头labels和names
	QStringList labels, names;

	Widget_DataGrid_Pa(QWidget *parent = Q_NULLPTR);
	~Widget_DataGrid_Pa();

	/**
	* @brief get_Model
	* @author 盛录
	* @details 返回model
	*/
	QStandardItemModel* get_Model();

	/**
	* @brief setHorizontalHeaderLabels
	* @para: labels 表头
	* @author 盛录
	* @details 设置表格头
	*/
	void setHorizontalHeaderLabels(const QStringList &labels);

	/**
	 * @brief setHorizontalHeaderLabels
	 * @para: labels 表头
	 * @para: names 名称
	 * @author 盛录
	 * @details 设置表格头
	 */
	void setHorizontalHeaderLabels(const QStringList &labels, const QStringList &names);

	/**
	 * @brief setGridData
	 * @para: data 数据{rows:行数据， total:总数}
	 * @author 盛录
	 * @details 设置表格数据
	 */
	void setGridData(const QJsonObject &data);

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

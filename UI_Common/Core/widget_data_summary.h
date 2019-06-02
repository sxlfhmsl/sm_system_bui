#pragma once
#include <QLabel>

#include "ui_common_global.h"

#include "component\widget_base.h"

namespace Ui { class Widget_Data_Summary; };

/**
 * @brief The Widget_Data_Summary class
 * @details 数据汇总界面，考虑到可能的变化，内容以富文本的形式添加
 */
class UI_COMMON_EXPORT Widget_Data_Summary : public Widget_Base
{
	Q_OBJECT

public:
	Widget_Data_Summary(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_Data_Summary();

protected:
	// 渲染基础信息
	void render_BaseInfo(QString f_name, QStringList values);
	// 渲染今日信息
	void render_TodayData(QString f_name, QStringList values);
	// 渲染汇总
	void render_Summary(QString f_name, QStringList values);

private:
	Ui::Widget_Data_Summary *ui;

private:
	/**
	* @brief render_String
	* @details 渲染字符串
	*/
	QString render_String(QString temp, QStringList values);

	/**
	* @brief render_InfoLabel
	* @details 渲染到指定的label
	*/
	void render_InfoLabel(QLabel *label, QString f_name, QStringList values);

	/**
	* @brief init_Widget
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();
};

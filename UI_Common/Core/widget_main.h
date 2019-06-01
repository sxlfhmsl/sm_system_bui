#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"
#include <QTreeWidgetItem>
namespace Ui { class Widget_Main; };

/**
* @brief The Widget_Main class
* @details 主功能界面
*/
class UI_COMMON_EXPORT Widget_Main : public Widget_Base
{
	Q_OBJECT

public:
	Widget_Main(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_Main();

private:
	Ui::Widget_Main *ui;

private:
	/**
	* @brief init_Widget
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();
	
	/**
	* @brief switch_TabWidget
	* @author 盛录
	* @details 切换并创建对应窗口
	*/
	void switch_TabWidget(QString tab_name);

signals:
	// 退出成功信号
	void signal_LogoutSuccess();

private slots:
	/**
	* @brief on_pushButton_Logout_clicked
	* @details 退出登录按钮
	*/
	void on_pushButton_Logout_clicked();

	/**
	* @brief on_treeWidget_Menu_itemClicked
	* @details 菜单项点击事件
	*/
	void on_treeWidget_Menu_itemClicked(QTreeWidgetItem* item, int column);

	/**
	 * @brief on_tabWidget_Content_tabCloseRequested
	 * @details 页面申请关闭
	 */
	void on_tabWidget_Content_tabCloseRequested(int index);
};

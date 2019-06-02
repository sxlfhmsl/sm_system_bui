#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"
#include "component\m_menu.h"
#include <QTreeWidgetItem>
namespace Ui { class Widget_Main; };

/**
* @brief The Widget_Main class
* @details 主功能界面
*/
class UI_COMMON_EXPORT Widget_Main : public Widget_Base
{
	Q_OBJECT

signals :
	// 退出成功信号
	void signal_LogoutSuccess();

public:
	Widget_Main(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_Main();
	/**
	* @brief init_Menu
	* @author 盛录
	* @params menu 菜单
	* @details 初始化菜单项
	*/
	void init_Menu(const QList<M_Menu*> &menu);

protected:
	QList<M_Menu*> menu;

protected:
	/**
	* @brief switch_TabWidget
	* @author 盛录
	* @return 如果新建界面返回true
	* @details 切换并创建对应窗口
	*/
	virtual bool switch_TabWidget(QString tab_name);

private:
	Ui::Widget_Main *ui;

private:
	/**
	* @brief init_Widget
	* @author 盛录
	* @details 初始化当前窗口
	*/
	void init_UI();

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

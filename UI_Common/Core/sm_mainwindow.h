#pragma once

#include "ui_common_global.h"

#include <QMainWindow>

namespace Ui { class SM_MainWindow; };

/**
 * @brief The SM_MainWindow class
 * @details 股票后台主界面基类
 */
class UI_COMMON_EXPORT SM_MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	SM_MainWindow(QString title = "", QWidget *parent = Q_NULLPTR);
	~SM_MainWindow();

protected:
	// 登录界面指针
	QWidget *widget_Login = nullptr;
	// 主界面
	QWidget *widget_Main = nullptr;

protected:
	/**
	* @brief init_MainWindow
	* @date 2019-05-16
	* @author 盛录
	* @details 初始化主窗体，删除一些不需要的控件
	*/
	void init_MainWindow();
	// 初始化登录界面
	virtual void create_Login() {};
	// 初始化主界面
	virtual void create_Main() {};

protected slots:
	// 登录成功响应
	virtual void slot_LoginSuccess(QString u_Name);
	// 登录推出成功
	virtual void slot_LogoutSuccess();

private:
	Ui::SM_MainWindow *ui;

private:

	/**
	* @brief switch_WidgetLogin
	* @date 2019-05-19
	* @author 盛录
	* @details 初始化并切换至登录界面
	*/
	void switch_WidgetLogin();

	/**
	* @brief remove_WidgetLogin
	* @date 2019-05-19
	* @author 盛录
	* @details 清除登录界面
	*/
	void remove_WidgetLogin();

	/**
	* @brief switch_WidgetMain
	* @details 切换值主界面
	*/
	void switch_WidgetMain();

	/**
	* @brief remove_WidgetMain
	* @details 清除主界面
	*/
	void remove_WidgetMain();
};

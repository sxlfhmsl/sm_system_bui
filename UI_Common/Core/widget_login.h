#pragma once

#include "ui_common_global.h"

#include "component\widget_base.h"
namespace Ui { class Widget_Login; };

/**
* @brief The Widget_Login class
* @details 登录界面
*/
class UI_COMMON_EXPORT Widget_Login : public Widget_Base
{
	Q_OBJECT

signals :
	// 推出程序信号
	void signal_ExitProgram();
	// 登录成功信号
	void signal_LoginSuccess(QString);

public:
	Widget_Login(System_Type type, QWidget *parent = Q_NULLPTR);
	~Widget_Login();

protected:
	// 验证码校验成功则调用此方法进行登录校验
	virtual void check_LoginInfo(QString u_name, QString u_pass) {};

private:
	Ui::Widget_Login *ui;

private:
	// 初始化窗口UI
	void init_UI();

private slots:
	/**
	* @brief on_pushButton_Login_clicked
	* @details 登录按钮
	*/
	void on_pushButton_Login_clicked();
};

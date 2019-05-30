#include "sm_mainwindow.h"
#include "ui_sm_mainwindow.h"
#include "widget_login.h"
#include "widget_main.h"

// 股票后台主界面基类
SM_MainWindow::SM_MainWindow(QString title, QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::SM_MainWindow();
	ui->setupUi(this);
	// 设置标题
	this->setWindowTitle(title);
	// 初始化主界面
	this->init_MainWindow();
}

SM_MainWindow::~SM_MainWindow()
{
	delete ui;
	this->remove_WidgetLogin();
	this->remove_WidgetMain();
}

void SM_MainWindow::init_MainWindow()
{
	// 移除centralwidget
	if (NULL != this->centralWidget())
	{
		delete this->centralWidget();
		this->setCentralWidget(nullptr);
	}
	this->switch_WidgetLogin();
}

void SM_MainWindow::switch_WidgetLogin()
{
	this->remove_WidgetLogin();
	// 创建登录界面
	this->create_Login();
	this->setCentralWidget(this->widget_Login);
	// 推出程序
	QObject::connect((Widget_Login*)this->widget_Login, SIGNAL(signal_ExitProgram()), this, SLOT(close()));
	// 登录成功
	QObject::connect((Widget_Login*)this->widget_Login, SIGNAL(signal_LoginSuccess(QString)), this, SLOT(slot_LoginSuccess(QString)));
}

void SM_MainWindow::remove_WidgetLogin()
{
	if (nullptr != this->widget_Login)
	{
		// 取消推出绑定
		QObject::disconnect((Widget_Login*)this->widget_Login, SIGNAL(signal_ExitProgram()), this, SLOT(close()));
		QObject::disconnect((Widget_Login*)this->widget_Login, SIGNAL(signal_LoginSuccess(QString)), this, SLOT(slot_LoginSuccess(QString)));
		delete this->widget_Login;
		this->widget_Login = nullptr;
	}
}

void SM_MainWindow::switch_WidgetMain()
{
	this->remove_WidgetMain();
	// 创建主界面
	this->create_Main();
	this->setCentralWidget(this->widget_Main);
	// 绑定退出登录成功响应
	QObject::connect((Widget_Main*)this->widget_Main, SIGNAL(signal_LogoutSuccess()), this, SLOT(slot_LogoutSuccess()));
}

void SM_MainWindow::remove_WidgetMain()
{
	if (nullptr != this->widget_Main)
	{
		QObject::disconnect((Widget_Main*)this->widget_Main, SIGNAL(signal_LogoutSuccess()), this, SLOT(slot_LogoutSuccess()));
		delete this->widget_Main;
		this->widget_Main = nullptr;
	}
}

void SM_MainWindow::slot_LoginSuccess(QString u_Name)
{
	this->remove_WidgetLogin();
	this->switch_WidgetMain();
}

void SM_MainWindow::slot_LogoutSuccess()
{
	this->remove_WidgetMain();
	this->switch_WidgetLogin();
}


#include "widget_login.h"
#include "ui_widget_login.h"

#include <QMessageBox>

Widget_Login::Widget_Login(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_Login();
	ui->setupUi(this);
	this->init_UI();
}

Widget_Login::~Widget_Login()
{
	QObject::disconnect(ui->pushButton_Out, SIGNAL(clicked()), this, SIGNAL(signal_ExitProgram()));
	delete ui;
}

void Widget_Login::init_UI()
{
	switch (this->current_Type)
	{
	case Widget_Base::Admin:
		ui->label_Title->setText("管理员登录");
		break;
	case Widget_Base::Agent:
		ui->label_Title->setText("代理登录");
		break;
	default:
		break;
	}
	QObject::connect(ui->pushButton_Out, SIGNAL(clicked()), this, SIGNAL(signal_ExitProgram()));
}

void Widget_Login::on_pushButton_Login_clicked()
{
	if (ui->label_CodeVal->check_VerCode(ui->lineEdit_Code->text()))
	{
		this->check_LoginInfo(ui->lineEdit_Username->text(), ui->lineEdit_Password->text());
	}
	else
	{
		QMessageBox::warning(this, "警告", "请输入正确的验证码");
	}
}
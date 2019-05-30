#include "widget_login.h"
#include "ui_widget_login.h"

#include <QMessageBox>

Widget_Login::Widget_Login(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::Widget_Login();
	ui->setupUi(this);
	QObject::connect(ui->pushButton_Out, SIGNAL(clicked()), this, SIGNAL(signal_ExitProgram()));
}

Widget_Login::~Widget_Login()
{
	QObject::disconnect(ui->pushButton_Out, SIGNAL(clicked()), this, SIGNAL(signal_ExitProgram()));
	delete ui;
}

void Widget_Login::on_pushButton_Login_clicked()
{
	if (ui->label_CodeVal->check_VerCode(ui->lineEdit_Code->text()))
	{
		this->check_LoginInfo(ui->lineEdit_Username->text(), ui->lineEdit_Password->text());
	}
	else
	{
		QMessageBox::warning(this, "融易通管理端", "请输入正确的验证码");
	}
}
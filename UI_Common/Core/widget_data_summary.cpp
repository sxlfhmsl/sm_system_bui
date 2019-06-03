#include "widget_data_summary.h"
#include "ui_widget_data_summary.h"

#include <QFile>

Widget_Data_Summary::Widget_Data_Summary(System_Type type, QWidget *parent)
	: Widget_Base(type, parent)
{
	ui = new Ui::Widget_Data_Summary();
	ui->setupUi(this);
	this->init_UI();
}

Widget_Data_Summary::~Widget_Data_Summary()
{
	delete ui;
}

void Widget_Data_Summary::init_UI()
{
	switch (this->current_Type)
	{
	case Widget_Base::Admin:
		break;
	case Widget_Base::Agent:
		delete ui->label_4;
		ui->label_4 = nullptr;
		delete ui->comboBox;
		ui->comboBox = nullptr;
		break;
	}
}

QString Widget_Data_Summary::render_String(QString temp, QStringList values)
{
	for each (QString value in values)
	{
		temp = temp.arg(value);
	}
	return temp;
}

void Widget_Data_Summary::render_InfoLabel(QLabel *label, QString f_name, QStringList values)
{
	QFile template_f(f_name);
	template_f.open(QIODevice::ReadOnly | QIODevice::Text);
	QString content = QString(template_f.readAll());
	template_f.close();
	label->setText(this->render_String(content, values));
}

void Widget_Data_Summary::render_BaseInfo(QString f_name, QStringList values)
{
	this->render_InfoLabel(ui->label_BaseInfoContent, f_name, values);
}

void Widget_Data_Summary::render_TodayData(QString f_name, QStringList values)
{
	this->render_InfoLabel(ui->label_TodayDataContent, f_name, values);
}

void Widget_Data_Summary::render_Summary(QString f_name, QStringList values)
{
	this->render_InfoLabel(ui->label_SummaryContent, f_name, values);
}

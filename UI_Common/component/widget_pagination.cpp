#include "widget_pagination.h"
#include "ui_widget_pagination.h"

Widget_Pagination::Widget_Pagination(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::Widget_Pagination();
	ui->setupUi(this);
	this->init_Widget();
}

Widget_Pagination::~Widget_Pagination()
{
	delete ui;
}

void Widget_Pagination::set_PaginationInfo(int counts)
{
	this->counts = counts;
	int count_OnePage = this->count_Page[ui->comboBox_CountPage->currentIndex()];
	int pages = this->counts / count_OnePage + (this->counts % count_OnePage == 0 ? 0 : 1);
	if (this->currentPage > pages)
	{
		this->currentPage = pages;
		ui->lineEdit_CurrentPage->setText(QString::number(this->currentPage, 10));
	}
	// 更改总页数
	ui->label_Pages->setText("/" + QString::number(pages, 10));
}

int Widget_Pagination::get_CurrentPage()
{
	return this->currentPage;
}

int Widget_Pagination::get_CountPage()
{
	return this->count_Page[ui->comboBox_CountPage->currentIndex()];
}

void Widget_Pagination::init_Widget()
{
	this->count_Page << 10 << 20 << 40 << 80 << 200;
	for each (int count in this->count_Page)
	{
		ui->comboBox_CountPage->addItem(QString("%1条/页").arg(QString::number(count, 10)));
		ui->label_Counts->setText(QString("共%1条").arg(QString::number(this->counts, 10)));
		ui->lineEdit_CurrentPage->setText(QString::number(this->currentPage, 10));
		ui->label_Pages->setText("/" + QString::number(1, 10));
	}
}

void Widget_Pagination::on_pushButton_Small_clicked()
{
	this->currentPage -= 1;
	if (this->currentPage < 0)
	{
		this->currentPage = 0;
	}
	emit page_Change(this->currentPage, this->count_Page[ui->comboBox_CountPage->currentIndex()]);
}

void Widget_Pagination::on_pushButton_SmallM_clicked()
{
	this->currentPage -= 10;
	if (this->currentPage < 0)
	{
		this->currentPage = 0;
	}
	emit page_Change(this->currentPage, this->count_Page[ui->comboBox_CountPage->currentIndex()]);
}

void Widget_Pagination::on_pushButton_Big_clicked()
{
	this->currentPage += 1;
	int count_OnePage = this->count_Page[ui->comboBox_CountPage->currentIndex()];
	int pages = this->counts / count_OnePage + (this->counts % count_OnePage == 0 ? 0 : 1);
	if (this->currentPage > pages)
	{
		this->currentPage = pages;
	}
	emit page_Change(this->currentPage, this->count_Page[ui->comboBox_CountPage->currentIndex()]);
}

void Widget_Pagination::on_pushButton_BigM_clicked()
{
	this->currentPage += 10;
	int count_OnePage = this->count_Page[ui->comboBox_CountPage->currentIndex()];
	int pages = this->counts / count_OnePage + (this->counts % count_OnePage == 0 ? 0 : 1);
	if (this->currentPage > pages)
	{
		this->currentPage = pages;
	}
	emit page_Change(this->currentPage, this->count_Page[ui->comboBox_CountPage->currentIndex()]);
}

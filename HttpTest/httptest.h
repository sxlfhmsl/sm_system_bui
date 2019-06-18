#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_httptest.h"

class HttpReply;
class HttpTest : public QMainWindow
{
	Q_OBJECT

public:
	HttpTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::HttpTestClass ui;
	// 更新clerk Reply
	HttpReply* reply_Update_Clerk = nullptr;

private slots:
    void on_pushButton_clicked();

	void slot_recv_success();
};

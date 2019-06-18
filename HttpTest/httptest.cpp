#include "httptest.h"
#include "httpmanagert.h"
#include "Network\httpreply.h"

#include <QJsonObject>
#include <QJsonDocument>
#include <qDebug>

HttpTest::HttpTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void HttpTest::on_pushButton_clicked()
{
	ui.label->setText("");
	if (this->reply_Update_Clerk == nullptr)
	{
		this->reply_Update_Clerk = Http_Managert::instance()->post("/clerk", QJsonObject());
		QObject::connect(this->reply_Update_Clerk, SIGNAL(finished()), this, SLOT(slot_recv_success()));
	}
}

void HttpTest::slot_recv_success()
{
	if (this->reply_Update_Clerk != nullptr)
	{
		QObject::disconnect(this->reply_Update_Clerk, SIGNAL(finished()), this, SLOT(slot_recv_success()));
		QJsonObject m = this->reply_Update_Clerk->get_parse_json();
		QJsonDocument docu;
		docu.setObject(m);
		ui.label->setText(QString::number(m["num"].toInt()));
		qDebug() << QString::fromUtf8(docu.toJson()) << endl;
		this->reply_Update_Clerk->deleteLater();
		this->reply_Update_Clerk = nullptr;
	}
}
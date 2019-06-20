#include "agent_clerk.h"
#include "Unique\agent_singleton.h"
#include "Network\httpreply.h"

#include <QPushButton>
#include <QJsonObject>
#include <QJsonArray>
#include <QTimer>

// 代理端-----业务员
Agent_Clerk::Agent_Clerk(QWidget *parent)
	: Widget_Clerk(System_Type::Agent, parent)
{
	// 创造表头
	this->create_GridHead();
}

void Agent_Clerk::slot_need_delay()
{
	if (this->reply_Update_Clerk == nullptr)
	{
		this->reply_Update_Clerk = Agent_Http::instance()->post("/clerk", QJsonObject());
		QObject::connect(this->reply_Update_Clerk, SIGNAL(finished()), this, SLOT(slot_Finished_Update_Clerk()));
	}
}

Agent_Clerk::~Agent_Clerk()
{
	if (this->reply_Update_Clerk != nullptr)
	{
		this->reply_Update_Clerk->deleteLater();
	}
}

void Agent_Clerk::create_GridHead()
{
	QStringList head;
	head << "名称" << "修改" << "删除";
	this->setHorizontalHeaderLabels(head);
}

void Agent_Clerk::slot_Finished_Update_Clerk()
{
	if (this->reply_Update_Clerk != nullptr)
	{
		QJsonObject result = this->reply_Update_Clerk->get_parse_json();
		QObject::disconnect(this->reply_Update_Clerk, SIGNAL(finished()), this, SLOT(slot_Finished_Update_Clerk()));
		this->reply_Update_Clerk->deleteLater();
		this->reply_Update_Clerk = nullptr;
		QJsonArray rows = result["data"].toObject()["rows"].toArray();
		for (int i = 0; i < rows.count(); i++)
		{
			this->setItem(i, 0, rows.at(i).toObject()["name"].toVariant().toString());
			this->setIndexWidget(i, 1, new QPushButton("修改"));
			this->setIndexWidget(i, 2, new QPushButton("删除"));
		}
	}
}

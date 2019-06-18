#include "agent_clerk.h"
#include "Unique\agent_singleton.h"
#include "Network\httpreply.h"

#include <QJsonObject>
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
	QStringList head, names;
	head << "名称" << "修改" << "删除";
	names << "name" << "change" << "delete";
	this->setHorizontalHeaderLabels(head, names);
}

void Agent_Clerk::slot_Finished_Update_Clerk()
{
	if (this->reply_Update_Clerk != nullptr)
	{
		QJsonObject result = this->reply_Update_Clerk->get_parse_json();
		QObject::disconnect(this->reply_Update_Clerk, SIGNAL(finished()), this, SLOT(slot_Finished_Update_Clerk()));
		this->reply_Update_Clerk->deleteLater();
		this->reply_Update_Clerk = nullptr;
		this->setGridData(result);
	}
}

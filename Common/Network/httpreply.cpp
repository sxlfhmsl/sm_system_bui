#include "httpreply.h"
#include <QNetworkReply>
#include <QJsonDocument>
#include <qDebug>

HttpReply::HttpReply(QObject *parent)
	: QObject(parent)
{
}

HttpReply::~HttpReply()
{
}

QJsonObject& HttpReply::get_parse_json()
{
	return this->parse_json;
}

void HttpReply::set_parse_json(QJsonObject parse_json)
{
	this->parse_json = parse_json;
	emit this->finished();
}

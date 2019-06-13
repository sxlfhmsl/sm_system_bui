#pragma once

#include <QObject>

#include "common_global.h"

class COMMON_EXPORT HttpManager : public QObject
{
	Q_OBJECT

public:
	HttpManager(QObject *parent = nullptr);
	~HttpManager();
};

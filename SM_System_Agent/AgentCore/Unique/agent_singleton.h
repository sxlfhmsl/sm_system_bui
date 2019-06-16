#pragma once

#include "Utils\singleton.h"
#include "Network\httpmanager.h"
// 服务端Http网络管理类
typedef Singleton<HttpManager> Agent_Http;
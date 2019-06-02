#pragma once

#include <QObject>
#include "ui_common_global.h"

class QTreeWidgetItem;
class QTreeWidget;

/**
* @brief The M_Menu class
* @details 菜单数据结构
*/
class UI_COMMON_EXPORT M_Menu : public QObject
{
	Q_OBJECT

public:
	// 菜单名称
	QString name;
	// 是否响应点击
	bool clickable;
	// 菜单的子项
	QList<M_Menu *> children;

public:
	M_Menu(QString name, bool children=false, QObject *parent=Q_NULLPTR);

	// 判断某一字符串是否为可点击项
	bool judge_clickable(QString name);

	// 生成菜单Item
	QTreeWidgetItem* create_TreeWidgetItem(QTreeWidget* tree);
	QTreeWidgetItem* create_TreeWidgetItem(QTreeWidgetItem* tree);

	// 重置操作符
	M_Menu& operator<<(const QString & name);
	~M_Menu();
};

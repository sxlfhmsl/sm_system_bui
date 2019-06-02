#include "m_menu.h"

#include <QException>
#include<QTreeWidget>
#include<QTreeWidgetItem>

M_Menu::M_Menu(QString name, bool children, QObject *parent)
	: QObject(parent)
{
	this->name = name;
	this->clickable = children;
}

M_Menu::~M_Menu()
{
	qDeleteAll(this->children);
	this->children.clear();
}

QTreeWidgetItem* M_Menu::create_TreeWidgetItem(QTreeWidget* tree)
{
	QTreeWidgetItem *item_f = new QTreeWidgetItem(tree, QStringList(name));
	foreach(M_Menu* menu_c, this->children)
	{
		item_f->addChild(menu_c->create_TreeWidgetItem(item_f));
	}
	return item_f;
}

QTreeWidgetItem* M_Menu::create_TreeWidgetItem(QTreeWidgetItem* tree)
{
	QTreeWidgetItem *item_f = new QTreeWidgetItem(tree, QStringList(name));
	foreach(M_Menu* menu_c, this->children)
	{
		item_f->addChild(menu_c->create_TreeWidgetItem(item_f));
	}
	return item_f;
}

M_Menu& M_Menu::operator<<(const QString & name)
{
	this->clickable = false;
	if (this->name == name)
	{
		throw QString("出现相同菜单名称");
	}
	foreach(M_Menu* menu, this->children)
	{
		if (name == menu->name)
		{
			throw QString("出现相同菜单名称");
		}
	}
	this->children << new M_Menu(name, true);
	return *this;
}

bool M_Menu::judge_clickable(QString name)
{
	if (name == this->name && this->clickable)
	{
		return true;
	}
	else
	{
		foreach(M_Menu *menu_c, this->children)
		{
			if (menu_c->judge_clickable(name))
			{
				return true;
			}
		}
	}
	return false;
}

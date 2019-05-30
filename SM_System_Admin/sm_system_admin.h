#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sm_system_admin.h"

class SM_System_Admin : public QMainWindow
{
	Q_OBJECT

public:
	SM_System_Admin(QWidget *parent = Q_NULLPTR);

private:
	Ui::SM_System_AdminClass ui;
};

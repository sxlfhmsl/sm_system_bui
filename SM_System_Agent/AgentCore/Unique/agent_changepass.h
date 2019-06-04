#pragma once

#include "component\dialog_base.h"
namespace Ui { class Agent_ChangePass; };

// 代理端-----修改密码
class Agent_ChangePass : public Dialog_Base
{
	Q_OBJECT

public:
	Agent_ChangePass(QWidget *parent = Q_NULLPTR);
	~Agent_ChangePass();

private:
	Ui::Agent_ChangePass *ui;

	// 初始化
	void init_UI();
};

#include "dialog_base.h"

Dialog_Base::Dialog_Base(QWidget *parent)
	: QDialog(parent)
{
	this->setWindowFlags(this->windowFlags()&~Qt::WindowContextHelpButtonHint);
}

Dialog_Base::~Dialog_Base()
{
}

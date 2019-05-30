#include "vercodelabel.h"

#include <QTime>
#include <QPainter>
#include <QPaintEvent>

VerCodeLabel::VerCodeLabel(QWidget *parent) : QLabel(parent)
{
	// 生成随机种子
	qsrand(QTime::currentTime().second() * 1000 + QTime::currentTime().msec());
	noice_point_number = this->width();
	ver_Code = produceVerificationCode();
	produceRandomColor();
	produceRandomNoicePoints();
}

VerCodeLabel::~VerCodeLabel()
{
	delete[] code_Color;
	delete[] noice_Points;
}

void VerCodeLabel::mousePressEvent(QMouseEvent *event)
{
	ver_Code = produceVerificationCode();
	produceRandomColor();
	produceRandomNoicePoints();
	repaint();
	QLabel::mousePressEvent(event);
}

void VerCodeLabel::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	QPoint p;
	painter.fillRect(this->rect(), Qt::white);
	QFont new_Font("宋体", this->height() / 2, -1, true);
	new_Font.setItalic(true);
	QFont old_Font = painter.font();
	painter.setFont(new_Font);
	for (int i = 0; i < letter_number; ++i)
	{
		p.setX(i * (this->width() / letter_number));
		p.setY(this->height() / 2 + qrand() % this->height() / 2);
		painter.setPen(code_Color[i]);
		painter.drawText(p, ver_Code.mid(i, 1));
	}
	painter.setFont(old_Font);
	// 绘制噪点
	for (int j = 0; j < noice_point_number; ++j)
	{
		painter.setPen(code_Color[j % 4]);
		painter.drawPoint(noice_Points[j]);
	}
	QLabel::paintEvent(event);
}

bool VerCodeLabel::check_VerCode(QString code)
{
	if (QString::compare(code.toLower(), ver_Code.toLower()) == 0)
	{
		return true;
	}
	return false;
}

QString VerCodeLabel::produceRandomLetter()
{
	QChar m_char;
	int flag = qrand() % letter_number;
	switch (flag)
	{
	case NUMBER_FLAG: m_char = '0' + qrand() % 10; break;
	case UPLETTER_FLAG: m_char = 'A' + qrand() % 26; break;
	case LOWLETTER_FLAG: m_char = 'a' + qrand() % 26; break;
	default: m_char = qrand() % 2 ? 'W' : 'D';
	}
	return QString(m_char);
}

void VerCodeLabel::produceRandomColor()
{
	if (this->code_Color != nullptr)
	{
		delete[] this->code_Color;
		this->code_Color = nullptr;
	}
	this->code_Color = new QColor[letter_number];
	for (int i = 0; i < letter_number; ++i)
	{
		this->code_Color[i].setRgb(qrand() % 255, qrand() % 255, qrand() % 255);
	}
}

QString VerCodeLabel::produceVerificationCode()
{
	QString result = "";
	for (int i = 0; i < letter_number; ++i)
	{
		result += produceRandomLetter();
	}
	return result;
}

void VerCodeLabel::produceRandomNoicePoints()
{
	if (this->noice_Points != nullptr)
	{
		delete[] this->noice_Points;
		this->noice_Points = nullptr;
	}
	this->noice_Points = new QPoint[noice_point_number];
	for (int j = 0; j < noice_point_number; ++j)
	{
		this->noice_Points[j].setX(qrand() % this->width());
		this->noice_Points[j].setY(qrand() % this->height());
	}
}

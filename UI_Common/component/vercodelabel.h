#pragma once

#include <QLabel>

/**
* @brief The VerCodeLabel class
* @details 验证码生成
*/
class VerCodeLabel : public QLabel
{
	Q_OBJECT
public:
	explicit VerCodeLabel(QWidget *parent = 0);
	~VerCodeLabel();

	/**
	* @brief check_VerCode
	* @param code 验证码
	* @return 校验结果
	* @details 校验验证码并返回结果
	*/
	bool check_VerCode(QString code);

signals:

	public slots :

protected:
	void mousePressEvent(QMouseEvent *event);
	void paintEvent(QPaintEvent *event);

private:
	// 验证码长度
	const int letter_number = 4;
	// 噪点数量
	int noice_point_number;
	QPoint *noice_Points = nullptr;
	QString ver_Code;
	QColor *code_Color = nullptr;
	enum {
		// 验证码类型
		NUMBER_FLAG,
		UPLETTER_FLAG,
		LOWLETTER_FLAG
	};

private:
	/**
	* @brief produceRandomLetter
	* @return 生成的字符
	* @details 生成随机字符
	*/
	QString produceRandomLetter();

	/**
	* @brief produceRandomColor
	* @details 产生随机颜色
	*/
	void produceRandomColor();

	/**
	* @brief produceVerificationCode
	* @details 产生验证码
	*/
	QString produceVerificationCode();

	/**
	* @brief produceRandomNoicePoints
	* @details 生成噪声点
	*/
	void produceRandomNoicePoints();
};

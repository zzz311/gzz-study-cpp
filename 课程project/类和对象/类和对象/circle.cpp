#include"circle.h"
#include"point.h"
//函数的定义
	void Circle::setR(int R)
	{
		m_R = R;
	}
	//获取半径
	int Circle::getR()
	{
		return m_R;
	}
	//设置圆点
	void Circle::setcenter(Point center)
	{
		m_center = center;
	}
	//获取圆点
	Point Circle::getcenter()
	{
		return m_center;
	}
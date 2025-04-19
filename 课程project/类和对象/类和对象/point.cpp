#include"point.h"
//函数的定义
	void Point::setpoint(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	//获取横坐标
	int Point::pointx()
	{
		return m_x;
	}
	//获取纵坐标
	int Point::pointy()
	{
		return m_y;
	}


#include<iostream>
using namespace std;
#include "point.h"
#include"circle.h"
//点和圆的关系
//1.创建点类
//class Point
//{
//public:
//	//设置横、纵坐标
//	void setpoint(int x,int y)
//	{
//		m_x = x;
//		m_y = y;
//	}
//	//获取横坐标
//	int pointx()
//	{
//		return m_x;
//	}
//	//获取纵坐标
//	int pointy()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x; //横坐标
//	int m_y; //纵坐标
//};
//2.创建圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int R)
//	{
//		m_R = R;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆点
//	void setcenter(Point center)
//	{
//		m_center = center;
//	}
//	//获取圆点
//	Point getcenter()
//	{
//		return m_center;
//	}
//private:
//	int m_R; //圆的半径
//	Point m_center; //圆点 是类 类嵌套类 类中，可以让另一个类作为本来类中的成员
//};
//3.判断点和圆的关系
void whatrelate(Circle &C,Point &P)
{
	int distance = (C.getcenter().pointx() - P.pointx()) * (C.getcenter().pointx() - P.pointx()) +
		(C.getcenter().pointy() - P.pointy()) * (C.getcenter().pointy() - P.pointy());
	int rsquare = (C.getR()) * (C.getR());
	if (distance > rsquare)
	{
		cout << "点在圆外" << endl;
	}
	else if (distance == rsquare)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	//实例化
	Circle C1;
	Point C1center;
	C1center.setpoint(0, 0);
	C1.setcenter(C1center);
	C1.setR(5);
	Point P1;
	P1.setpoint(1, 1);
	whatrelate(C1, P1);

	system("pause");
	return 0;
}
#pragma once
#include<iostream>
#include"point.h"
using namespace std;
//函数的声明
class Circle
{
public:
	//设置半径
	void setR(int R);

	//获取半径
	int getR();
	
	//设置圆点
	void setcenter(Point center);
	
	//获取圆点
	Point getcenter();

private:
	int m_R; //圆的半径
	Point m_center; //圆点 是类 类嵌套类 类中，可以让另一个类作为本来类中的成员
};

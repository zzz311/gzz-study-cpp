#pragma once
#include<iostream>
using namespace std;
//函数的声明
class Point
{
public:
	//设置横、纵坐标
	void setpoint(int x, int y);
	
	//获取横坐标
	int pointx();

	//获取纵坐标
	int pointy();


private:
	int m_x; //横坐标
	int m_y; //纵坐标
};

#pragma once
#include<iostream>
using namespace std;
//����������
class Point
{
public:
	//���úᡢ������
	void setpoint(int x, int y);
	
	//��ȡ������
	int pointx();

	//��ȡ������
	int pointy();


private:
	int m_x; //������
	int m_y; //������
};

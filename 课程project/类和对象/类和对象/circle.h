#pragma once
#include<iostream>
#include"point.h"
using namespace std;
//����������
class Circle
{
public:
	//���ð뾶
	void setR(int R);

	//��ȡ�뾶
	int getR();
	
	//����Բ��
	void setcenter(Point center);
	
	//��ȡԲ��
	Point getcenter();

private:
	int m_R; //Բ�İ뾶
	Point m_center; //Բ�� ���� ��Ƕ���� ���У���������һ������Ϊ�������еĳ�Ա
};

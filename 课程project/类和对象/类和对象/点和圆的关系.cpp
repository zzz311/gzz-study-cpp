#include<iostream>
using namespace std;
#include "point.h"
#include"circle.h"
//���Բ�Ĺ�ϵ
//1.��������
//class Point
//{
//public:
//	//���úᡢ������
//	void setpoint(int x,int y)
//	{
//		m_x = x;
//		m_y = y;
//	}
//	//��ȡ������
//	int pointx()
//	{
//		return m_x;
//	}
//	//��ȡ������
//	int pointy()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x; //������
//	int m_y; //������
//};
//2.����Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int R)
//	{
//		m_R = R;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setcenter(Point center)
//	{
//		m_center = center;
//	}
//	//��ȡԲ��
//	Point getcenter()
//	{
//		return m_center;
//	}
//private:
//	int m_R; //Բ�İ뾶
//	Point m_center; //Բ�� ���� ��Ƕ���� ���У���������һ������Ϊ�������еĳ�Ա
//};
//3.�жϵ��Բ�Ĺ�ϵ
void whatrelate(Circle &C,Point &P)
{
	int distance = (C.getcenter().pointx() - P.pointx()) * (C.getcenter().pointx() - P.pointx()) +
		(C.getcenter().pointy() - P.pointy()) * (C.getcenter().pointy() - P.pointy());
	int rsquare = (C.getR()) * (C.getR());
	if (distance > rsquare)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance == rsquare)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//ʵ����
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
#include"circle.h"
#include"point.h"
//�����Ķ���
	void Circle::setR(int R)
	{
		m_R = R;
	}
	//��ȡ�뾶
	int Circle::getR()
	{
		return m_R;
	}
	//����Բ��
	void Circle::setcenter(Point center)
	{
		m_center = center;
	}
	//��ȡԲ��
	Point Circle::getcenter()
	{
		return m_center;
	}
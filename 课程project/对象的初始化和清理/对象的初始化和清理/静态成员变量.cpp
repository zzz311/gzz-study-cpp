#include<iostream>
using namespace std;
//��̬��Ա����
//-���ж�����ͬһ�ݶ�����
//- �ڱ���׶η����ڴ�
//- ���������������ʼ��
class person
{
public:
	static int m_a;  //��������
private:
	static int m_b; //��̬��Ա����Ҳ���з���Ȩ�޵�
};
int person::m_a = 100; //�����ʼ��
int person::m_b = 200;
void test01()
{
	//1.ͨ���������
	person p;
	cout << p.m_a << endl;
	//2.ͨ�������
	cout << person::m_a << endl;
	//���ж�����ͬһ�ݶ�����
	person p1;
	p1.m_a = 200;
	cout << p1.m_a << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
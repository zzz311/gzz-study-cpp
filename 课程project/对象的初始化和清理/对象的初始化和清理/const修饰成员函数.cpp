#include<iostream>
using namespace std;
class person
{
public:
	void showperson() const  //const person const this
	{
		m_b = 30;  //�ڳ�Ա����ǰ���Ϲؼ���mutable �����޸ĳ�Ա������
		//this = NULL;  //������Ҳ�������޸�ָ���ָ��
		//this->m_age = 100; �������������޸�ָ��ָ���ֵ
	}
	void func()
	{

	}
	int m_age;
	mutable int m_b;
};
// ������
void test01()
{
	person p;
	p.showperson();
	
}
// ������
void test02()
{
	const person p1;
	//p1.m_age = 100; �����󲻿����޸Ķ��������
	p1.showperson(); //��������ó�����
	// p1.func(); �����Ե���������ͨ��Ա��������Ϊ��ͨ��Ա���������޸ĳ�Ա���ԣ�Υ���˳����������
}
int main()
{
	test01();
	system("pause");
	return 0;

}
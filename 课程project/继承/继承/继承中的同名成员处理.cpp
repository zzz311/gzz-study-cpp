#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		m_A = 300;
	}
	int func()
	{
		m_A = 100;
		return m_A;
	}
	void func(int num)
	{
		m_A = num;
		cout << "base��func(int num)�ĵ���" << endl;
	}
	int m_A;
};
class son:public base
{
public:
	son()
	{
		m_A = 400;
	}
	int func()
	{
		m_A = 200;
		return m_A;
	}
	int m_A;
};
//��Ա����ͬ��
void test01()
{
	son s1;
	cout <<"son�� m_A=" << s1.m_A << endl;
	cout << "base�� m_A=" << s1.base::m_A << endl; //������ʸ���ͬ����Ա����Ҫ�Ӹ���������
}
//��Ա����ͬ��
void test02()
{
	son s2;
	cout << "son�� func()=" << s2.func() << endl;
	cout << "base�� func����=" << s2.base::func() << endl; //������ʸ���ͬ����Ա����Ҫ�Ӹ���������
	//�����ͬ����Ա�����ص����������ͬ����Ա������Ҫ��������ſ��Է��ʸ����ͬ����Ա
	s2.base::func(100);
}
int main()
{ 
	test01();
	test02();
	system("pause");
	return 0;
}
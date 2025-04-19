#include<iostream>
using namespace std;
#include <string>

template<class T1, class T2>
class person;
//���������ʵ�֣�Ҫ�ñ�������ǰ֪�������Ĵ���
template<class T1, class T2>
void showperson1(person<T1, T2>& p)
{
	cout << p.m_name << p.m_age << endl;
}

template<class T1,class T2>
class person
{
	//ȫ�ֺ�������ʵ��
	friend void showperson(person<T1,T2>&p)
	{
		cout << p.m_name << p.m_age << endl;
	}

	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ������б�

	friend void showperson1<>(person<T1, T2>& p);
	

public:
	person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
private:
	T1 m_name;
	T2 m_age;
};

//ȫ�ֺ�������ʵ��
void test01()
{
	person<string, int>p1("��С��", 25);
	showperson(p1);
}

//ȫ�ֺ�������ʵ��
void test02()
{
	person<string, int>p2("�˹�", 18);
	showperson1(p2);
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<string>

class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};


//����ģ��
template<typename T>
bool mycompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯person�İ汾ʵ�ִ��룬���廯���ȵ���
template<>bool mycompare(person &p1, person &p2)
{
	if (p1.m_age == p2.m_age  && p1.m_name==p2.m_name )
	{
		return true;

	}
	else
	{
		return false;
	}
}

void test()
{
	int a = 10;
	int b = 20;
	mycompare(a, b);
	person p1("�˹�", 18);
	person p2("��С��",19);
	
	int ret= mycompare(p1, p2);
	if (ret == 1)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
}
int main()
{
	test();
	system("pause");
	system("cls");
}
#include<iostream>
using namespace std;
#include<string>
class person
{
public:
	person(int age, string name)
	{
		m_age = age;
		m_name = name;
	}
	//��ϵ�����==����
	bool operator==(person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int m_age;
	string m_name;
};
void test01()
{
	person p1(18, "�˴�");
	person p2(19, "�˴�");
	if (p1 == p2)
	{
		cout << "p1��p2����ȵ�" << endl;
	}
	else
	{
		cout << "p1��p2�����" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}

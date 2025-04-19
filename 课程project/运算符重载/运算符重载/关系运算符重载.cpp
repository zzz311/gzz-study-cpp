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
	//关系运算符==重载
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
	person p1(18, "邓川");
	person p2(19, "邓川");
	if (p1 == p2)
	{
		cout << "p1和p2是相等的" << endl;
	}
	else
	{
		cout << "p1和p2不相等" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}

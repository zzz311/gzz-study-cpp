#include<iostream>
using namespace std;
#include<string>

//������ģ��
template<class nametype,class agetype>
class person
{
public:
	person(nametype name,agetype age)
	{
		m_name = name;
		m_age = age;
	}
	nametype m_name;
	agetype m_age;
};

void test()
{
	person<string, int>p1("�˴�", 25);
	
	
	cout << p1.m_name << p1.m_age << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}
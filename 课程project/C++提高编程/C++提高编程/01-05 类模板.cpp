#include<iostream>
using namespace std;
#include<string>

//创建类模板
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
	person<string, int>p1("邓川", 25);
	
	
	cout << p1.m_name << p1.m_age << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}
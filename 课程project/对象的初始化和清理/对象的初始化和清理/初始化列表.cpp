#include<iostream>
using namespace std;
class Person
{
public:
	//初始化列表语法
	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
	{

	}
	int m_a;
	int m_b;
	int m_c;
};
void test01()
{
	Person p(10, 20, 30);
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	cout << p.m_c << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
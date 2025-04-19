#include<iostream>
using namespace std;
#include <string>

template<class T1, class T2>
class person;
//如果是类外实现，要让编译器提前知道函数的存在
template<class T1, class T2>
void showperson1(person<T1, T2>& p)
{
	cout << p.m_name << p.m_age << endl;
}

template<class T1,class T2>
class person
{
	//全局函数类内实现
	friend void showperson(person<T1,T2>&p)
	{
		cout << p.m_name << p.m_age << endl;
	}

	//全局函数类外实现
	//加空模板参数列表

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

//全局函数类内实现
void test01()
{
	person<string, int>p1("邓小猪", 25);
	showperson(p1);
}

//全局函数类外实现
void test02()
{
	person<string, int>p2("邓狗", 18);
	showperson1(p2);
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
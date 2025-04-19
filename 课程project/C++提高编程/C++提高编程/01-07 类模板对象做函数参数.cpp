#include<iostream>
using namespace std;
#include<string>

//创建类模板
template<class T1,class T2>
class person
{
public:
	person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}
	void showperson()
	{
		cout << this->m_name << this->m_age << endl;
	}
	T1 m_name;
	T2 m_age;
};

//指定传入的类型
void printperson1(person<string, int>&p)
{
	p.showperson();
}

void test01()
{
	person<string,int>p1("邓川",25);
	printperson1(p1);
}

//参数模板化
template<class T1,class T2>
void printperson2(person<T1, T2>& p)
{
	p.showperson();
	//可以看出编译器推导出的数据类型
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

void test02()
{
	person<string, int>p2("邓小猪", 26);
	printperson2(p2);
}

//整个类模板化
template<class T>
void printperson3(T& p)
{
	p.showperson();
	cout << "T的类型为：" << typeid(T).name() << endl;  //person
}

void test03()
{
	person<string, int>p3("邓狗", 18);
	printperson3(p3);
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<string>
//类对象作为类成员
//手机类
class Phone {
public:
	Phone(string pname) 
	{
		cout << "Phone的构造函数调用" << endl;
		m_Pname = pname;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
	string m_Pname;
};
//人类
class Person 
{
	//初始化
public:
	Person(string name, string pname) :m_name(name), m_Phone(pname)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person() 
	{
		cout << "Person的析构函数调用" << endl;
	}
	string m_name;
	Phone m_Phone;
};
void test01()
{
	Person p("邓川", "iphone14");
	cout << p.m_name << "拿着" << p.m_Phone.m_Pname << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
class base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
//公有继承
class son1: public base
{
public:
	void func1()
	{
		m_A = 10; //公有继承，父类中的公有成员子类可以访问，且仍然是公有属性
		m_B = 100; //公有继承，父类中的受保护成员子类可以访问，且仍然是受保护属性
		// m_C = 1000; //公有继承，父类中的私有成员子类不可以访问
		m_D = 1000;
	}
	int m_D;
};
void test01()
{
	son1 s1;
	s1.m_A = 1000;
	//s1.m_B = 1000; //类外不可以访问类内的受保护成员
	cout << sizeof(son1) << endl; //son1的内存空间大小
}
class son2 :protected base
{
	void func2()
	{
		m_A = 10; //保护继承，父类中的公有成员子类可以访问，属性变为受保护属性
		m_B = 100; //保护继承，父类中的受保护成员子类可以访问，且仍然是受保护属性
		// m_C = 1000; //保护继承，父类中的私有成员子类不可以访问
	}
};
void test02()
{
	son2 s2;
	//s2.m_A = 1000; //类外不可以访问类内的受保护成员
	//s2.m_B = 1000; //类外不可以访问类内的受保护成员
}
class son3 :private base
{
	void func3()
	{
		m_A = 10; //私有继承，父类的公有成员子类可以访问，属性变为私有属性
		m_B = 100; //私有继承，父类的公有成员子类可以访问，属性变为私有属性
		// m_C = 1000; //私有继承 父类的私有成员子类不可以访问
	}
};
void test03()
{
	son3 s3;
	//s3.m_A = 1000; //类外不可以访问类内的私有成员
	//s3.m_B = 1000; //类外不可以访问类内的私有成员
}
int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}


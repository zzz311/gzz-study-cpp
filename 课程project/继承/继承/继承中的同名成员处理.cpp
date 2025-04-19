#include<iostream>
using namespace std;
class base
{
public:
	base()
	{
		m_A = 300;
	}
	int func()
	{
		m_A = 100;
		return m_A;
	}
	void func(int num)
	{
		m_A = num;
		cout << "base下func(int num)的调用" << endl;
	}
	int m_A;
};
class son:public base
{
public:
	son()
	{
		m_A = 400;
	}
	int func()
	{
		m_A = 200;
		return m_A;
	}
	int m_A;
};
//成员属性同名
void test01()
{
	son s1;
	cout <<"son下 m_A=" << s1.m_A << endl;
	cout << "base下 m_A=" << s1.base::m_A << endl; //子类访问父类同名成员属性要加父类作用域
}
//成员函数同名
void test02()
{
	son s2;
	cout << "son下 func()=" << s2.func() << endl;
	cout << "base下 func（）=" << s2.base::func() << endl; //子类访问父类同名成员属性要加父类作用域
	//子类的同名成员会隐藏掉父类的所有同名成员，所以要加作用域才可以访问父类的同名成员
	s2.base::func(100);
}
int main()
{ 
	test01();
	test02();
	system("pause");
	return 0;
}
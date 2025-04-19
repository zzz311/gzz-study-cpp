#include<iostream>
using namespace std;
//静态成员函数
//- 所有对象共享同一个函数
//-静态成员函数只能访问静态成员变量
class person
{
public:
	static void func()
	{
		cout << m_A << endl;  
		//cout << m_b << endl; 静态成员函数不能访问非静态成员变量
	}
	static int m_A;
	int m_b;
private:
	static void func1()
	{
		cout << m_A << endl;
	}

};
int person::m_A = 100;

int main()
{
  //1.通过对象访问
	person p;
	p.func();
  //2.通过类访问
	person::func();
	//person::func1(); 有访问权限
	system("pause");
	return 0;
}
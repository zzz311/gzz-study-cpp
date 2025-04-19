#include<iostream>
using namespace std;
//静态成员变量
//-所有对象共享同一份儿数据
//- 在编译阶段分配内存
//- 类内声明，类外初始化
class person
{
public:
	static int m_a;  //类内声明
private:
	static int m_b; //静态成员变量也是有访问权限的
};
int person::m_a = 100; //类外初始化
int person::m_b = 200;
void test01()
{
	//1.通过对象访问
	person p;
	cout << p.m_a << endl;
	//2.通过类访问
	cout << person::m_a << endl;
	//所有对象共享同一份儿数据
	person p1;
	p1.m_a = 200;
	cout << p1.m_a << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
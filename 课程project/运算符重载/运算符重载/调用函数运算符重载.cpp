#include<iostream>
using namespace std;
class myprint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};
class myadd
{
public:
	//（）运算符重载非常灵活，按照所需去书写
	int operator()(int n1, int n2)
	{
		return n1 + n2;
	}
};
void test01()
{
	//重载的（）操作运算符也称为仿函数
	myprint myprint;
	myprint("hello world");
}
void test02()
{
	myadd Myadd;
	int ref=Myadd(10, 10);
	cout << "ref=" << ref << endl;
	//匿名对象调用
	cout << myadd()(10, 10) << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
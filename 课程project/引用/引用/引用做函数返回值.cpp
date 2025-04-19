#include<iostream>
using namespace std;
//不要返回局部变量的引用
int& test01()
{
	int a = 10; //局部变量
	return a;
}
//返回静态变量引用
int& test02()
{
	static int a = 10;  //静态变量在全局区 由操作系统释放
	return a;
}
int main()
{
	//int& ref = test01();
	//cout << "ref=" << ref << endl;  //函数结束后就编译器给释放了
	int& ref = test02();
	cout << "ref=" << ref << endl; //10
	cout << "ref=" << ref << endl;
	//函数做左值
	test02() = 1000;
	cout << "ref=" << ref << endl; //1000
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}

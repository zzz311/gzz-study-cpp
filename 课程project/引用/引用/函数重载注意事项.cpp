#include<iostream>
using namespace std;
//引用作为函数重载的条件
void func(int& a)
{
	cout << "int func(int& a)" << endl;
}
void func(const int& a)
{
	cout << "const int func(int& a)" << endl;
}
void add(int a, int b = 10)
{
	
	cout << "函数3" << endl;
	
	
}
void add1(int a)
{

	cout << "函数4" << endl;

}
int main()
{
	int a = 10;
	//func(a);  // a为变量 可读可写 所以是调用了第一个
	//func(10); //10为常量 const修饰int 变为常量引用 所以调用第二个
	add(10); //函数3和函数4都可被调用 出现二义性

	
	system("pause");
	return 0;
}
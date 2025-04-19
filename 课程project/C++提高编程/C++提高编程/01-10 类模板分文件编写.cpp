#include<iostream>
using namespace std;
#include<string>
//问题：类模板成员函数创建时是在调用阶段，导致分文件编写时调用不到

//解决方式1 
//#include"person.cpp" //直接包含.cpp源文件

//解决方式2
//将函数声明和定义写到一起，包含.hpp文件
#include"person.hpp"


void test()
{
	person<string, int>p1("邓川", 25);
	p1.showperson();
}

int main()
{
	test();
	system("pause");
	return 0;
}
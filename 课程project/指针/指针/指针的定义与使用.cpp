#include<iostream>
using namespace std;
int main()
{
	int a = 10;  //定义变量
	int * p;     //定义指针
	p = &a;    //指针就是地址
	// a=*p  都是变量值
	cout << "a=" << a << endl;
	cout <<"*p=" << *p << endl;
	// p=&a  都是地址
	cout << "a的地址是" << &a << endl;
	cout << "p=" << p << endl;
	cout << "sizeof(p)=" << sizeof(p) << endl;
	// 指针类型的占用内存空间都为4个字节
	cout << "sizeof(int *)=" << sizeof(int *) << endl;
	cout << "sizeof(float *)=" << sizeof(float *) << endl;
	cout << "sizeof(double *)=" << sizeof(double *) << endl;
	cout << "sizeof(char *)=" << sizeof(char *) << endl;
	*p = 100;
	cout << a << endl;  //解引用 找到指针指向的内存空间的数据
	system("pause");
	return 0;
}
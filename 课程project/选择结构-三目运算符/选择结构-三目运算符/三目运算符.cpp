#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 100;
	int c = 0;

	c = (a > b ? a:b); //表达式1？表达式2：表达式3
	
	cout << "c=" << c << endl;

	(a > b ? a : b) = 1000; //三目运算符返回的是变量，可以重新赋值
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;

}

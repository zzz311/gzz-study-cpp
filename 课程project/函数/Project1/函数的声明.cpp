#include<iostream>
using namespace std;
//函数的声明
int max(int a, int b); //最大值函数声明
int main()
{
	
		int num1 = 10;
	    int num2 = 20;
		max(num1, num2);
		cout << max(num1, num2) << endl;

	system("pause");
	return 0;
}
int max(int a, int b)//最大值函数定义
{
	return a > b ? a : b;
}
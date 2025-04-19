#include<iostream>
using namespace std;
//定义交换函数
void swap (int num1, int num2) 
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	//如果函数不需要返回值，声明的时候可以写void，且不用写return
}
int main()
{
	int a = 1;
	int b = 2;
	 swap(a, b);  //调用函数
	 cout << "a=" << a << endl;
	 cout << "b=" << b << endl; //在发生值传递时，形参发生变化，实参的值不变
	system("pause");
	return 0;
}
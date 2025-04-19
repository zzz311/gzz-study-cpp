#include<iostream>
using namespace std;
int add(int num1, int num2) //这里的参数列表中的参数都是形参 形式参数
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	int a = 1;
	int b = 2;
	int c = add(a, b);  //调用add函数 这里的a，b 是实际参数，简称实参
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}
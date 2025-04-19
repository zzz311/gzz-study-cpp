#include<iostream>
using namespace std;
void swap01(int a, int b) //值传递 不改变实参
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void swap02(int* a, int* b) //地址传递 改变实参
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a=" << *a << endl;
	cout << "b=" << *b << endl;
}
void swap03(int& a, int& b) //引用传递 改变实参
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int main() {
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//swap02(&a, &b);
	swap03(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}
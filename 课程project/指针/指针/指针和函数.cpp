#include<iostream >
using namespace std;

	//值传递 不改变形参的值
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
  //地址传递 可以改变实参的值
void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	swap01(a, b);  //值传递
	cout << "a="<< a << endl; //10
	cout << "b=" << b << endl;  //20
	swap02(&a, &b);   //地址传递改变实参
	cout << "a=" << a << endl; //20
	cout << "b=" << b << endl;  //10
	system("pause");
	return 0;
}
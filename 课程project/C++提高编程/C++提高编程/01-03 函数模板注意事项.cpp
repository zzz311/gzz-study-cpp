#include<iostream>
using namespace std;

//普通函数
int myadd01(int a, int b)
{
	return a + b;
}

//函数模板
template<typename T>
T myadd02(T a, T b)
{
	return a + b;
}

void test()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//普通函数可以发生隐式类型转换
	cout<<myadd01(a, c)<<endl;// 109  a-97 c-99 99+10=109

	//函数模板 自动类型推导 无法进行隐式类型转换
	//cout << myadd02(b, c) << endl; 无法确定 T 是 int 还是 char
	// 
	//函数模板 显示指定类型 可以进行隐式类型转换
	cout << myadd02<int>(a, c) << endl; //109
}
int main()
{
	test();
	system("pause");
	system("cls");
}
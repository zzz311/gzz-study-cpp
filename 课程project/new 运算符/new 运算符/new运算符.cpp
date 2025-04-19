#include <iostream>
using namespace std;

//new运算符的使用 
//创建数据
int* func()
{
	int* p = new int(10); //在堆区创建数据  new返回的是该数据类型的指针
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
}
//创建数组
void test02()
{
	int* arr = new int[10];
	for (int i = 0;i < 10;i++)
	{
		arr[i] = i + 60;
	}
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
}




int main()
{
	//test01();
	test02();




	system("pause");
	return 0;
}
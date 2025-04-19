#include<iostream>
using namespace std;
//无参无返
void test01()
{
	cout << "this is test01" << endl;
}
//有参无返
void test02(int a)
{
	cout << "test02 a=" << a << endl;
}
//无参有返
int test03()
{
	cout << "test03 " << endl;
	return 100; //返回一个值
}
//有参有返
int test04(int b)
{
	cout << "test04 b=" << b << endl;
	return b;
}
int main()
{
	//调用test01
	test01();

	//调用test02
	test02(100);
	
	//调用test03
	int num = test03();
	cout << "num=" << num << endl;

	//调用test04
	int c= test04 (100);
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}

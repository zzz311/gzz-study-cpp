#include<iostream>
using namespace std;
//�޲��޷�
void test01()
{
	cout << "this is test01" << endl;
}
//�в��޷�
void test02(int a)
{
	cout << "test02 a=" << a << endl;
}
//�޲��з�
int test03()
{
	cout << "test03 " << endl;
	return 100; //����һ��ֵ
}
//�в��з�
int test04(int b)
{
	cout << "test04 b=" << b << endl;
	return b;
}
int main()
{
	//����test01
	test01();

	//����test02
	test02(100);
	
	//����test03
	int num = test03();
	cout << "num=" << num << endl;

	//����test04
	int c= test04 (100);
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;
//常量引用 用来修饰形参 防止误操作
void showvalue( const int& a)
{
	//a=20
	cout << a << endl;
}
int main()
{
	
	//int &ref = 10  错误 
	//const int& ref = 10;  // 系统做了这样的操作 int temp=10; int& ref = temp; 所以成立。  
	int a = 10;
	showvalue(a);

	system("pause");
	return 0;
}
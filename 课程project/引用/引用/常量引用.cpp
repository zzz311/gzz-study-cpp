#include<iostream>
using namespace std;
//�������� ���������β� ��ֹ�����
void showvalue( const int& a)
{
	//a=20
	cout << a << endl;
}
int main()
{
	
	//int &ref = 10  ���� 
	//const int& ref = 10;  // ϵͳ���������Ĳ��� int temp=10; int& ref = temp; ���Գ�����  
	int a = 10;
	showvalue(a);

	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
int add(int num1, int num2) //����Ĳ����б��еĲ��������β� ��ʽ����
{
	int sum = num1 + num2;
	return sum;
}
int main()
{
	int a = 1;
	int b = 2;
	int c = add(a, b);  //����add���� �����a��b ��ʵ�ʲ��������ʵ��
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}
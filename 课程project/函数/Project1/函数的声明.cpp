#include<iostream>
using namespace std;
//����������
int max(int a, int b); //���ֵ��������
int main()
{
	
		int num1 = 10;
	    int num2 = 20;
		max(num1, num2);
		cout << max(num1, num2) << endl;

	system("pause");
	return 0;
}
int max(int a, int b)//���ֵ��������
{
	return a > b ? a : b;
}
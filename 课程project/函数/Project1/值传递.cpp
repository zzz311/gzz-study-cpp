#include<iostream>
using namespace std;
//���彻������
void swap (int num1, int num2) 
{
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	//�����������Ҫ����ֵ��������ʱ�����дvoid���Ҳ���дreturn
}
int main()
{
	int a = 1;
	int b = 2;
	 swap(a, b);  //���ú���
	 cout << "a=" << a << endl;
	 cout << "b=" << b << endl; //�ڷ���ֵ����ʱ���βη����仯��ʵ�ε�ֵ����
	system("pause");
	return 0;
}
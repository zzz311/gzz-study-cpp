#include<iostream>
using namespace std;
//������Ϊ�������ص�����
void func(int& a)
{
	cout << "int func(int& a)" << endl;
}
void func(const int& a)
{
	cout << "const int func(int& a)" << endl;
}
void add(int a, int b = 10)
{
	
	cout << "����3" << endl;
	
	
}
void add1(int a)
{

	cout << "����4" << endl;

}
int main()
{
	int a = 10;
	//func(a);  // aΪ���� �ɶ���д �����ǵ����˵�һ��
	//func(10); //10Ϊ���� const����int ��Ϊ�������� ���Ե��õڶ���
	add(10); //����3�ͺ���4���ɱ����� ���ֶ�����

	
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int a = 10;  //�������
	int * p;     //����ָ��
	p = &a;    //ָ����ǵ�ַ
	// a=*p  ���Ǳ���ֵ
	cout << "a=" << a << endl;
	cout <<"*p=" << *p << endl;
	// p=&a  ���ǵ�ַ
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "p=" << p << endl;
	cout << "sizeof(p)=" << sizeof(p) << endl;
	// ָ�����͵�ռ���ڴ�ռ䶼Ϊ4���ֽ�
	cout << "sizeof(int *)=" << sizeof(int *) << endl;
	cout << "sizeof(float *)=" << sizeof(float *) << endl;
	cout << "sizeof(double *)=" << sizeof(double *) << endl;
	cout << "sizeof(char *)=" << sizeof(char *) << endl;
	*p = 100;
	cout << a << endl;  //������ �ҵ�ָ��ָ����ڴ�ռ������
	system("pause");
	return 0;
}
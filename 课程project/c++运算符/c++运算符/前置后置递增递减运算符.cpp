#include<iostream>
using namespace std;
int main() {

	int a1 = 5;
	int a2 = a1++; //���õ��� �ȼ����ټ�1
	
	cout << "a1*a2=" << a1 * a2 << endl; //a1*a2=30  
	cout << "a1=" << a1 << endl; //6
	cout << "a2=" << a2 << endl; //5
	int b1 = 5;
	int b2 = ++b1; //ǰ�õ��� �ȼ�1����� ��������Ǹ���ֵ�ţ�����
	cout << "b1*b2=" << b1 * b2 << endl; // b1*b2=36 
	cout << "b1=" << b1 << endl; //6
	cout << "b2=" << b2 << endl; //6

	int c1 = 5;
	int c2 = c1--; //���õݼ� �ȼ����ټ�1

	cout << "c1*c2=" << c1 * c2 << endl; //c1*c2=20  
	cout << "c1=" << c1 << endl; //4
	cout << "c2=" << c2 << endl; //5
	int d1 = 5;
	int d2 = --d1; //ǰ�õ��� �ȼ�1����� ��������Ǹ���ֵ�ţ�����
	cout << "d1*d2=" << d1 * d2 << endl; // d1*d2=16
	cout << "d1=" << d1 << endl; //4
	cout << "d2=" << d2 << endl; //4
	system("pause");
	return 0;

}
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 100;
	int c = 0;

	c = (a > b ? a:b); //���ʽ1�����ʽ2�����ʽ3
	
	cout << "c=" << c << endl;

	(a > b ? a : b) = 1000; //��Ŀ��������ص��Ǳ������������¸�ֵ
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	system("pause");
	return 0;

}

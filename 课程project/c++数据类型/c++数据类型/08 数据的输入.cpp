#include <iostream>
#include <string>
using namespace std;
int main() {

    //��������
	int a = 0;
	cout << "���������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "a=" << a << endl;

	//����������
	float f = 3.14f;
	cout << "�����븡���ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "f=" << f << endl;

	//�ַ�������
	char ch1 = 'a';
	cout << "�������ַ��ͱ���ch1��ֵ��" << endl;
	cin >> ch1;
	cout << "ch1=" <<ch1 << endl;

	//�ַ���������
	string str1 = "hello world";
	cout << "�������ַ����ͱ���str1��ֵ��" << endl;
	cin >> str1;
	cout << "str1=" << str1 << endl;

	//����������
	bool flag = false;
	cout << "�����벼���ͱ���flag��ֵ��" << endl;
	cin >> flag;
	cout << "flag=" << flag << endl;

	system("pause");
	return 0;
}
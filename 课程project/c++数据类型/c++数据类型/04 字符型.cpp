#include <iostream>
using namespace std;

int main() {

	char ch = 'a';
	
	cout << " ch = " << ch << endl;

	cout << "char��ռ���ڴ�ռ�Ϊ" << sizeof(char) << endl; //��ռ�ڴ�ռ�Ϊ1�ֽ�

	// char ch = "abc" ��������˫����
	// char ch = 'abcdef' �������ڲ������ж���ַ�

	cout << "a = " << (int)ch << endl; //��Ӧ��ASCII��



	system("pause");

	return 0;
}
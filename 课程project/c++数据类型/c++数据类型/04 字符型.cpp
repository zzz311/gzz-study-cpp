#include <iostream>
using namespace std;

int main() {

	char ch = 'a';
	
	cout << " ch = " << ch << endl;

	cout << "char所占用内存空间为" << sizeof(char) << endl; //所占内存空间为1字节

	// char ch = "abc" 不可以用双引号
	// char ch = 'abcdef' 单引号内不可以有多个字符

	cout << "a = " << (int)ch << endl; //对应的ASCII码



	system("pause");

	return 0;
}
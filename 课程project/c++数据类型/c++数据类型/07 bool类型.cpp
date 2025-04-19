#include <iostream>
#include <string>
using namespace std;

int main() {

	//构建布尔变量
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "bool类型占用内存空间为：" << sizeof(flag ) << endl;

	system("pause");

	return 0;
}
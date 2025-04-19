#include <iostream>
#include <string>
using namespace std;
int main() {

    //整型输入
	int a = 0;
	cout << "请输入整型变量a的值：" << endl;
	cin >> a;
	cout << "a=" << a << endl;

	//浮点型输入
	float f = 3.14f;
	cout << "请输入浮点型变量f的值：" << endl;
	cin >> f;
	cout << "f=" << f << endl;

	//字符型输入
	char ch1 = 'a';
	cout << "请输入字符型变量ch1的值：" << endl;
	cin >> ch1;
	cout << "ch1=" <<ch1 << endl;

	//字符串型输入
	string str1 = "hello world";
	cout << "请输入字符串型变量str1的值：" << endl;
	cin >> str1;
	cout << "str1=" << str1 << endl;

	//布尔型输入
	bool flag = false;
	cout << "请输入布尔型变量flag的值：" << endl;
	cin >> flag;
	cout << "flag=" << flag << endl;

	system("pause");
	return 0;
}
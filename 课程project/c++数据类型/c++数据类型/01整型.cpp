#include <iostream>
using namespace std;

int main() {
	//整型
	
	//短整型 （-32768~32767）
	short num1 = -32768;
	
	//整型 
	int num2 = 10;
	
	//长整型 
	long num3 = 10;
	
	//长长整型 
	long long num4 = 10;

	cout << "num1=" << sizeof(num1) << endl;
	cout << "num2=" << sizeof(num2) << endl;
	cout << "num3=" << sizeof(num3) << endl;
	cout << "num4=" << sizeof(num4) << endl;

	system("pause");
	return 0;
}   
    
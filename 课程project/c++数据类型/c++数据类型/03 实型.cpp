#include <iostream>
using namespace std;

int main() {
	
	float f1 = 3.14f;

	double d1 = 3.14;

	cout << " f1 = " << f1 << endl  ;

	cout << " d1 = " << d1 << endl  ;

	cout << " float ռ���ڴ�ռ�Ϊ " << sizeof(f1) << endl  ;

	cout << " double ռ���ڴ�ռ�Ϊ " << sizeof(d1) << endl ;

	//��ѧ������

	float f3 = 3e2; // 300

	float f4 = 3e-2; //0.03

	cout << " f3 = " << f3 << endl;

	cout << " f4 = " << f4 << endl;

	system("pause");

	return 0;

}
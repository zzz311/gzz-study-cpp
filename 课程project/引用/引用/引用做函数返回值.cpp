#include<iostream>
using namespace std;
//��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10; //�ֲ�����
	return a;
}
//���ؾ�̬��������
int& test02()
{
	static int a = 10;  //��̬������ȫ���� �ɲ���ϵͳ�ͷ�
	return a;
}
int main()
{
	//int& ref = test01();
	//cout << "ref=" << ref << endl;  //����������ͱ��������ͷ���
	int& ref = test02();
	cout << "ref=" << ref << endl; //10
	cout << "ref=" << ref << endl;
	//��������ֵ
	test02() = 1000;
	cout << "ref=" << ref << endl; //1000
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}

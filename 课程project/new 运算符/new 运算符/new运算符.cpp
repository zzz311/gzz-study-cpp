#include <iostream>
using namespace std;

//new�������ʹ�� 
//��������
int* func()
{
	int* p = new int(10); //�ڶ�����������  new���ص��Ǹ��������͵�ָ��
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
}
//��������
void test02()
{
	int* arr = new int[10];
	for (int i = 0;i < 10;i++)
	{
		arr[i] = i + 60;
	}
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
}




int main()
{
	//test01();
	test02();




	system("pause");
	return 0;
}
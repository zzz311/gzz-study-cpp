#include<iostream>
using namespace std;

//��ͨ����
int myadd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<typename T>
T myadd02(T a, T b)
{
	return a + b;
}

void test()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	//��ͨ�������Է�����ʽ����ת��
	cout<<myadd01(a, c)<<endl;// 109  a-97 c-99 99+10=109

	//����ģ�� �Զ������Ƶ� �޷�������ʽ����ת��
	//cout << myadd02(b, c) << endl; �޷�ȷ�� T �� int ���� char
	// 
	//����ģ�� ��ʾָ������ ���Խ�����ʽ����ת��
	cout << myadd02<int>(a, c) << endl; //109
}
int main()
{
	test();
	system("pause");
	system("cls");
}
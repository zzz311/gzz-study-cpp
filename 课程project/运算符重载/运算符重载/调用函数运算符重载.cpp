#include<iostream>
using namespace std;
class myprint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};
class myadd
{
public:
	//������������طǳ�����������ȥ��д
	int operator()(int n1, int n2)
	{
		return n1 + n2;
	}
};
void test01()
{
	//���صģ������������Ҳ��Ϊ�º���
	myprint myprint;
	myprint("hello world");
}
void test02()
{
	myadd Myadd;
	int ref=Myadd(10, 10);
	cout << "ref=" << ref << endl;
	//�����������
	cout << myadd()(10, 10) << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
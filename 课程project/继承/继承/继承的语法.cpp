#include<iostream>
using namespace std;
class basepage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���½��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ���������...�������ײ���" << endl;
	}
	void lefter()
	{
		cout << "python��Java��C++...��������벿�֣�" << endl;
	}
};
//�̳��﷨
class python : public basepage
{
public:
	void content()
	{
		cout << "python" << endl;
	}
};
class Java : public basepage
{
public:
	void content()
	{
		cout << "Java" << endl;
	}
};
class CPP : public basepage
{
public:
	void content()
	{
		cout << "CPP" << endl;
	}
};
void test01()
{
	python py;
	py.header();
	py.lefter();
	py.footer();
	py.content();
	cout << "----------------" << endl;
	Java ja;
	ja.header();
	ja.lefter();
	ja.footer();
	ja.content();
	cout << "----------------" << endl;
	CPP cp;
	cp.header();
	cp.lefter();
	cp.footer();
	cp.content();
	cout << "----------------" << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
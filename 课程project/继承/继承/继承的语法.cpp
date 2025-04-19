#include<iostream>
using namespace std;
class basepage
{
public:
	void header()
	{
		cout << "首页、公开课、登陆、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作...（公共底部）" << endl;
	}
	void lefter()
	{
		cout << "python、Java、C++...（公共左半部分）" << endl;
	}
};
//继承语法
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
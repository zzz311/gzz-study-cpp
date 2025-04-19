#include <iostream>
using namespace std;
class Myinteger
{
	friend ostream& operator<< (ostream& cout, Myinteger myint);
public:
	Myinteger()
	{
		m_num = 0;
	}
	//重载前置++运算符
	Myinteger& operator++ ()
	{
		//先进行++运算
		m_num++;
		//再做一个原值返回
		return *this;
	}
	//重载后置++运算符
	Myinteger operator++(int)
	{
		//先记录当前值
		Myinteger temp = *this;
		//再进行++运算
		m_num++;
		//返回值
		return temp;
	}
private:
	int m_num;
};
// 重载左移运算符
ostream& operator<< (ostream& cout, Myinteger myint)
{
	cout << myint.m_num << endl;
	return cout;
}
void test01()
{
	Myinteger myint;
	
	cout << ++(++myint) << endl;
}
void test02()
{
	Myinteger myint;

	cout << myint++<< endl; //0
	cout << myint << endl; //1
	cout << myint++ << endl;  //1
	cout << myint << endl; //2
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}



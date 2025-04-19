#include<iostream>
using namespace std;
#include<string>
//普通写法
class Calculator
{
public:
	int getresult(string oper)
	{
		if (oper == "+")
			return num1 + num2;
		else if (oper == "-")
			return num1 - num2;
		else if (oper == "*")
			return num1 * num2;
	}
	int num1;
	int num2;
};
//如果想扩展新的功能，需要修改源码；
// 在真实开发中，提倡 开闭原则
// 开闭原则:对扩展进行开发，对修改进行关闭。

//多态写法
//抽象类
class abstractcalculator
{
public:
	virtual int getresult() = 0;//虚函数
	
	int m_num1;
	int m_num2;
};
//加法类
class addcalculator:public abstractcalculator
{
	int getresult()
	{
		return m_num1 + m_num2;
	}
};
//减法类
class subcalculator :public abstractcalculator
{
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//乘法类
class mulcalculator :public abstractcalculator
{
	int getresult()
	{
		return m_num1 * m_num2;
	}
};

int dowork(abstractcalculator* abs) //abstractcalcutor *abs=new addcalculator abstractcalcutor *abs= add
{
	
	return abs->getresult();
}

void test03()
{
	//实例化
	addcalculator* add = new addcalculator;
	add->m_num1 = 10;
	add->m_num2 = 20;
	int a=dowork(add); //父类函数指向子类对象
	cout << a << endl;

	subcalculator* sub = new subcalculator;
	sub->m_num1 = 10;
	sub->m_num2 = 20;
	int b = dowork(sub);
	cout << b << endl;


}

//void test01()
//{
//	Calculator c;
//	c.num1 = 10;
//	c.num2 = 10;
//	int temp = c.getresult(" +");
//	cout << c.num1 << "+" << c.num2 << "=" << c.getresult("+" ) << endl;
//	cout << c.num1 << "-" << c.num2 << "=" << c.getresult("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getresult("*") << endl;
//}
//void test02()
//{
//	//加法
//	abstractcalculator* abs = new addcalculator; 父类指针指向子类对象
//	abs->m_num1 = 100;
//	abs->m_num2 = 100;
//	abs->getresult();
//	cout << abs->m_num1 << "+" <<abs->m_num2 << "=" << abs->getresult() << endl;
//	delete abs;
//
//	//减法
//	 abs = new subcalculator; //不要产生重定义问题 
//	abs->m_num1 = 100;
//	abs->m_num2 = 100;
//	abs->getresult();
//	cout << abs->m_num1 << "-" << abs->m_num2 << "=" << abs->getresult() << endl;
//	delete abs;
//
//	//乘法
//	 abs = new mulcalculator;
//	abs->m_num1 = 100;
//	abs->m_num2 = 100;
//	abs->getresult();
//	cout << abs->m_num1 << "*" << abs->m_num2 << "=" << abs->getresult() << endl;
//	delete abs;
//}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
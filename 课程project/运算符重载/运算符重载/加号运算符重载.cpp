#include<iostream>
using namespace std;
class person
{
public:
	//成员函数重载+号
	person operator+ (person &p)
	{
		person temp;
		temp.m_A = this->m_A + p.m_A;
	    temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	int m_A;
	int m_B;
};
//全局函数重载+号
//person operator+(person& p1, person&p2)
//{
//	person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

// 运算符重载也可以发生函数重载
person operator+(person& p1, int num)
{
	person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
void test01()
{
	person p1;
	p1.m_A = 10;
	p1.m_B = 20;
	person p2;
	p2.m_A = 30;
	p2.m_B = 40;
	//operator+ 加号重载 使得自定义类型可以相加
	person p3 = p1 + p2;
	cout << p3.m_A << endl;
	cout << p3.m_B << endl;
}
void test02()
{
	person p1;
	p1.m_A = 10;
	p1.m_B = 20;
	person p2;
	p2.m_A = 30;
	p2.m_B = 40;
	person p3 = p1 + p2;
	person p4 = p1 + 10;
	
	cout << p3.m_A << endl;
	cout << p3.m_B << endl;
	cout << p4.m_A << endl;
	cout << p4.m_B << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
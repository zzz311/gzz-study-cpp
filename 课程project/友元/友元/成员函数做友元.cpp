#include <iostream>
using namespace std;
#include <string>
class building;
class goodguy
{
public:
	goodguy();
	void visit();

	building* m_building;
};
class building
{
	//goodguy类中的 成员函数visit()是building类的友元，故可以访问私有内容
	friend void goodguy::visit();
public:
	building();
public:
	string m_sitting;
private:
	string m_bedroom;
};
//成员函数类外定义

building::building()
{
	m_sitting = "客厅";
	m_bedroom = "卧室";
}
goodguy::goodguy()
{
	m_building = new building;
}
void goodguy::visit()
{
	cout << "邓川正在访问：" << m_building->m_sitting << endl;
	cout << "邓川正在访问：" << m_building->m_bedroom << endl;
}
void test01()
{
	goodguy gg;
	gg.visit();
}
int main()
{
	test01();
	system("pause");
	return 0;
}

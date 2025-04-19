#include<iostream>
using namespace std;
#include<string>
class building;
class goodguy
{
public:
	goodguy();
	void visit();
private:
	building* m_building;
};

class building
{
	//goodguy类是building类的友元
	friend class goodguy;
public:
	building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//类内声明，类外定义
goodguy::goodguy()
{
	//创建建筑物对象
	m_building = new building;
}
void goodguy::visit()
{
	cout << "邓川正在访问：" << m_building->m_sittingroom << endl;
	cout << "邓川正在访问：" << m_building->m_bedroom << endl;
}
building::building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
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

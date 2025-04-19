#include<iostream>
using namespace std;
#include <string>
class building
{
	//goodguy()全局函数是building类的友元，可以访问类中的私有成员。
	friend void goodguy(building* building);
public:
	building()
	{
		m_Sittingroom = "客厅";
		m_bedroom = "卧室";
	}
	string m_Sittingroom;
private:
	string m_bedroom;
};
void goodguy(building* building)
{
	cout << "邓川正在访问：" << building->m_Sittingroom << endl;
	cout << "邓川正在访问：" << building->m_bedroom << endl;
}
void test01()
{
	building b;
	goodguy(&b);
}
int main()
{
	test01();
	system("pause");
	return 0;
}


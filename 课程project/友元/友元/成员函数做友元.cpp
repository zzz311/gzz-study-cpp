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
	//goodguy���е� ��Ա����visit()��building�����Ԫ���ʿ��Է���˽������
	friend void goodguy::visit();
public:
	building();
public:
	string m_sitting;
private:
	string m_bedroom;
};
//��Ա�������ⶨ��

building::building()
{
	m_sitting = "����";
	m_bedroom = "����";
}
goodguy::goodguy()
{
	m_building = new building;
}
void goodguy::visit()
{
	cout << "�˴����ڷ��ʣ�" << m_building->m_sitting << endl;
	cout << "�˴����ڷ��ʣ�" << m_building->m_bedroom << endl;
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

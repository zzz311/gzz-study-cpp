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
	//goodguy����building�����Ԫ
	friend class goodguy;
public:
	building();
public:
	string m_sittingroom;
private:
	string m_bedroom;
};
//�������������ⶨ��
goodguy::goodguy()
{
	//�������������
	m_building = new building;
}
void goodguy::visit()
{
	cout << "�˴����ڷ��ʣ�" << m_building->m_sittingroom << endl;
	cout << "�˴����ڷ��ʣ�" << m_building->m_bedroom << endl;
}
building::building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
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

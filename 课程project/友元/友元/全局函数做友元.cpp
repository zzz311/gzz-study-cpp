#include<iostream>
using namespace std;
#include <string>
class building
{
	//goodguy()ȫ�ֺ�����building�����Ԫ�����Է������е�˽�г�Ա��
	friend void goodguy(building* building);
public:
	building()
	{
		m_Sittingroom = "����";
		m_bedroom = "����";
	}
	string m_Sittingroom;
private:
	string m_bedroom;
};
void goodguy(building* building)
{
	cout << "�˴����ڷ��ʣ�" << building->m_Sittingroom << endl;
	cout << "�˴����ڷ��ʣ�" << building->m_bedroom << endl;
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


#include<iostream>
using namespace std;
#include<string>
//���һ������
class person
{
	//Ȩ��
public:
	//����
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	//��Ϊ
	void showperson() //���ڶ����Է���
	{
		m_name = "����";
		m_car = "Ħ�г�";
		m_password = 2370718;
	}
};
int main()
{
	person p1;
	p1.m_name = "����"; //����Ȩ����
	//p1.m_car = "��"; ����Ȩ���������ⲻ���Է���
	//p1.m_passwor="123456"; ˽��Ȩ���������ⲻ�ɷ���
	system("pause");
	return 0;
}
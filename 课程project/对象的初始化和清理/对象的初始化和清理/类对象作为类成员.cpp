#include<iostream>
using namespace std;
#include<string>
//�������Ϊ���Ա
//�ֻ���
class Phone {
public:
	Phone(string pname) 
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_Pname = pname;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
	string m_Pname;
};
//����
class Person 
{
	//��ʼ��
public:
	Person(string name, string pname) :m_name(name), m_Phone(pname)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person() 
	{
		cout << "Person��������������" << endl;
	}
	string m_name;
	Phone m_Phone;
};
void test01()
{
	Person p("�˴�", "iphone14");
	cout << p.m_name << "����" << p.m_Phone.m_Pname << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
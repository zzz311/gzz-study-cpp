#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "��ͨ���캯������" << endl;
	}
	Person(int age,int height)
	{
		cout << "�вι��캯������" << endl;
		m_Age = age;
		m_Height = new int(height);  //�ڶ��������ڴ棬��ָ��ȥ���ն���������
	}
	Person(const Person& p) 
	{
		cout << "�������캯������" << endl;
		m_Age = p.m_Age;
		// m_Height=p.m_Height  �����ݿ��ٵ�������Ҫ���������ֹ�ڴ��ظ��ͷŵ�����
		//���
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		cout << "������������" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		//�������� ���������ٵĴ������ͷŲ���
	}
	int m_Age;
	int* m_Height;  //��ָ�� ����ΪҪ�����ݿ��ٵ����� //���ж�������Ϊָ�루�ڶ������٣���ʱ��һ��Ҫ�Լ��ṩ�������캯��
};
void test()
{
	Person p1(16, 180);
	cout << "����Ϊ��" << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "����Ϊ��" << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}


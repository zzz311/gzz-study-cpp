#include<iostream>
using namespace std;
class person
{
	friend void test01();
public:
	person(int age)
	{
		m_age = new int(age);
	}
	~person()  //�ͷŶ������ٵ��ڴ�
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//��������ķ�ʽ�����ǳ������ɵĶ����ظ��ͷ��ڴ������
	//���ظ�ֵ�����
	person& operator= (person& p)
	{
		//�������ṩǳ����
		//m_age = p.m_age;
		// Ӧ�����ж϶������Ƿ������ԣ����У�Ӧ���ͷ�
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//���
		m_age = new int(*p.m_age); //������ȥ�����µ��ڴ�ռ�
		//���ض�����
		return *this;
	}
private:
	int* m_age;
};
void test01()
{
	person p1(10);
	person p2(15);
	person p3(20);
	p1 =p3= p2;  //��ֵ����
	cout << "p1=" << *p1.m_age << endl;
	cout << "p2=" << *p2.m_age << endl;
	cout << "p3=" << *p3.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<string>

//������ģ��
template<class T1,class T2>
class person
{
public:
	person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}
	void showperson()
	{
		cout << this->m_name << this->m_age << endl;
	}
	T1 m_name;
	T2 m_age;
};

//ָ�����������
void printperson1(person<string, int>&p)
{
	p.showperson();
}

void test01()
{
	person<string,int>p1("�˴�",25);
	printperson1(p1);
}

//����ģ�廯
template<class T1,class T2>
void printperson2(person<T1, T2>& p)
{
	p.showperson();
	//���Կ����������Ƶ�������������
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

void test02()
{
	person<string, int>p2("��С��", 26);
	printperson2(p2);
}

//������ģ�廯
template<class T>
void printperson3(T& p)
{
	p.showperson();
	cout << "T������Ϊ��" << typeid(T).name() << endl;  //person
}

void test03()
{
	person<string, int>p3("�˹�", 18);
	printperson3(p3);
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
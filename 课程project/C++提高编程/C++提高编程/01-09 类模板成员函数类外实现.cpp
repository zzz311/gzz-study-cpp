#include<iostream>
using namespace std;
#include<string>

//������ģ��
template<class T1, class T2>
class person
{
public:
	person(T1 name, T2 age);
	void showperson();

	T1 m_name;
	T2 m_age;
};

//���캯������ʵ��
template<class T1,class T2>
person<T1,T2>::person(T1 name, T2 age)
{
		m_name = name;
		m_age = age;
}

//��Ա��������ʵ��
template<class T1, class T2>
void person<T1, T2>::showperson()
{
	cout << this->m_name << this->m_age << endl;
}

void test()
{
	person<string, int>p1("�˴�", 25);
	p1.showperson();
}

int main()
{
	test();
	system("pause");
	return 0;
}
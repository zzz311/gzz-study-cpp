#include<iostream>
using namespace std;
class Person
{
public:
	Person()
		{
		cout << "��ͨ���캯������" << endl;
		}
	Person(int a)
	{
		cout << "�вι��캯������" << endl;
		age = a;
	}
	Person(const Person &p)
	{
		cout << "�������캯������" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "������������" << endl;
	}
	int age;
};
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(10);
	Person p2(p1);
}
//2.ֵ���ݵķ�ʽ������������ֵ�� ֵ���ݱ�����Ǵ���һ������ ���Ե����˿�������
void dowork1(Person p)
{

}

void test02()
{
	Person p; // ��ͨ���캯������
	dowork1(p); //ֵ���� 
}
//3. ֵ��ʽ���ؾֲ�����
Person dowork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = dowork2();  //Person p = p1 ��ʽ����
	cout << (int*)&p << endl;
}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}


#include<iostream>
using namespace std;
class Person
{
public:
	//���캯�� 
	Person()
	{
		cout << "person���޲ι��캯������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p)  //�������캯��Ҫ�����޶����Է��޸�֮ǰ�����ݡ���λ���Ҫ�����õķ�ʽ����
	{
		age = p.age;   //��������˵����Կ�����������
		cout << "person�Ŀ������캯������" << endl;
	}
	//��������
	~Person()
	{
		cout << "person���������캯������" << endl;
	}
	int age ; //����
};
//����
void test01()
{
    //1�����ŷ�
	
	//Person p1;  //Ĭ�Ϲ��캯������
	//Person p2(10); //�вι��캯������
	//Person p3(p2); //�������캯������
	//cout << "p2�������ǣ�" << p2.age << endl;
	//cout << "p3�������ǣ�" << p3.age << endl;
	
	//2����ʾ��

	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	// Person(10); //�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//ע�������Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊ Person(p3) === Person p3;�����ض���

	//3����ʽת����

	Person p4 = 10; //�൱�� Person p4 = Person(10) 
	Person p5 = p4; //�൱�� Person p5 = Person(p4) ��������
}
int main()
{
	test01();

	system("pause");
	return 0;
}

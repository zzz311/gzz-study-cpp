#include<iostream>
using namespace std;
 class Animal
{
public:
	//����ǰ��virtual ��Ϊ�麯��
	virtual void speak()
	{
		cout << "����˵��" << endl;
	}
};
 //��ַ��� ���ڱ���ʱ��ȷ����ַ����
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "è˵��" << endl;
	}
};
class Dog:public Animal
{
public:
	void speak()
	{
		cout << "�˴�˵��" << endl;
	}
};
//�����ָ������� ָ���������
 void dospeak(Animal &animal) //�൱�� Animal &animal =cat��
{
	animal.speak(); 
}
void test01()
{
	Cat cat;
	dospeak(cat);

	Dog dog;
	dospeak(dog);
	cout << sizeof(Animal) << endl; //x86(32λ) 4 x64��64λ��8
}
int main()
{
	test01();
	system("pause");
	return 0;
}
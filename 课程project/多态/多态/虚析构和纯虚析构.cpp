#include<iostream>
using namespace std;
#include<string>
class Animal
{
public:
	//Animai�๹�캯��
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	//�麯��
	virtual void dospeak() = 0;
	////������
	//virtual ~Animal()
	//{
	//	cout << "Animal��������������" << endl;
	//}
	//��������
	virtual ~Animal() = 0; //��������������Ҫ����������������Ҫ������ʵ��
};
//����������������������ʵ��
Animal::~Animal()
{
	cout << "Animal����������������" << endl;
}
class Cat:public Animal
{
public:
	Cat(string name)
	{
		m_name = new string(name); //�����ڶ�����������
		cout << "Cat���캯������" << endl;
	}
	void dospeak()
	{
		cout << *m_name << "Сè��˵��" << endl;
	}
	~Cat()
	{
		cout << "Cat��������������" << endl;
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
		}
	}
	string* m_name;
};
void test()
{
	Animal* animal = new Cat("Tom");
	animal->dospeak();
	delete animal;
}
int main()
{
	test();
	system("pause");
	return 0;
}

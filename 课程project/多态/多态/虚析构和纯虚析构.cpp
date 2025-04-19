#include<iostream>
using namespace std;
#include<string>
class Animal
{
public:
	//Animai类构造函数
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	//虚函数
	virtual void dospeak() = 0;
	////虚析构
	//virtual ~Animal()
	//{
	//	cout << "Animal虚析构函数调用" << endl;
	//}
	//纯虚析构
	virtual ~Animal() = 0; //纯虚析构不仅需要函数的声明而且需要函数的实现
};
//纯虚析构在类外做函数的实现
Animal::~Animal()
{
	cout << "Animal纯虚析构函数调用" << endl;
}
class Cat:public Animal
{
public:
	Cat(string name)
	{
		m_name = new string(name); //子类在堆区开辟数据
		cout << "Cat构造函数调用" << endl;
	}
	void dospeak()
	{
		cout << *m_name << "小猫在说话" << endl;
	}
	~Cat()
	{
		cout << "Cat的析构函数调用" << endl;
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

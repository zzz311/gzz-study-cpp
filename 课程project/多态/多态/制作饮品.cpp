#include<iostream>
using namespace std;
//���������
class abstract
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutInSomething() = 0;
	void makedrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutInSomething();
	}
};
//������
class makedrinkcoffee:public abstract
{
public:
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "�ӿ���" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutInSomething()
	{
		cout << "����" << endl;
	}
};
//����
class makedrinktea :public abstract
{
public:
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "�Ӳ�Ҷ" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutInSomething()
	{
		cout << "������" << endl;
	}
};
void dowork(abstract* abs) //abstract *abs= coffee
{
	abs->makedrink();
}
void test01()
{
	//ʵ����
	makedrinkcoffee *coffee=new makedrinkcoffee; 
	// abstract* abs = coffee;
	dowork(coffee);
	cout << "------------------------" << endl;
	makedrinktea* tea = new makedrinktea;
	dowork(tea);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
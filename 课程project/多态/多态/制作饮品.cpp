#include<iostream>
using namespace std;
//构造抽象类
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
//咖啡类
class makedrinkcoffee:public abstract
{
public:
	virtual void Boil()
	{
		cout << "煮水" << endl;
	}
	virtual void Brew()
	{
		cout << "加咖啡" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutInSomething()
	{
		cout << "加糖" << endl;
	}
};
//茶类
class makedrinktea :public abstract
{
public:
	virtual void Boil()
	{
		cout << "煮水" << endl;
	}
	virtual void Brew()
	{
		cout << "加茶叶" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutInSomething()
	{
		cout << "加柠檬" << endl;
	}
};
void dowork(abstract* abs) //abstract *abs= coffee
{
	abs->makedrink();
}
void test01()
{
	//实例化
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
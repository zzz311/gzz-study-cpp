#include<iostream>
using namespace std;
 class Animal
{
public:
	//函数前加virtual 称为虚函数
	virtual void speak()
	{
		cout << "动物说话" << endl;
	}
};
 //地址晚绑定 即在编译时才确定地址分配
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "猫说话" << endl;
	}
};
class Dog:public Animal
{
public:
	void speak()
	{
		cout << "邓川说话" << endl;
	}
};
//父类的指针或引用 指向子类对象
 void dospeak(Animal &animal) //相当于 Animal &animal =cat；
{
	animal.speak(); 
}
void test01()
{
	Cat cat;
	dospeak(cat);

	Dog dog;
	dospeak(dog);
	cout << sizeof(Animal) << endl; //x86(32位) 4 x64（64位）8
}
int main()
{
	test01();
	system("pause");
	return 0;
}
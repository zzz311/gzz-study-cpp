#include<iostream>
using namespace std;
class Person
{
public:
	Person()
		{
		cout << "普通构造函数调用" << endl;
		}
	Person(int a)
	{
		cout << "有参构造函数调用" << endl;
		age = a;
	}
	Person(const Person &p)
	{
		cout << "拷贝构造函数调用" << endl;
		age = p.age;
	}
	~Person()
	{
		cout << "析构函数调用" << endl;
	}
	int age;
};
//1.使用一个已经创建完毕的对象来初始化一个新对象；
void test01()
{
	Person p1(10);
	Person p2(p1);
}
//2.值传递的方式给函数参数传值。 值传递本身就是创建一个副本 所以调用了拷贝函数
void dowork1(Person p)
{

}

void test02()
{
	Person p; // 普通构造函数调用
	dowork1(p); //值传递 
}
//3. 值方式返回局部对象。
Person dowork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = dowork2();  //Person p = p1 隐式传递
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


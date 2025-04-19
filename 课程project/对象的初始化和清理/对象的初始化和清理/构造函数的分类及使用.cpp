#include<iostream>
using namespace std;
class Person
{
public:
	//构造函数 
	Person()
	{
		cout << "person的无参构造函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)  //拷贝构造函数要加以限定，以防修改之前的数据。其次还需要用引用的方式传入
	{
		age = p.age;   //将传入的人的属性拷贝到我身上
		cout << "person的拷贝构造函数调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "person的析构构造函数调用" << endl;
	}
	int age ; //对象
};
//调用
void test01()
{
    //1、括号法
	
	//Person p1;  //默认构造函数调用
	//Person p2(10); //有参构造函数调用
	//Person p3(p2); //拷贝构造函数调用
	//cout << "p2的年龄是：" << p2.age << endl;
	//cout << "p3的年龄是：" << p3.age << endl;
	
	//2、显示法

	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	// Person(10); //匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	//注意事项：不要利用拷贝构造函数 初始化匿名对象 编译器会认为 Person(p3) === Person p3;对象重定义

	//3、隐式转换法

	Person p4 = 10; //相当于 Person p4 = Person(10) 
	Person p5 = p4; //相当于 Person p5 = Person(p4) 拷贝构造
}
int main()
{
	test01();

	system("pause");
	return 0;
}

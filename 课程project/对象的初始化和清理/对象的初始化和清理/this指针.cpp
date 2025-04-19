#include<iostream>
using namespace std;
class person
{
public:
	person(int age) {
		//this指针指向的是所调用的成员函数所属的对象
		//当形参和成员变量同名时，可用this指针来区分
		this->age = age;
	}
	person&  personaddage(person &p)  //返回的一直是同一个对象本身
	{
		this->age += p.age;
		//this指向的是p2的指针，而*this就是指向的就是p2的对象本体 *this = p2
		return *this; //用引用的方式做一个返回，如果是值方式，会引用构造函数返回的是一个副本
	}
	int age;
};
//1.解决名称冲突
void test01()
{
	person p(18);
	cout << "p1的年龄为" << p.age << endl;
}
//2.返回对象本身用 return *this
void test02()
{
	person p2(18);
	person p1(18);
	//链式编程思想
	p2.personaddage(p1).personaddage(p1).personaddage(p1); //54
	//如果不是返回引用值，那么返回的是一个副本，而我们一直打印的还是p2.age所以一直是36
	cout << "p2的年龄为" << p2.age << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
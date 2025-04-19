#include<iostream>
using namespace std;
class person
{
public:
	void showperson() const  //const person const this
	{
		m_b = 30;  //在成员属性前加上关键字mutable 可以修改成员的属性
		//this = NULL;  //常函数也不可以修改指针的指向
		//this->m_age = 100; 常函数不可以修改指针指向的值
	}
	void func()
	{

	}
	int m_age;
	mutable int m_b;
};
// 常函数
void test01()
{
	person p;
	p.showperson();
	
}
// 常对象
void test02()
{
	const person p1;
	//p1.m_age = 100; 常对象不可以修改对象的属性
	p1.showperson(); //常对象调用常函数
	// p1.func(); 不可以调用其他普通成员函数，因为普通成员函数可以修改成员属性，违背了常对象的性质
}
int main()
{
	test01();
	system("pause");
	return 0;

}
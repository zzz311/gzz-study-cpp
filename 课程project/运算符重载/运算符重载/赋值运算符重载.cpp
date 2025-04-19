#include<iostream>
using namespace std;
class person
{
	friend void test01();
public:
	person(int age)
	{
		m_age = new int(age);
	}
	~person()  //释放堆区开辟的内存
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//采用深拷贝的方式来解决浅拷贝造成的堆区重复释放内存的问题
	//重载赋值运算符
	person& operator= (person& p)
	{
		//编译器提供浅拷贝
		//m_age = p.m_age;
		// 应该先判断堆区内是否有属性，如有，应先释放
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//深拷贝
		m_age = new int(*p.m_age); //让自身去等于新的内存空间
		//返回对象本身
		return *this;
	}
private:
	int* m_age;
};
void test01()
{
	person p1(10);
	person p2(15);
	person p3(20);
	p1 =p3= p2;  //赋值操作
	cout << "p1=" << *p1.m_age << endl;
	cout << "p2=" << *p2.m_age << endl;
	cout << "p3=" << *p3.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
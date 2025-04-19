#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "普通构造函数调用" << endl;
	}
	Person(int age,int height)
	{
		cout << "有参构造函数调用" << endl;
		m_Age = age;
		m_Height = new int(height);  //在堆区开辟内存，用指针去接收堆区的数据
	}
	Person(const Person& p) 
	{
		cout << "拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		// m_Height=p.m_Height  若数据开辟到堆区就要用深拷贝来防止内存重复释放的问题
		//深拷贝
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		cout << "析构函数调用" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		//析构函数 将堆区开辟的代码做释放操作
	}
	int m_Age;
	int* m_Height;  //用指针 是因为要将数据开辟到堆区 //类中定义属性为指针（在堆区开辟）的时候，一定要自己提供拷贝构造函数
};
void test()
{
	Person p1(16, 180);
	cout << "年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;
	Person p2(p1);
	cout << "年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;
}
int main()
{
	test();
	system("pause");
	return 0;
}


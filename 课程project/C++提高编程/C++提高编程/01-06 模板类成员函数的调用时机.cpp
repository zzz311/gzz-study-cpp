#include<iostream>
using namespace std;
#include <string>

class person1
{
public:
	void showperson1()
	{
		cout << "showperson1" << endl;
	}
};

class person2
{
public:
	void showperson2()
	{
		cout << "showperson2" << endl;
	}
};

template<class T>
class myclass
{
public:
	T obj;

	//��ģ��ĳ�Ա����
	void func1()
	{
		obj.showperson1();
	}
	void func2()
	{
		obj.showperson2();
	}
};

void test()
{
	myclass<person1>m;
	m.func1();
	// m.func2(); ��ģ��ĳ�Ա�����ڵ���ʱ�Ŵ���
}

int main()
{
	test();
	system("pause");
	return 0;
}

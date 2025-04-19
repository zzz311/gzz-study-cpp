#include<iostream>
using namespace std;
#include<string>

//创建类模板
template<class T>
class base
{
	T m;
};

class son1 :public  base<int> //必须要知道父类中T的类型，才可以继承
{

};

//想灵活指定父类中T的类型，那么子类也需要是类模板
template<class T1,class T2>
class son2 :public base<T1>
{
public:
	son2()
	{
		cout << "T1类型是：" << typeid(T1).name() << endl;  //int
		cout << "T2类型是：" << typeid(T2).name() << endl;  //char
	}
	T2 obj;
};

void test()
{
	son1 s1;
	son2 <int,char>s2;
}

int main()
{
	test();
	system("pause");
	return 0;
}
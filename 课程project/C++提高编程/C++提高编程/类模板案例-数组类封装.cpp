#include<iostream>
using namespace std;
#include<string>
#include"myArray.hpp"

//自定义数据类型测试
class person
{
public:
	person()
	{ }
	person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}

	string m_name;
	int m_age;
};

void printpersonarr(myArray<person>&arr)
{
	cout << "arr3的数组元素有：" << endl;
	for (int i = 0;i < arr.get_arrsize();i++)
	{
		cout <<"姓名："<< arr[i].m_name<<" "<<"年龄：" << arr[i].m_age << " ";
	}
	cout << endl;
}

void test01()
{
	myArray<person>arr3(3);
	person p1("邓川", 25);
	person p2("邓小猪", 24);
	person p3("邓狗", 18);
	arr3.push_back(p1);
	arr3.push_back(p2);
	arr3.push_back(p3);

	printpersonarr(arr3);

	cout << "arr3的数组容量为：" << arr3.get_arrcapacity() << endl;
	cout << "arr3的数组大小为：" << arr3.get_arrsize() << endl;

}



void printintarr(myArray <int>& arr)
{
	cout << "arr的数组元素有：";
	for (int i = 0;i < arr.get_arrsize();i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
}

void test()
{
	myArray <int>arr(5);  //有参函数调用
	//myArray<int>arr2(arr); //拷贝构造函数调用
	//myArray<int> arr3(100);
	//arr2 = arr3; //深拷贝 重载运算符=

	for (int i = 0;i < 5;i++)
	{
		//尾插法
		arr.push_back(i);
	}
	printintarr(arr);

	cout << "arr的数组容量为：" << arr.get_arrcapacity() << endl;
	cout << "arr的数组大小为：" << arr.get_arrsize() << endl;

	myArray<int>arr2(arr);
	
	cout << "删除前";
	printintarr(arr2);

	arr2.pop_back();

	cout << "arr2的数组容量为：" << arr2.get_arrcapacity() << endl;
	cout << "arr2的数组大小为：" << arr2.get_arrsize() << endl;
	
	cout << "删除后";
	printintarr(arr2);

}
int main()
{
	
	test();
	cout << "-----------------------------" << endl;
	test01();
	system("pause");
	return 0;
}
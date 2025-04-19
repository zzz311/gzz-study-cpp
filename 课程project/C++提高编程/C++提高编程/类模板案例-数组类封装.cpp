#include<iostream>
using namespace std;
#include<string>
#include"myArray.hpp"

//�Զ����������Ͳ���
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
	cout << "arr3������Ԫ���У�" << endl;
	for (int i = 0;i < arr.get_arrsize();i++)
	{
		cout <<"������"<< arr[i].m_name<<" "<<"���䣺" << arr[i].m_age << " ";
	}
	cout << endl;
}

void test01()
{
	myArray<person>arr3(3);
	person p1("�˴�", 25);
	person p2("��С��", 24);
	person p3("�˹�", 18);
	arr3.push_back(p1);
	arr3.push_back(p2);
	arr3.push_back(p3);

	printpersonarr(arr3);

	cout << "arr3����������Ϊ��" << arr3.get_arrcapacity() << endl;
	cout << "arr3�������СΪ��" << arr3.get_arrsize() << endl;

}



void printintarr(myArray <int>& arr)
{
	cout << "arr������Ԫ���У�";
	for (int i = 0;i < arr.get_arrsize();i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
}

void test()
{
	myArray <int>arr(5);  //�вκ�������
	//myArray<int>arr2(arr); //�������캯������
	//myArray<int> arr3(100);
	//arr2 = arr3; //��� ���������=

	for (int i = 0;i < 5;i++)
	{
		//β�巨
		arr.push_back(i);
	}
	printintarr(arr);

	cout << "arr����������Ϊ��" << arr.get_arrcapacity() << endl;
	cout << "arr�������СΪ��" << arr.get_arrsize() << endl;

	myArray<int>arr2(arr);
	
	cout << "ɾ��ǰ";
	printintarr(arr2);

	arr2.pop_back();

	cout << "arr2����������Ϊ��" << arr2.get_arrcapacity() << endl;
	cout << "arr2�������СΪ��" << arr2.get_arrsize() << endl;
	
	cout << "ɾ����";
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
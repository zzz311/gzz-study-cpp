#pragma once
#include<iostream>
using namespace std;
#include<string>

//创建类模板
template<class T1, class T2>
class person
{
public:
	person(T1 name, T2 age);
	void showperson();

	T1 m_name;
	T2 m_age;
};

template<class T1, class T2>
person<T1, T2>::person(T1 name, T2 age)
{
	m_name = name;
	m_age = age;
}

//成员函数类外实现
template<class T1, class T2>
void person<T1, T2>::showperson()
{
	cout << this->m_name << this->m_age << endl;
}
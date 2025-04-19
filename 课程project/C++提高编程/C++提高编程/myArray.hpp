#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T>
class myArray
{
public:
	//有参构造函数
	myArray(int capacity)
	{
		//cout << "有参构造函数调用" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];//将数组中的数据存放到堆区
	}

	//拷贝构造函数
	myArray(const myArray& arr)
	{
		//cout << "拷贝构造函数调用" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//在堆区开辟的数组要使用深拷贝
		this->pAddress = new T[arr.m_capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0;i < this->m_size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//如果类内有属性指向堆区，做赋值操作时也会出现深浅拷贝问题。
	//重载operator= 防止浅拷贝产生数据重复释放的问题
	myArray& operator= (const myArray& arr)
	{
		//cout << "重载运算符调用" << endl;
		if (this->pAddress != nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;
			this->m_size = 0;
			this->m_capacity = 0;
		}

		//深拷贝
		this->pAddress = new T[arr.m_capacity];
		for (int i = 0;i < this->m_size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//尾插法
	void push_back(const T&val)
	{
		if (this->m_size == this->m_capacity)
		{
			return;
		}
		this->pAddress[this->m_size] = val;
		this->m_size++;
	}

	//尾删法
	void pop_back()
	{
		//让用户访问不到最后一个元素，逻辑删除
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//通过下标方式访问数组元素
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}

	//返回数组容量
	int get_arrcapacity()
	{
		return this->m_capacity;
	}

	//返回数组大小
	int get_arrsize()
	{
		return this->m_size;
	}


	//析构函数
	~myArray()
	{
		
		if (this->pAddress != nullptr)
		{
			//cout << "析构函数调用" << endl;
			delete[] this->pAddress;
			this->pAddress = nullptr;
			this->m_capacity = 0;
			this->m_size = 0;
		}
	}

private:

	T* pAddress; //指针指向堆区开辟的真实数组

	int m_size;  //数组大小

	int m_capacity; //数组容量

};
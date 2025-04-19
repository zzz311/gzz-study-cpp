#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T>
class myArray
{
public:
	//�вι��캯��
	myArray(int capacity)
	{
		//cout << "�вι��캯������" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];//�������е����ݴ�ŵ�����
	}

	//�������캯��
	myArray(const myArray& arr)
	{
		//cout << "�������캯������" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//�ڶ������ٵ�����Ҫʹ�����
		this->pAddress = new T[arr.m_capacity];

		//��arr�е����ݶ���������
		for (int i = 0;i < this->m_size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//�������������ָ�����������ֵ����ʱҲ�������ǳ�������⡣
	//����operator= ��ֹǳ�������������ظ��ͷŵ�����
	myArray& operator= (const myArray& arr)
	{
		//cout << "�������������" << endl;
		if (this->pAddress != nullptr)
		{
			delete[] this->pAddress;
			this->pAddress = nullptr;
			this->m_size = 0;
			this->m_capacity = 0;
		}

		//���
		this->pAddress = new T[arr.m_capacity];
		for (int i = 0;i < this->m_size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//β�巨
	void push_back(const T&val)
	{
		if (this->m_size == this->m_capacity)
		{
			return;
		}
		this->pAddress[this->m_size] = val;
		this->m_size++;
	}

	//βɾ��
	void pop_back()
	{
		//���û����ʲ������һ��Ԫ�أ��߼�ɾ��
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//ͨ���±귽ʽ��������Ԫ��
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}

	//������������
	int get_arrcapacity()
	{
		return this->m_capacity;
	}

	//���������С
	int get_arrsize()
	{
		return this->m_size;
	}


	//��������
	~myArray()
	{
		
		if (this->pAddress != nullptr)
		{
			//cout << "������������" << endl;
			delete[] this->pAddress;
			this->pAddress = nullptr;
			this->m_capacity = 0;
			this->m_size = 0;
		}
	}

private:

	T* pAddress; //ָ��ָ��������ٵ���ʵ����

	int m_size;  //�����С

	int m_capacity; //��������

};
#include<iostream>
using namespace std;
#include<string>
//���⣺��ģ���Ա��������ʱ���ڵ��ý׶Σ����·��ļ���дʱ���ò���

//�����ʽ1 
//#include"person.cpp" //ֱ�Ӱ���.cppԴ�ļ�

//�����ʽ2
//�����������Ͷ���д��һ�𣬰���.hpp�ļ�
#include"person.hpp"


void test()
{
	person<string, int>p1("�˴�", 25);
	p1.showperson();
}

int main()
{
	test();
	system("pause");
	return 0;
}
#pragma once
#include <iostream>
using namespace std;
#include<string>

//����Ա��������
class Worker
{
public:

	//��ʾԱ����Ϣ
	virtual void showInfo()=0;

	//��ȡ��λ����
	virtual string get_Depar_name()=0;

	int m_id; //ְ�����
	string m_name; //ְ������
	int m_deparid; //��������
};
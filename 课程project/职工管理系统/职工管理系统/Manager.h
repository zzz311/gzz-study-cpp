// �����ļ�
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"

class Manager :public Worker
{
public:

	//���캯��
	Manager(int id, string name, int dep_id);

	//��ʾԱ����Ϣ
	 void showInfo();

	//��ȡְ����λ
	 string get_Depar_name();
};
// �ϰ��ļ�
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"


class Boss :public Worker
{
public:
	
	//���캯��
	Boss(int id, string name, int dep_id);

	//��ʾԱ����Ϣ
	 void showInfo();

	//��ȡ��λ����
	 string get_Depar_name();

};
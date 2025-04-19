#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>  //�������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

#include<fstream>
#define FILENAME "emFile.txt"  //��ǰ׼���ļ�·�� �곣��

class WorkerManager
{
public:
	WorkerManager();

	//�˵���ʾ
	void show_Menu();
	
	//�˳�����
	void ExitSystem();

	//��¼ְ������
	int m_Empnum; 

	//ͳ��ְ������
	int get_Empnum();

	//��ʼ��Ա��
	void init_Emp();

	//ְ������ָ��
	Worker** EmpArray;

	//���ְ������
	void addEmp();

	//��ʾְ������
	void showEmp();

	//ɾ��ְ��
	void deleteEmp();

	//�޸�ְ��
	void modEmp();

	//����ְ��
	void findEmp();

	//ְ���������
	void sortEmp();

	//����ļ��ĺ���
	void cleanfile();

	//ְ���Ƿ���ڵĺ���
	int Emp_isExit(int id);

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�ձ�־
	bool m_FileIsEmpty;

	~WorkerManager();

	
};
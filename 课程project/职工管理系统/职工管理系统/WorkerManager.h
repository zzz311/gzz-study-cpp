#pragma once //防止头文件重复包含
#include<iostream>  //包含输入输出流头文件
using namespace std; //使用标准命名空间
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

#include<fstream>
#define FILENAME "emFile.txt"  //提前准备文件路径 宏常量

class WorkerManager
{
public:
	WorkerManager();

	//菜单显示
	void show_Menu();
	
	//退出程序
	void ExitSystem();

	//记录职工人数
	int m_Empnum; 

	//统计职工人数
	int get_Empnum();

	//初始化员工
	void init_Emp();

	//职工数组指针
	Worker** EmpArray;

	//添加职工函数
	void addEmp();

	//显示职工函数
	void showEmp();

	//删除职工
	void deleteEmp();

	//修改职工
	void modEmp();

	//查找职工
	void findEmp();

	//职工编号排序
	void sortEmp();

	//清空文件的函数
	void cleanfile();

	//职工是否存在的函数
	int Emp_isExit(int id);

	//保存文件
	void save();

	//判断文件是否为空标志
	bool m_FileIsEmpty;

	~WorkerManager();

	
};
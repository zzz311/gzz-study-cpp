//普通员工文件
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"

class Employee :public Worker
{
public:
	//构造函数
	Employee(int id, string name, int dep_id);

	//显示员工信息
	 void showInfo();
	

	//获取岗位名称
	 string get_Depar_name();
	

};
// 经理文件
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"

class Manager :public Worker
{
public:

	//构造函数
	Manager(int id, string name, int dep_id);

	//显示员工信息
	 void showInfo();

	//获取职工岗位
	 string get_Depar_name();
};
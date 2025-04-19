// 老板文件
#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"


class Boss :public Worker
{
public:
	
	//构造函数
	Boss(int id, string name, int dep_id);

	//显示员工信息
	 void showInfo();

	//获取岗位名称
	 string get_Depar_name();

};
#pragma once
#include <iostream>
using namespace std;
#include<string>

//创建员工抽象类
class Worker
{
public:

	//显示员工信息
	virtual void showInfo()=0;

	//获取岗位名称
	virtual string get_Depar_name()=0;

	int m_id; //职工编号
	string m_name; //职工姓名
	int m_deparid; //部门姓名
};
#include"Employee.h"



//构造函数
Employee::Employee(int id,string name,int dep_id)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deparid = dep_id;
}

//显示员工信息
 void Employee::showInfo()
{
	 cout << "职工编号： " << this->m_id
		 << "\t职工姓名： " << this->m_name
		 << "\t岗位： " << this->get_Depar_name()
		 << "\t岗位职责：完成经理交给的任务" << endl;
}

//获取岗位名称
 string Employee::get_Depar_name()
 {
	 return "员工";
 }
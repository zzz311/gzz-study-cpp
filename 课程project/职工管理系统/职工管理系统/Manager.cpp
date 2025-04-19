#include"Worker.h"
#include"Manager.h"

Manager::Manager(int id, string name, int dep_id)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deparid = dep_id;
}

void Manager::showInfo()
{
	cout << "职工编号： " << this->m_id
		<< "\t职工姓名： " << this->m_name
		<< "\t岗位： " << this->get_Depar_name()
		<< "\t岗位职责：完成老板交给的任务，并下发任务给员工" << endl;
}

string Manager::get_Depar_name()
{
	return "经理";
}
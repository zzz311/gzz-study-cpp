#include"Employee.h"



//���캯��
Employee::Employee(int id,string name,int dep_id)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deparid = dep_id;
}

//��ʾԱ����Ϣ
 void Employee::showInfo()
{
	 cout << "ְ����ţ� " << this->m_id
		 << "\tְ�������� " << this->m_name
		 << "\t��λ�� " << this->get_Depar_name()
		 << "\t��λְ����ɾ�����������" << endl;
}

//��ȡ��λ����
 string Employee::get_Depar_name()
 {
	 return "Ա��";
 }
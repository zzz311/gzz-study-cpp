#include"Boss.h"


//���캯��
Boss::Boss(int id, string name, int dep_id)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deparid = dep_id;
}

//��ʾԱ����Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_name
		<< "\t��λ�� " << this->get_Depar_name()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

//��ȡ��λ����
string Boss::get_Depar_name()
{
	return "�ܲ�";
}
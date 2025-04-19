#include<iostream>
#include "showMenu.h"
#include<string>
#define MAX 100
using namespace std;
//��Ƴ�Ա�ṹ��
struct person 
{
	string m_name;
	int m_sex=0; //1��ʾ�У�2��ʾŮ
	int m_age=0;
	string m_number;
	string m_address;
};
//���ͨѶ¼�ṹ��
struct Addressbooks 
{
struct person personArray[MAX];//ͨѶ¼�������ϵ������
int m_size=0; //��¼ͨѶ¼��Ա����
};
//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼����,�޷���ӣ�" << endl;
		return;
	}
	else
	{
		//�������
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;

		//����Ա�
		cout << "�������Ա� " << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}
			cout << "������Ч������������" << endl;
		}
		//�������
		cout << "���������䣺" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age > 0 && age < 100) 
			{
				abs->personArray[abs->m_size].m_age = age;
				break;
			}
			cout << "���벻��������������" << endl;
		}
		//�����ϵ�绰
		cout << "��������ϵ�绰:" << endl;
		string number;
		cin >> number;
		abs->personArray[abs->m_size].m_number = number;
		//��Ӽ�ͥסַ
		cout << "�������ͥסַ:" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_address = address;
		//����ͨѶ¼����
		abs->m_size++;
		cout << "������" << endl;
		
	}
	//�밴���������
	system("pause");
	//����
	system("cls");
}
//2����ʾ��ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж���ϵ���Ƿ�Ϊ��
	if (abs->m_size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0;i < abs->m_size;i++)
		{
			cout << "����:  " << abs->personArray[i].m_name << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_sex == 1? "��" : "Ů") << "\t";
			cout << "���䣺 " << abs->personArray[i].m_age << "\t";
			cout << "��ϵ�绰��  " << abs->personArray[i].m_number << "\t";
			cout << "��ͥסַ��  " << abs->personArray[i].m_address << endl;
		}
	}
	system("pause");
	system("cls");
}
//�����ϵ���Ƿ����
//�����ϵ�˴��ڣ��򷵻���ϵ����������Ԫ��λ�ã������ϵ�˲����ڣ������������
int isExist(string name, Addressbooks* abs)
{
	for (int i = 0;i < abs->m_size;i++) 
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}
//3��ɾ��ָ������ϵ��
void deletePerson(Addressbooks* abs) {
	cout << "������Ҫɾ������ϵ�ˣ� " << endl;
	string name;
	cin >> name;
	int ret = isExist(name, abs);
	//ret=i,�����ִ��ɾ��������ret=-1���򲻴��ڡ�
	if (ret != -1)
	{
		//ִ��ɾ������
		for (int i = ret;i < abs->m_size;i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "ɾ�����" << endl;
	}
	else
	{
		cout << "��ϵ�˲�����" << endl;
	}
	system("pause");
	system("cls");
}
//4������ָ������ϵ��
void findPerson(Addressbooks* abs) {
	cout << "������Ҫ���ҵ���ϵ�ˣ� " << endl;
	string name;
	cin >> name;
	int ret = isExist(name, abs);
	if (ret != -1) {
		//ִ����ʾ��ϵ�˵Ĳ���
		cout << "����:  " << abs->personArray[ret].m_name << "\t";
		cout << "�Ա� " << (abs->personArray[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺 " << abs->personArray[ret].m_age << "\t";
		cout << "��ϵ�绰��  " << abs->personArray[ret].m_number << "\t";
		cout << "��ͥסַ��  " << abs->personArray[ret].m_address << endl;
	}
	else {
		cout << "����ʧ�ܣ���ϵ�˲�����" << endl;
	}
	system("pause");
	system("cls");
}
//5���޸�ָ������ϵ��
void modifyPerson(Addressbooks* abs) {
	cout << "������Ҫ�޸ĵ���ϵ�ˣ� " << endl;
	string name;
	cin >> name;
	int ret = isExist(name, abs);
	if(ret!=-1)
	{
		//�޸���ϵ��
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;

		//�޸��Ա�
		cout << "�������Ա� " << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			cout << "������Ч������������" << endl;
		}
		//�޸�����
		cout << "���������䣺" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personArray[ret].m_age = age;
				break;
			}
			cout << "���벻��������������" << endl;
		}
		//�޸���ϵ�绰
		cout << "��������ϵ�绰:" << endl;
		string number;
		cin >> number;
		abs->personArray[ret].m_number = number;
		//�޸ļ�ͥסַ
		cout << "�������ͥסַ:" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_address = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else {
		cout << "���޴��ˣ��޷��޸�" << endl;
	}
	system("pause");
	system("cls");
}
//6�����ͨѶ¼
void cleanPerson (Addressbooks * abs)
{
	cout << "�����Ҫ�����ϵ����" << endl;
	cout << "ȷ��Ҫ���----1" << endl;
	cout << "�����----2" << endl;
	int choice = 0;
	cin >> choice;
	if (choice == 1) {
		abs->m_size = 0;
		cout << "ͨѶ¼�����" << endl;
	}
	system("pause");
	system("cls");
}
int main() 
{
	//����ͨѶ¼
	struct Addressbooks abs;  
	int m_size = 0;  //��ʼ��ͨѶ¼����Ա����
	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:  //�����ϵ��
			addPerson(&abs);  //���õ�ַ��������ʵ��
			break; 
		case 2:  //��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:  //ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:  //������ϵ��
			findPerson(&abs);
			break;
		case 5:  //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:  //�����ϵ��
			cleanPerson(&abs);
			break;
		case 0:  //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test01()
{
	//1.����fstream��ͷ�ļ�

	//2.���������� ifstream ������ 
	ifstream ifs;

	//3.���ļ������жϴ��Ƿ�ɹ�
	ifs.open("text.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	//4.������ ���ַ�ʽ��ȡ
	//��һ��
	char buf[1024] = { 0 }; //׼���ַ����� 
	while (ifs >> buf) 
	{
		cout << buf << endl;
	}

	//�ڶ���
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) //�ֲ�����getline�������׵�ַ�����鳤�ȣ�
	{
		cout << buf << endl;
	}

	//������
	string buf;
	while (getline(ifs,buf)) //ȫ�ֺ���getline�����������ַ�����
	{
		cout << buf << endl;
	}

	//������
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	//5.�ر��ļ�
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
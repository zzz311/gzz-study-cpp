#include<iostream>
using namespace std;
#include<fstream>
void test01()
{
	//1.����fstream��ͷ�ļ�

	//2.���������� ofstream д���� 
	ofstream ofs;

	//3.���ļ�
	ofs.open("text.txt", ios::out);

	//4.д����
	ofs << "�������˴�" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���ˣ�������" << endl;

	//5.�ر��ļ�
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
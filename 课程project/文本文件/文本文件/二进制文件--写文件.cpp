#include<iostream>
using namespace std;
#include<fstream>
class person
{
public:
	char m_name[64];
	int m_age;
};
void test()
{
//1 ����ͷ�ļ�

//2 �������������
	ofstream ofs("person.txt", ios::out | ios::binary);
//3 ���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
//4 д�ļ�
	person p = { "����", 18 }; //���������
	ofs.write((const char*)&p, sizeof(p));
//5 �ر��ļ�
		ofs.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}

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

	//2 ����������
	ifstream ifs("person.txt", ios::in | ios::binary);
	//3 ���ļ����ж��ļ��Ƿ����
	if (!(ifs.is_open()))
	{
		cout << "�ļ��޷���" << endl;
		return;
	}
		//ofs.open("person.txt", ios::out | ios::binary);
	//4 ���ļ�
	person p;
	ifs.read((char*)&p, sizeof(p));
	cout << p.m_name << p.m_age << endl;
	//5 �ر��ļ�
	ifs.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}
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
	//1 包含头文件

	//2 创建流对象
	ifstream ifs("person.txt", ios::in | ios::binary);
	//3 打开文件并判断文件是否存在
	if (!(ifs.is_open()))
	{
		cout << "文件无法打开" << endl;
		return;
	}
		//ofs.open("person.txt", ios::out | ios::binary);
	//4 读文件
	person p;
	ifs.read((char*)&p, sizeof(p));
	cout << p.m_name << p.m_age << endl;
	//5 关闭文件
	ifs.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}
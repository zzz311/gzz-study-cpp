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

//2 创建输出流对象
	ofstream ofs("person.txt", ios::out | ios::binary);
//3 打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
//4 写文件
	person p = { "张三", 18 }; //类变量定义
	ofs.write((const char*)&p, sizeof(p));
//5 关闭文件
		ofs.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;
#include<fstream>
void test01()
{
	//1.包含fstream的头文件

	//2.创建流对象 ofstream 写操作 
	ofstream ofs;

	//3.打开文件
	ofs.open("text.txt", ios::out);

	//4.写数据
	ofs << "姓名：邓川" << endl;
	ofs << "性别：男" << endl;
	ofs << "爱人：郭紫珍" << endl;

	//5.关闭文件
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
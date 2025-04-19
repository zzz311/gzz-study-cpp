#include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test01()
{
	//1.包含fstream的头文件

	//2.创建流对象 ifstream 读操作 
	ifstream ifs;

	//3.打开文件，并判断打开是否成功
	ifs.open("text.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}
	//4.读数据 四种方式读取
	//第一种
	char buf[1024] = { 0 }; //准备字符数组 
	while (ifs >> buf) 
	{
		cout << buf << endl;
	}

	//第二种
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) //局部函数getline（数组首地址，数组长度）
	{
		cout << buf << endl;
	}

	//第三种
	string buf;
	while (getline(ifs,buf)) //全局函数getline（输入流，字符串）
	{
		cout << buf << endl;
	}

	//第四种
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	//5.关闭文件
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
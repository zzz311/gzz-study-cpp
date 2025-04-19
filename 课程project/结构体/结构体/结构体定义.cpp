#include<iostream>
#include<string>
using namespace std;
int main()
{
	//结构体定义
	struct student
	{
		string name;
		string subject;
		int score = 0;

	}s3;
	// 结构体变量定义1
	student s1;
	s1.name = "张三";
	s1.subject = "数学";
	s1.score = 80;
	cout << s1.name <<" " << s1.subject<<" " << s1.score << endl;
	//结构体变量定义2
	student s2 = { "张三","语文",90 };
	cout << s2.name << " " << s2.subject << " " << s2.score << endl;
	//结构体变量定义3
	s3.name = "张三";
	s3.subject = "英语";
	s3.score =100;
	cout << s3.name << " " << s3.subject << " " << s3.score << endl;
	system("pause");
	return 0;
} 
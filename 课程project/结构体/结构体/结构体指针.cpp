#include<iostream>
using namespace std;
#include <string>
int main()
{
	struct student 
	{
		string name;
		string subject;
		int score;
	};
	student s = { "张三","数学",100 };
	student * p = &s;
	cout << "姓名：" << p->name << " "
		<< "科目：" << p->subject << " "
		<< "分数:" << p->score << " "
		<< endl;
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<string>
//创建结构体
struct student {
	string name;
	int age;
	int score;
};
//创建打印函数
void printStudent1(struct student s)  //值传递
{
	cout << "子函数中姓名:" << s.name << "年龄:" << s.age <<"分数："<< s.score << endl;
}

void printStudent2(struct student * p)
{
	cout << "子函数2中姓名:" << p->name << "年龄:" << p->age << "分数：" << p->score << endl;
}
int main()
{
	struct student s;
	s.name = "邓川";
	s.age = 25;
	s.score = 100;
	printStudent1(s);
	printStudent2(&s);
	system("pause");
		return 0; 
}
#include<iostream>
using namespace std;
#include<string>
struct student
{
	string name;
	int score;

};
// ������ʦ�ṹ��
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main()
{
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 55;
	t.stu.name = "С��";
	t.stu.score = 100;
	cout << t.id << t.name << t.age << t.stu.name << endl;
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<string>
//�����ṹ��
struct student {
	string name;
	int age;
	int score;
};
//������ӡ����
void printStudent1(struct student s)  //ֵ����
{
	cout << "�Ӻ���������:" << s.name << "����:" << s.age <<"������"<< s.score << endl;
}

void printStudent2(struct student * p)
{
	cout << "�Ӻ���2������:" << p->name << "����:" << p->age << "������" << p->score << endl;
}
int main()
{
	struct student s;
	s.name = "�˴�";
	s.age = 25;
	s.score = 100;
	printStudent1(s);
	printStudent2(&s);
	system("pause");
		return 0; 
}
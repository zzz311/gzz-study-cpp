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
	student s = { "����","��ѧ",100 };
	student * p = &s;
	cout << "������" << p->name << " "
		<< "��Ŀ��" << p->subject << " "
		<< "����:" << p->score << " "
		<< endl;
	system("pause");
	return 0;
}
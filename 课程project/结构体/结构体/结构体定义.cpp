#include<iostream>
#include<string>
using namespace std;
int main()
{
	//�ṹ�嶨��
	struct student
	{
		string name;
		string subject;
		int score = 0;

	}s3;
	// �ṹ���������1
	student s1;
	s1.name = "����";
	s1.subject = "��ѧ";
	s1.score = 80;
	cout << s1.name <<" " << s1.subject<<" " << s1.score << endl;
	//�ṹ���������2
	student s2 = { "����","����",90 };
	cout << s2.name << " " << s2.subject << " " << s2.score << endl;
	//�ṹ���������3
	s3.name = "����";
	s3.subject = "Ӣ��";
	s3.score =100;
	cout << s3.name << " " << s3.subject << " " << s3.score << endl;
	system("pause");
	return 0;
} 
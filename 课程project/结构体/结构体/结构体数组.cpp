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
		int score;

	};
	//�����ṹ������
	struct student stuarr[3] =
	{
		{"�˴�","��ѧ",100},
		{"�˴�","����",100},
		{"�˴�","Ӣ��",100}
	};
		for (int i = 0; i < 3; i++)
		{
			cout << "������"<<stuarr[i].name <<" " 
				<< "��Ŀ��" << stuarr[i].subject <<" " 
				<< "����:" << stuarr[i].score<<" " 
				<< endl;
		}
	system("pause");
	return 0;
}
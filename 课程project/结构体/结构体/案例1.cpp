#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//����ѧ���ṹ��
struct student {
	string sName;
	int sScore = 0;
};
//������ʦ�ṹ��
struct teacher {
	string tName;
	student sArray[5];
};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct teacher tArray[], int len) {
	string nameseed = "ABCDE";
	
	//����ʦ��ʼ��ֵ
	for (int i = 0;i < len;i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameseed[i];
		//��ѧ����ֵ
		for (int j = 0;j < 5;j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameseed[j];
			int num = rand() % 61 + 40;
			tArray[i].sArray[j].sScore = num;
		}
	}
}
//print ����
void print(struct teacher tArray[], int len) {
	for (int i = 0;i < len;i++) {
		cout << "��ʦ������ " << tArray[i].tName << endl;
		for (int j = 0;j < 5;j++) {
			cout << "\tѧ��������" << tArray[i].sArray[j].sName << " ѧ��������" << tArray[i].sArray[j].sScore << endl;
		}
	}
}
	int main() 
	{
		srand((unsigned int)time(NULL));
		//1������3����ʦ������
		struct teacher tArray[3];
		int len = sizeof(tArray) / sizeof(tArray[0]);
		//2��ͨ��������������ʦ����Ϣ��ֵ��������ʦ������ѧ����ֵ
		allocateSpace(tArray, len);
		//3����ӡ������ʦ�Լ�����ѧ����������Ϣ
		print(tArray, len);
		system("pause");
		return 0;
	}
#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//定义学生结构体
struct student {
	string sName;
	int sScore = 0;
};
//定义老师结构体
struct teacher {
	string tName;
	student sArray[5];
};
//给老师和学生赋值的函数
void allocateSpace(struct teacher tArray[], int len) {
	string nameseed = "ABCDE";
	
	//给老师开始赋值
	for (int i = 0;i < len;i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameseed[i];
		//给学生赋值
		for (int j = 0;j < 5;j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameseed[j];
			int num = rand() % 61 + 40;
			tArray[i].sArray[j].sScore = num;
		}
	}
}
//print 函数
void print(struct teacher tArray[], int len) {
	for (int i = 0;i < len;i++) {
		cout << "老师姓名： " << tArray[i].tName << endl;
		for (int j = 0;j < 5;j++) {
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName << " 学生分数：" << tArray[i].sArray[j].sScore << endl;
		}
	}
}
	int main() 
	{
		srand((unsigned int)time(NULL));
		//1、创建3名老师的数组
		struct teacher tArray[3];
		int len = sizeof(tArray) / sizeof(tArray[0]);
		//2、通过函数给三名老师的信息赋值，并给老师所带的学生赋值
		allocateSpace(tArray, len);
		//3、打印所有老师以及所带学生所带的信息
		print(tArray, len);
		system("pause");
		return 0;
	}
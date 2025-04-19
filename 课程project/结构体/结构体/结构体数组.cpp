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
		int score;

	};
	//创建结构体数组
	struct student stuarr[3] =
	{
		{"邓川","数学",100},
		{"邓川","语文",100},
		{"邓川","英语",100}
	};
		for (int i = 0; i < 3; i++)
		{
			cout << "姓名："<<stuarr[i].name <<" " 
				<< "科目：" << stuarr[i].subject <<" " 
				<< "分数:" << stuarr[i].score<<" " 
				<< endl;
		}
	system("pause");
	return 0;
}
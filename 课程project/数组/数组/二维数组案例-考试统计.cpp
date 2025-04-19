#include <iostream>
using namespace std;
#include<string>
int main()
{
	int arr[3][3] =
	{
		{100,100,100},
		{80,90,100},
		{50,60,70}
	};
	string name[3] = { "张三","李四","王五" };
	int sum = 0;
	for (int i = 0;i < 3;i++) //三次相加
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr[i][j] << "\t ";
			sum = + arr[i][j]; //每行元素相加
	 }
		cout << endl;
		cout << name[i] << "的成绩为" << sum << endl;
	}

	system("pause");
	return 0;
}
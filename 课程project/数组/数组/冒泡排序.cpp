#include<iostream>
using namespace std;
int main()
{
	int arr[7] = { 15,48,50,44,98,77,66 };
	cout << "需要排序的数组为 :";
	for (int i = 0;i < 7;i++) 
	{
		cout << arr[i]<< " ";
	}
	for (int j = 0;j < 6;j++) //排序总轮数 （冒几次泡） 元素个数-1 012345
	{
		for (int k = 0;k < 7-j-1;k++) //每轮对比次数  654321 元素个数-轮数-1
		{
			if (arr[k] > arr[k + 1])
			{
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;

			}
		}
	}
	cout << endl;
	cout << "排序后的数组为 :";
	for (int i = 0;i < 7;i++)
	{
		cout  << arr[i]<< " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
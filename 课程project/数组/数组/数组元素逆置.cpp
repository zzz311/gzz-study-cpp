#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5 };
	cout << "数组逆置前：";
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] <<" ";
	}
	int start = 0;  //起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //结束下标
	int temp = 0;
	while (start < end)  //元素互换
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << endl;
	cout << "数组逆置后：";
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i]<< " ";
	}
	system("pause");
	return 0;
}



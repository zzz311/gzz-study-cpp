#include<iostream >
using namespace std;
//冒泡函数定义
void BubbleSort(int* arr, int len) //数组的首地址，数组的长度
{
	for (int i = 0;i < len-1;i++)   //len 数组长度  比较轮次=数组长度-1
	{
		for (int k = 0;k < len - i - 1;k++)  // 每轮比较次数 
		{
			if (arr[k] > arr[k + 1])
			{
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}

		}

	}
}
//打印函数定义
void PrintArray(int* arr, int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}

}
int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	cout << "需要升序排列的数组是：";
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	cout << "排序后的数组：";
	PrintArray(arr, len);

	cout << endl;
	
	system("pause");
	return 0;
}





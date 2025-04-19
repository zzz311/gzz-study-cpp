#include<iostream>
using namespace std;
int main()
{
	//1. `数据类型 数组名[行数][列数]；`
	int arr[3][2];
	 arr[0][0] = 1;
	 arr[0][1] = 2;
	 arr[1][0] = 3;
	 arr[1][1] = 4;
	 arr[2][0] = 5;
	 arr[2][1] = 6;
	 for (int i = 0;i < 3;i++)
	 {
		 for (int j = 0;j < 2;j++)
		 {
			 cout << arr[i][j]<<" ";
		 }
		 cout << endl;
	 }
	//2. `数据类型 数组名[行数][列数] = { {数据1，数据2}，{数据3，数据4} }；
	 int arr1[3][2] = { {1,2},{4,5},{6,7} };
	 for (int i = 0;i < 3;i++)
	 {
		 for (int j = 0;j < 2;j++)
		 {
			 cout << arr[i][j] << " ";
		 }
		 cout << endl;
	 }
	//3. `数据类型 数组名[行数][列数] = { 数据1， 数据2，数据3，数据4 }；
	 int arr2[3][2] = { 1,2,3,4,5,6 };
	 for (int i = 0;i < 3;i++)
	 {
		 for (int j = 0;j < 2;j++)
		 {
			 cout << arr[i][j] << " ";
		 }
		 cout << endl;
	 }
	//4. `数据类型 数组名[][列数] = { 数据1，数据2，数据3，数据4 }；
	 int arr3[][3] = { 1,2,3,4,5,6 };
	 for (int i = 0;i < 3;i++)
	 {
		 for (int j = 0;j < 2;j++)
		 {
			 cout << arr[i][j] << " ";
		 }
		 cout << endl;
	 }

	 // 获取数组占用内存
	 cout << "arr所占的内存空间为：" << sizeof(arr) << endl;
	 cout << "arr第一行所占用的内存空间为：" << sizeof(arr[0]) << endl;
	 cout << "arr第一个数据所占用的内存空间为：" << sizeof(arr[0][0]) << endl;
	 //可以得到二维数组的行数和列数
	 cout << "行数为" << sizeof(arr) / sizeof(arr[0]) << endl;
	 cout << "列数为" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	 //获取数组首地址
	 cout << "arr数组首地址为：" << (int)arr << endl;
	 cout << "arr数组第一行首地址为：" << (int)arr[0] << endl;
	 cout << "arr数组第一个数据首地址为：" << (int) & arr[0][0] << endl;
	 system("pause");
	 return 0;
}
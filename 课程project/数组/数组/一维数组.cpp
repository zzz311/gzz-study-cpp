#include <iostream>
using namespace std;
int main()
{
	int arr1[3];  //从0开始数，有3个 所以是 0 1 2
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	for (int i = 0;i < 3;i++)
	{
		cout << arr1[i] << endl;
	}

	int arr2[3] = { 4,5,6 };
	for (int i = 0;i < 3;i++)
	{
		cout << arr2[i] << endl;
	}

	int arr3[] = { 7,8,9 };
	for (int i = 0;i < 3;i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}
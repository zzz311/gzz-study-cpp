#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 200,300,440,500,100 };
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;
	system("pause");
	return 0;
}
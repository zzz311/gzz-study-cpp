#include<iostream>
using namespace std;
int main()
{
	int arr[7] = { 15,48,50,44,98,77,66 };
	cout << "��Ҫ���������Ϊ :";
	for (int i = 0;i < 7;i++) 
	{
		cout << arr[i]<< " ";
	}
	for (int j = 0;j < 6;j++) //���������� ��ð�����ݣ� Ԫ�ظ���-1 012345
	{
		for (int k = 0;k < 7-j-1;k++) //ÿ�ֶԱȴ���  654321 Ԫ�ظ���-����-1
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
	cout << "����������Ϊ :";
	for (int i = 0;i < 7;i++)
	{
		cout  << arr[i]<< " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
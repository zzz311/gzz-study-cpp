#include<iostream >
using namespace std;
//ð�ݺ�������
void BubbleSort(int* arr, int len) //������׵�ַ������ĳ���
{
	for (int i = 0;i < len-1;i++)   //len ���鳤��  �Ƚ��ִ�=���鳤��-1
	{
		for (int k = 0;k < len - i - 1;k++)  // ÿ�ֱȽϴ��� 
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
//��ӡ��������
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
	cout << "��Ҫ�������е������ǣ�";
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	cout << "���������飺";
	PrintArray(arr, len);

	cout << endl;
	
	system("pause");
	return 0;
}





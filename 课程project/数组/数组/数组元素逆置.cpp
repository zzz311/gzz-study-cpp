#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5 };
	cout << "��������ǰ��";
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] <<" ";
	}
	int start = 0;  //��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //�����±�
	int temp = 0;
	while (start < end)  //Ԫ�ػ���
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << endl;
	cout << "�������ú�";
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i]<< " ";
	}
	system("pause");
	return 0;
}



#include<iostream>
using namespace std;
int main()
{
	//1. `�������� ������[����][����]��`
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
	//2. `�������� ������[����][����] = { {����1������2}��{����3������4} }��
	 int arr1[3][2] = { {1,2},{4,5},{6,7} };
	 for (int i = 0;i < 3;i++)
	 {
		 for (int j = 0;j < 2;j++)
		 {
			 cout << arr[i][j] << " ";
		 }
		 cout << endl;
	 }
	//3. `�������� ������[����][����] = { ����1�� ����2������3������4 }��
	 int arr2[3][2] = { 1,2,3,4,5,6 };
	 for (int i = 0;i < 3;i++)
	 {
		 for (int j = 0;j < 2;j++)
		 {
			 cout << arr[i][j] << " ";
		 }
		 cout << endl;
	 }
	//4. `�������� ������[][����] = { ����1������2������3������4 }��
	 int arr3[][3] = { 1,2,3,4,5,6 };
	 for (int i = 0;i < 3;i++)
	 {
		 for (int j = 0;j < 2;j++)
		 {
			 cout << arr[i][j] << " ";
		 }
		 cout << endl;
	 }

	 // ��ȡ����ռ���ڴ�
	 cout << "arr��ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	 cout << "arr��һ����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	 cout << "arr��һ��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0][0]) << endl;
	 //���Եõ���ά���������������
	 cout << "����Ϊ" << sizeof(arr) / sizeof(arr[0]) << endl;
	 cout << "����Ϊ" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	 //��ȡ�����׵�ַ
	 cout << "arr�����׵�ַΪ��" << (int)arr << endl;
	 cout << "arr�����һ���׵�ַΪ��" << (int)arr[0] << endl;
	 cout << "arr�����һ�������׵�ַΪ��" << (int) & arr[0][0] << endl;
	 system("pause");
	 return 0;
}
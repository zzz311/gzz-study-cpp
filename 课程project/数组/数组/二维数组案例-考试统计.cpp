#include <iostream>
using namespace std;
#include<string>
int main()
{
	int arr[3][3] =
	{
		{100,100,100},
		{80,90,100},
		{50,60,70}
	};
	string name[3] = { "����","����","����" };
	int sum = 0;
	for (int i = 0;i < 3;i++) //�������
	{
		for (int j = 0;j < 3;j++)
		{
			cout << arr[i][j] << "\t ";
			sum = + arr[i][j]; //ÿ��Ԫ�����
	 }
		cout << endl;
		cout << name[i] << "�ĳɼ�Ϊ" << sum << endl;
	}

	system("pause");
	return 0;
}
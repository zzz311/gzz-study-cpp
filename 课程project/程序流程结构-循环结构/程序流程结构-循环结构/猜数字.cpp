#include <iostream>
#include <ctime>
using namespace std;
int main()
{ 
	//1������һ�������
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	//2�����������
	int val = 0;
	while (1)
	{
		cout << "�������������:";
		cin >> val;
	//3���жϲ²���
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²�С��" << endl;
		}
		else
		{ 
			cout << "��ϲ��¶���" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
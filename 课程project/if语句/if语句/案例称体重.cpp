#include<iostream>
using namespace std;
int main() 
{
	//������ֻС������ر���
	int piga = 0;
	int pigb = 0;
	int pigc = 0;
	//������ֻС�������
	cout << "С��A�������ǣ�";
	cin >> piga;
	cout << "С��B�������ǣ�";
	cin >> pigb;
	cout << "С��C�������ǣ�";
	cin >> pigc;
	if (piga > pigb)
	{
		if (piga > pigc)
		{
			cout << "С��A����" << endl;
		}
	}
	else if (pigb > pigc)
	{
		cout << "С��B����" << endl;
	}
	else
	{
		cout << "С��C����" << endl;
	}
	system("pause");
	return 0;
}
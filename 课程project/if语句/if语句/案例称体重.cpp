#include<iostream>
using namespace std;
int main() 
{
	//创建三只小猪的体重变量
	int piga = 0;
	int pigb = 0;
	int pigc = 0;
	//输入三只小猪的体重
	cout << "小猪A的体重是：";
	cin >> piga;
	cout << "小猪B的体重是：";
	cin >> pigb;
	cout << "小猪C的体重是：";
	cin >> pigc;
	if (piga > pigb)
	{
		if (piga > pigc)
		{
			cout << "小猪A最重" << endl;
		}
	}
	else if (pigb > pigc)
	{
		cout << "小猪B最重" << endl;
	}
	else
	{
		cout << "小猪C最重" << endl;
	}
	system("pause");
	return 0;
}
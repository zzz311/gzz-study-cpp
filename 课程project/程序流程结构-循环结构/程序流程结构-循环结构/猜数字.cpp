#include <iostream>
#include <ctime>
using namespace std;
int main()
{ 
	//1、生成一个随机数
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	//2、输入随机数
	int val = 0;
	while (1)
	{
		cout << "您输入的数字是:";
		cin >> val;
	//3、判断猜测结果
		if (val > num)
		{
			cout << "猜测大了" << endl;
		}
		else if (val < num)
		{
			cout << "猜测小了" << endl;
		}
		else
		{ 
			cout << "恭喜你猜对了" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
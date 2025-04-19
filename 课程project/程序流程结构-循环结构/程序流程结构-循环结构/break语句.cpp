#include <iostream>
using namespace std;
int main()
{
	//switch语句中的break
	/*cout << "游戏可选择的难度有：" << endl;
	cout << "1.简单、2.普通、3.困难：" << endl;
	int select = 0;
	cout << "你选择的难度是:";
	cin >> select;
	switch (select) 
	 {
	 case 1:
		cout << "简单" << endl;
		break;
	 case 2:
		cout << "普通" << endl;
		break;
	 case 3:
		cout << "困难" << endl;
		break;
	 }*/

	//循环中的break语句
	//for (int i = 0;i < 10;i++)
	//{
	//	for(int j=1;j<10;j++)
	//	{ 
	//		
	//		if (j > 5)
	//		{
	//			break;
	//		}
	//		cout << "*" << " ";
	//	}
	//	cout << endl;

	//}
	for (int i = 1;i<=100;i++)
	{ 
		cout << i<<" ";
		if(i%3==0)
		{
			cout << endl;
		}

	}
	system("pause");
	return 0;
}

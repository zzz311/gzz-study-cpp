#include <iostream>
using namespace std;
int main()
{
	//乘法口诀表
	for (int i = 1;i < 10;i++) //行数
	{
		
		for (int j = 1; j<=i;j++) //列数
		{
			cout << j << "*"<< i << "="<< j*i <<" ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
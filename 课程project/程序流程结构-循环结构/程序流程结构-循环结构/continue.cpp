#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	//������� ż�������
	for (int i = 0;i < 101;i++)
	{
		if (i % 2 == 0)
		{
			continue;

		}
		cout << i << endl;
	}
		
	system("pause");
	return 0;
}
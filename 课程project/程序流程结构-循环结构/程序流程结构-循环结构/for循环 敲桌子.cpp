#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	for (int i = 1;i <= 100;i++)
	{
		int a = i % 10;
		int b = (i / 10) % 10;
		if(a==7||b==7|| i % 7 == 0){
			cout << "ÇÃ×À×Ó" << endl;
		}
		else 
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}
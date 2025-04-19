#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int num = 100;
	
	do {
		int ge = 0;
		int shi = 0;
		int bai = 0;
		ge = num % 10;
		shi = (num / 10) % 10;
		bai = num / 100;
		if (ge*ge*ge+shi*shi*shi+bai*bai*bai== num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}
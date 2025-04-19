#include<iostream >
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int* p = arr; //数组首地址
	for (int i = 0;i < 5;i++)
	{
		//利用指针遍历数组
		cout << *p << " " ;
		p++;
	}
	cout << endl;
	system("pause");
	return 0;
}
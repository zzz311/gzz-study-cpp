#include<iostream>
using namespace std;

//交换函数模板
template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//选择排序模板
template<typename T>
void selectsort(T arr[],int len)
{
	for (int i = 0;i < len;i++)
	{
		int max = i;  //认定最大值的下标
		for (int j = i + 1;j < len;j++)
		{
			if (arr[j] > arr[max])
			{
				max=j; //更新最大值下标
			}
		}
		if (max != i)
		{
			myswap(arr[max], arr[i]);
		}
	}
}

//打印函数模板
template<typename T>
void printarray(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
}

void test01()
{
	char chararr[] = "acdbe";
	int len = sizeof(chararr) / sizeof(chararr[0]);
	selectsort(chararr, len);
	printarray(chararr, len);
}

void test02()
{
	int intarr[] = { 5,6,8,1,3 };
	int len = sizeof(intarr) / sizeof(intarr[0]);
	selectsort(intarr, len);
	printarray(intarr, len);
}

int main()
{
	test01();
	cout << endl;
	test02();
	cout << endl;
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void Myprint(int val)
{
	cout << val << endl;
}

void test01()
{
	//创建vector容器对象，并且通过模板参数指定容器中存放的数据类型
	vector<int> v;
	//向容器中存放数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//迭代器用来遍历容器中的元素
	//v.begin()指向容器中第一个数据
	//v.end()指向容器中最后一个元素的下一个位置

	vector<int>::iterator itbegin = v.begin();
	vector<int>::iterator itend = v.end();

	//第一种遍历方式
	while (itbegin!=itend)
	{
		cout << *itbegin << endl;
		itbegin++;
	}
	cout << endl;

	//第二种遍历方式
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;
	}
	cout << endl;

	//第三种遍历方式
	//使用STL提供标准遍历算法，头文件 algorithm

	for_each(v.begin(), v.end(), Myprint);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void test01()
{
	
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	for (int i = 0;i < 4;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
		v3.push_back(i + 2);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
	{
		//*it 仍然是vector容器 所以仍然需要遍历
		for (vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++)
		{
			cout << *vit << endl;
		}
		cout << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}

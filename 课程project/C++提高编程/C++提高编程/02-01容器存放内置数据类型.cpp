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
	//����vector�������󣬲���ͨ��ģ�����ָ�������д�ŵ���������
	vector<int> v;
	//�������д������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//�������������������е�Ԫ��
	//v.begin()ָ�������е�һ������
	//v.end()ָ�����������һ��Ԫ�ص���һ��λ��

	vector<int>::iterator itbegin = v.begin();
	vector<int>::iterator itend = v.end();

	//��һ�ֱ�����ʽ
	while (itbegin!=itend)
	{
		cout << *itbegin << endl;
		itbegin++;
	}
	cout << endl;

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;
	}
	cout << endl;

	//�����ֱ�����ʽ
	//ʹ��STL�ṩ��׼�����㷨��ͷ�ļ� algorithm

	for_each(v.begin(), v.end(), Myprint);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
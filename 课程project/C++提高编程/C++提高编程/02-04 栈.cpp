#include<iostream>
using namespace std;
#include<stack>

void test01()
{

	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << "ջ�Ĵ�С��" << s.size() << endl;

	while (!s.empty())
	{
		cout << "ջ��Ԫ���ǣ�" << s.top() << endl;
		s.pop();
	}

	cout << "ջ�Ĵ�С��" << s.size() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;

}
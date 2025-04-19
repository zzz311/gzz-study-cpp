#include<iostream>
using namespace std;
#include<stack>

void test01()
{

	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << "栈的大小：" << s.size() << endl;

	while (!s.empty())
	{
		cout << "栈顶元素是：" << s.top() << endl;
		s.pop();
	}

	cout << "栈的大小：" << s.size() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;

}
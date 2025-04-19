#include<iostream>
using namespace std;
class person
{
	friend ostream& operator<< (ostream& cout, person& p);
public:
	person(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
private:
	int m_a;
	int m_b;
};
//只能用全局函数来重载左移运算符
ostream& operator<< (ostream& cout, person& p)
{
	cout << "m_a= "<<p.m_a<<" "<<"m_b= "<<p.m_b<<endl;
	return cout;
}
void test01()
{
	person p(10, 10);
	cout << p << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
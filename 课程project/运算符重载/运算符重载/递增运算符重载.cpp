#include <iostream>
using namespace std;
class Myinteger
{
	friend ostream& operator<< (ostream& cout, Myinteger myint);
public:
	Myinteger()
	{
		m_num = 0;
	}
	//����ǰ��++�����
	Myinteger& operator++ ()
	{
		//�Ƚ���++����
		m_num++;
		//����һ��ԭֵ����
		return *this;
	}
	//���غ���++�����
	Myinteger operator++(int)
	{
		//�ȼ�¼��ǰֵ
		Myinteger temp = *this;
		//�ٽ���++����
		m_num++;
		//����ֵ
		return temp;
	}
private:
	int m_num;
};
// �������������
ostream& operator<< (ostream& cout, Myinteger myint)
{
	cout << myint.m_num << endl;
	return cout;
}
void test01()
{
	Myinteger myint;
	
	cout << ++(++myint) << endl;
}
void test02()
{
	Myinteger myint;

	cout << myint++<< endl; //0
	cout << myint << endl; //1
	cout << myint++ << endl;  //1
	cout << myint << endl; //2
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}



#include<iostream>
using namespace std;
//��̬��Ա����
//- ���ж�����ͬһ������
//-��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class person
{
public:
	static void func()
	{
		cout << m_A << endl;  
		//cout << m_b << endl; ��̬��Ա�������ܷ��ʷǾ�̬��Ա����
	}
	static int m_A;
	int m_b;
private:
	static void func1()
	{
		cout << m_A << endl;
	}

};
int person::m_A = 100;

int main()
{
  //1.ͨ���������
	person p;
	p.func();
  //2.ͨ�������
	person::func();
	//person::func1(); �з���Ȩ��
	system("pause");
	return 0;
}
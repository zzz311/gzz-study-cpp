#include<iostream>
using namespace std;
#include<string>

//������ģ��
template<class T>
class base
{
	T m;
};

class son1 :public  base<int> //����Ҫ֪��������T�����ͣ��ſ��Լ̳�
{

};

//�����ָ��������T�����ͣ���ô����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class son2 :public base<T1>
{
public:
	son2()
	{
		cout << "T1�����ǣ�" << typeid(T1).name() << endl;  //int
		cout << "T2�����ǣ�" << typeid(T2).name() << endl;  //char
	}
	T2 obj;
};

void test()
{
	son1 s1;
	son2 <int,char>s2;
}

int main()
{
	test();
	system("pause");
	return 0;
}
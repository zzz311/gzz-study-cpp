#include<iostream>
using namespace std;
class person
{
public:
	person(int age) {
		//thisָ��ָ����������õĳ�Ա���������Ķ���
		//���βκͳ�Ա����ͬ��ʱ������thisָ��������
		this->age = age;
	}
	person&  personaddage(person &p)  //���ص�һֱ��ͬһ��������
	{
		this->age += p.age;
		//thisָ�����p2��ָ�룬��*this����ָ��ľ���p2�Ķ����� *this = p2
		return *this; //�����õķ�ʽ��һ�����أ������ֵ��ʽ�������ù��캯�����ص���һ������
	}
	int age;
};
//1.������Ƴ�ͻ
void test01()
{
	person p(18);
	cout << "p1������Ϊ" << p.age << endl;
}
//2.���ض������� return *this
void test02()
{
	person p2(18);
	person p1(18);
	//��ʽ���˼��
	p2.personaddage(p1).personaddage(p1).personaddage(p1); //54
	//������Ƿ�������ֵ����ô���ص���һ��������������һֱ��ӡ�Ļ���p2.age����һֱ��36
	cout << "p2������Ϊ" << p2.age << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
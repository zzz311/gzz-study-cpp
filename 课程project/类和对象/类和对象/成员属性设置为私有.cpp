#include<iostream>
using namespace std;
#include<string>
//������  �����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
class person
{
private:  //��������Ϊ˽��
	string m_Name;  //������Ϊ�ɶ���д
	int m_Age=18;      //������Ϊ �ɶ�
	string m_Idol;  //������Ϊ ��д
public:  //��������Ϊ˽�У��ù�����Ϊ����˽������ ���пɶ��Լ���д�Ĳ���
	//��������  ��д
	void setname(string name)
	{
		m_Name = name;
	}
	//��ȡ���� �ɶ�
	string getname()
	{
		return m_Name;
	}
	//��ȡ���� �ɶ� get
	int getAge()
	{
		return m_Age;
	}
	//����Idol ��д set
	string setIdol(string Idol)
	{
		m_Idol = Idol;
	}
};
int main()
{
	person p1;
	//��������
	p1.setname("�˴�");
	//��ȡ����
	cout << "������" << p1.getname() << endl;
	//��ȡ����
	cout << "���䣺" << p1.getAge() << endl;
	//����ż�� ��д �����ʲ���
	p1.setIdol("������");
	system("pause");
	return 0;

}

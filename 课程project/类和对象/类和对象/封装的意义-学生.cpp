#include<iostream>
using namespace std;
#include<string>
class student
{
	//Ȩ�ޣ���
public:
	
	//���ԣ�������ѧ��
	string m_name;
	string m_xvehao;
	
	//��Ϊ1����ֵ
	void writestudentname(string name)
	{
		m_name = name;
	}
	void writestudentid(string xvehao)
	{
		m_xvehao = xvehao;
	}
	//��Ϊ2����ʾ����ѧ��
	void showstudent()
	{
		cout << "ѧ���������ǣ�" << m_name << endl;
		cout << "ѧ����ѧ����:" << m_xvehao << endl;
	}
};
int main(){
	//ͨ���ഴ������ ʵ����
	student s1;

	s1.writestudentname("�˴�");
	s1.writestudentid("2370697");
	s1.showstudent();
	system("pause");
	return 0;
}
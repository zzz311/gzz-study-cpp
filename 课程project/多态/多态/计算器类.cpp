#include<iostream>
using namespace std;
#include<string>
//��ͨд��
class Calculator
{
public:
	int getresult(string oper)
	{
		if (oper == "+")
			return num1 + num2;
		else if (oper == "-")
			return num1 - num2;
		else if (oper == "*")
			return num1 * num2;
	}
	int num1;
	int num2;
};
//�������չ�µĹ��ܣ���Ҫ�޸�Դ�룻
// ����ʵ�����У��ᳫ ����ԭ��
// ����ԭ��:����չ���п��������޸Ľ��йرա�

//��̬д��
//������
class abstractcalculator
{
public:
	virtual int getresult() = 0;//�麯��
	
	int m_num1;
	int m_num2;
};
//�ӷ���
class addcalculator:public abstractcalculator
{
	int getresult()
	{
		return m_num1 + m_num2;
	}
};
//������
class subcalculator :public abstractcalculator
{
	int getresult()
	{
		return m_num1 - m_num2;
	}
};
//�˷���
class mulcalculator :public abstractcalculator
{
	int getresult()
	{
		return m_num1 * m_num2;
	}
};

int dowork(abstractcalculator* abs) //abstractcalcutor *abs=new addcalculator abstractcalcutor *abs= add
{
	
	return abs->getresult();
}

void test03()
{
	//ʵ����
	addcalculator* add = new addcalculator;
	add->m_num1 = 10;
	add->m_num2 = 20;
	int a=dowork(add); //���ຯ��ָ���������
	cout << a << endl;

	subcalculator* sub = new subcalculator;
	sub->m_num1 = 10;
	sub->m_num2 = 20;
	int b = dowork(sub);
	cout << b << endl;


}

//void test01()
//{
//	Calculator c;
//	c.num1 = 10;
//	c.num2 = 10;
//	int temp = c.getresult(" +");
//	cout << c.num1 << "+" << c.num2 << "=" << c.getresult("+" ) << endl;
//	cout << c.num1 << "-" << c.num2 << "=" << c.getresult("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getresult("*") << endl;
//}
//void test02()
//{
//	//�ӷ�
//	abstractcalculator* abs = new addcalculator; ����ָ��ָ���������
//	abs->m_num1 = 100;
//	abs->m_num2 = 100;
//	abs->getresult();
//	cout << abs->m_num1 << "+" <<abs->m_num2 << "=" << abs->getresult() << endl;
//	delete abs;
//
//	//����
//	 abs = new subcalculator; //��Ҫ�����ض������� 
//	abs->m_num1 = 100;
//	abs->m_num2 = 100;
//	abs->getresult();
//	cout << abs->m_num1 << "-" << abs->m_num2 << "=" << abs->getresult() << endl;
//	delete abs;
//
//	//�˷�
//	 abs = new mulcalculator;
//	abs->m_num1 = 100;
//	abs->m_num2 = 100;
//	abs->getresult();
//	cout << abs->m_num1 << "*" << abs->m_num2 << "=" << abs->getresult() << endl;
//	delete abs;
//}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
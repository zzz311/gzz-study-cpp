#include<iostream>
using namespace std;
//���һ��Բ�࣬����Բ���ܳ�
//Բ����
const double PI = 3.14;
//�����
class Circle
{
	//����Ȩ��
public:  //����Ȩ��
	//���� ���뾶
	int m_r;
	//��Ϊ ����Բ���ܳ� �ú�����ʾ
	double zc() 
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//ͨ��Բ�� ��������
	Circle C1;
	//����������Ը�ֵ
	C1.m_r = 2;
	C1.zc();
	cout << "Բ���ܳ��ǣ�" << C1.zc() << endl;

	system("pause");
	return 0;
}
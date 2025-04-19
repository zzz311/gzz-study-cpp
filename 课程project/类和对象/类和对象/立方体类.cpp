#include<iostream>
using namespace std;
#include<string>
//���һ����������
class Cube
{
private:
	int m_H; //������ĸ�
	int m_L; //������ĳ�
	int m_W; //������Ŀ�
public:
	//��Ա����
  //���ó����
	void setCube(int H, int L, int W)
	{
		m_H = H;
		m_L = L;
		m_W = W;
	}
	//��ȡ�����
	int getCubeH()
	{
		return m_H;
	}
	int getCubeL()
	{
		return m_L;
	}
	int getCubeW()
	{
		return m_W;
	}
	//����� 
	int getCubeS()
	{
		return(2 * (m_H * m_L + m_H * m_W + m_L * m_W));
	}
  //�����
	int getCubeV()
	{
		return(m_H * m_L * m_W);
	}
	//���ó�Ա�����ж��Ƿ����
	bool isSameByclass(Cube &C)  //��Ϊ��Ա����Ӧ�õ�ʱ�� ���Ѿ�����һ��ʵ�����ĳ�Ա������ֻ��Ҫ����һ���Ϳ�����
	{
		if (m_H == C.getCubeH() && m_L == C.getCubeL() && m_W == C.getCubeW())
		{
			return true;
		}
		return false;
	}
};
//����ȫ�ֺ����ж��Ƿ����
bool isSame(Cube &C1, Cube &C2)
{
	if (C1.getCubeH() == C2.getCubeH() && C1.getCubeL() == C2.getCubeL() && C1.getCubeW() == C2.getCubeW())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube C1;
	C1.setCube(10, 20, 30);
	cout <<"����ǣ�" << C1.getCubeS() << endl;
	cout << "����ǣ�" << C1.getCubeV() << endl;
	Cube C2;
	C2.setCube(10, 20, 31);
	//ȫ�ֺ���
	bool ret1 = isSame(C1, C2);
	if (ret1)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
	//��Ա����
	bool ret2 = C1.isSameByclass(C2);
	if (ret2)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
	system("pause");
	return 0;
}
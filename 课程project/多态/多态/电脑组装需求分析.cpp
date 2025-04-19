#include <iostream>
using namespace std;
#include<string>
//��������CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void Caculator() = 0;
};

//���������Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void Display() = 0;
};

//���������ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void Storage() = 0;
};

//����������
class Computer
{
public:
	//�������ʼ��
	Computer(CPU* cpu,VideoCard* vc,Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void dowork()
	{
		//������������������ýӿ� 
		m_cpu->Caculator(); //�����಻��ʵ������ֻ�ܴ���ָ�룬ָ�����ʵ���������ࡣ
		m_vc->Display();
		m_mem->Storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}            
	}
private:
	CPU* m_cpu; //cpu���ָ�� //����ָ������ָ�룬��������ĺ���  ����ָ��������ຯ��������̬
	VideoCard* m_vc; //�Կ����ָ��
	Memory* m_mem; //�ڴ������ָ��
};

//�����������
class IntelCpu:public CPU
{
	
public:
		void Caculator()
	{
		cout << "IntelCpu������" << endl;
	}
};

class Intelvc :public VideoCard
{
public:
	void Display()
	{
		cout << "Intel�Կ�������" << endl;
	}
};

class IntelMem :public Memory
{
public:
	void Storage()
	{
		cout << "Intel�ڴ���������" << endl;
	}
};

class LenovoCpu :public CPU
{
public:
	void Caculator()
	{
		cout << "LenovoCpu������" << endl;
	}
};

class Lenovovc :public VideoCard
{
public:
	void Display()
	{
		cout << "Lenovo�Կ�������" << endl;
	}
};

class Lenovomem :public Memory
{
public:
	void Storage()
	{
		cout << "Lenovo�ڴ���������" << endl;
	}
};

void test01()
{
	cout << "��һ̨���ԣ�" << endl;
	//����ָ��ָ���������
	CPU* intelCpu = new IntelCpu;
	VideoCard* intelvc = new Intelvc;
	Memory* intelmem = new IntelMem;
	//�������õ��Թ��� ���ú��� 
	Computer* mycomputer = new Computer(intelCpu, intelvc, intelmem);
	mycomputer->dowork();
	//�ͷ��ڴ�
	delete mycomputer;
	cout << "-----------------------------------" << endl;
	cout << "�ڶ�̨���ԣ�" << endl;
	Computer* yourcomputer = new Computer(new LenovoCpu, new Lenovovc, new Lenovomem);
	yourcomputer->dowork();
	delete yourcomputer;

}

int main()
{
	test01();
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
#include<string>
//创建抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void Caculator() = 0;
};

//创建抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void Display() = 0;
};

//创建抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void Storage() = 0;
};

//创建电脑类
class Computer
{
public:
	//电脑类初始化
	Computer(CPU* cpu,VideoCard* vc,Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void dowork()
	{
		//让零件工作起来，调用接口 
		m_cpu->Caculator(); //抽象类不能实例化，只能创建指针，指向可以实例化的子类。
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
	CPU* m_cpu; //cpu零件指针 //这是指向基类的指针，调用子类的函数  父类指针调用子类函数产生多态
	VideoCard* m_vc; //显卡零件指针
	Memory* m_mem; //内存条零件指针
};

//具体零件厂商
class IntelCpu:public CPU
{
	
public:
		void Caculator()
	{
		cout << "IntelCpu运行了" << endl;
	}
};

class Intelvc :public VideoCard
{
public:
	void Display()
	{
		cout << "Intel显卡运行了" << endl;
	}
};

class IntelMem :public Memory
{
public:
	void Storage()
	{
		cout << "Intel内存条运行了" << endl;
	}
};

class LenovoCpu :public CPU
{
public:
	void Caculator()
	{
		cout << "LenovoCpu运行了" << endl;
	}
};

class Lenovovc :public VideoCard
{
public:
	void Display()
	{
		cout << "Lenovo显卡运行了" << endl;
	}
};

class Lenovomem :public Memory
{
public:
	void Storage()
	{
		cout << "Lenovo内存条运行了" << endl;
	}
};

void test01()
{
	cout << "第一台电脑：" << endl;
	//父类指针指向子类对象
	CPU* intelCpu = new IntelCpu;
	VideoCard* intelvc = new Intelvc;
	Memory* intelmem = new IntelMem;
	//电脑类让电脑工作 调用函数 
	Computer* mycomputer = new Computer(intelCpu, intelvc, intelmem);
	mycomputer->dowork();
	//释放内存
	delete mycomputer;
	cout << "-----------------------------------" << endl;
	cout << "第二台电脑：" << endl;
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
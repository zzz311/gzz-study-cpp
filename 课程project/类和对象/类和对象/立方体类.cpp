#include<iostream>
using namespace std;
#include<string>
//设计一个立方体类
class Cube
{
private:
	int m_H; //立方体的高
	int m_L; //立方体的长
	int m_W; //立方体的宽
public:
	//成员函数
  //设置长宽高
	void setCube(int H, int L, int W)
	{
		m_H = H;
		m_L = L;
		m_W = W;
	}
	//获取长宽高
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
	//求面积 
	int getCubeS()
	{
		return(2 * (m_H * m_L + m_H * m_W + m_L * m_W));
	}
  //求体积
	int getCubeV()
	{
		return(m_H * m_L * m_W);
	}
	//利用成员函数判断是否相等
	bool isSameByclass(Cube &C)  //因为成员函数应用的时候 就已经有了一个实例化的成员，所以只需要传另一个就可以了
	{
		if (m_H == C.getCubeH() && m_L == C.getCubeL() && m_W == C.getCubeW())
		{
			return true;
		}
		return false;
	}
};
//利用全局函数判断是否相等
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
	cout <<"面积是：" << C1.getCubeS() << endl;
	cout << "体积是：" << C1.getCubeV() << endl;
	Cube C2;
	C2.setCube(10, 20, 31);
	//全局函数
	bool ret1 = isSame(C1, C2);
	if (ret1)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	//成员函数
	bool ret2 = C1.isSameByclass(C2);
	if (ret2)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
//设计一个圆类，来求圆的周长
//圆周率
const double PI = 3.14;
//设计类
class Circle
{
	//访问权限
public:  //公共权限
	//属性 ：半径
	int m_r;
	//行为 ：求圆的周长 用函数表示
	double zc() 
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	//通过圆类 创建对象
	Circle C1;
	//给对象的属性赋值
	C1.m_r = 2;
	C1.zc();
	cout << "圆的周长是：" << C1.zc() << endl;

	system("pause");
	return 0;
}
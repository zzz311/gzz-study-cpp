#include<iostream>
using namespace std;
#include<string>
//设计一个人类
class person
{
	//权限
public:
	//属性
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	//行为
	void showperson() //类内都可以访问
	{
		m_name = "张三";
		m_car = "摩托车";
		m_password = 2370718;
	}
};
int main()
{
	person p1;
	p1.m_name = "李四"; //公共权限下
	//p1.m_car = "大奔"; 保护权限下在类外不可以访问
	//p1.m_passwor="123456"; 私有权限下在类外不可访问
	system("pause");
	return 0;
}
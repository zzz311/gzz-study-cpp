#include<iostream>
using namespace std;
#include<string>
//创建类  将所有成员属性设置为私有，可以自己控制读写权限
class person
{
private:  //属性设置为私有
	string m_Name;  //将设置为可读可写
	int m_Age=18;      //将设置为 可读
	string m_Idol;  //将设置为 可写
public:  //属性设置为私有，用公有行为访问私有属性 进行可读以及可写的操作
	//设置姓名  可写
	void setname(string name)
	{
		m_Name = name;
	}
	//获取姓名 可读
	string getname()
	{
		return m_Name;
	}
	//获取年龄 可读 get
	int getAge()
	{
		return m_Age;
	}
	//设置Idol 可写 set
	string setIdol(string Idol)
	{
		m_Idol = Idol;
	}
};
int main()
{
	person p1;
	//姓名设置
	p1.setname("邓川");
	//获取姓名
	cout << "姓名：" << p1.getname() << endl;
	//获取年龄
	cout << "年龄：" << p1.getAge() << endl;
	//设置偶像 可写 外界访问不到
	p1.setIdol("郭紫珍");
	system("pause");
	return 0;

}

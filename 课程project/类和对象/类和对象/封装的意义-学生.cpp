#include<iostream>
using namespace std;
#include<string>
class student
{
	//权限！！
public:
	
	//属性：姓名和学号
	string m_name;
	string m_xvehao;
	
	//行为1：赋值
	void writestudentname(string name)
	{
		m_name = name;
	}
	void writestudentid(string xvehao)
	{
		m_xvehao = xvehao;
	}
	//行为2：显示姓名学号
	void showstudent()
	{
		cout << "学生的姓名是：" << m_name << endl;
		cout << "学生的学号是:" << m_xvehao << endl;
	}
};
int main(){
	//通过类创建对象 实例化
	student s1;

	s1.writestudentname("邓川");
	s1.writestudentid("2370697");
	s1.showstudent();
	system("pause");
	return 0;
}
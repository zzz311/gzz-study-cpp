#include<iostream>
#include "showMenu.h"
#include<string>
#define MAX 100
using namespace std;
//设计成员结构体
struct person 
{
	string m_name;
	int m_sex=0; //1表示男，2表示女
	int m_age=0;
	string m_number;
	string m_address;
};
//设计通讯录结构体
struct Addressbooks 
{
struct person personArray[MAX];//通讯录保存的联系人数组
int m_size=0; //记录通讯录人员个数
};
//1、添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满,无法添加！" << endl;
		return;
	}
	else
	{
		//添加姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;

		//添加性别
		cout << "请输入性别： " << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].m_sex = sex;
				break;
			}
			cout << "输入无效，请重新输入" << endl;
		}
		//添加年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age > 0 && age < 100) 
			{
				abs->personArray[abs->m_size].m_age = age;
				break;
			}
			cout << "输入不合理，请重新输入" << endl;
		}
		//添加联系电话
		cout << "请输入联系电话:" << endl;
		string number;
		cin >> number;
		abs->personArray[abs->m_size].m_number = number;
		//添加家庭住址
		cout << "请输入家庭住址:" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_address = address;
		//更新通讯录人数
		abs->m_size++;
		cout << "添加完成" << endl;
		
	}
	//请按任意键继续
	system("pause");
	//清屏
	system("cls");
}
//2、显示联系人
void showPerson(Addressbooks* abs)
{
	//判断联系人是否为空
	if (abs->m_size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0;i < abs->m_size;i++)
		{
			cout << "姓名:  " << abs->personArray[i].m_name << "\t";
			cout << "性别： " << (abs->personArray[i].m_sex == 1? "男" : "女") << "\t";
			cout << "年龄： " << abs->personArray[i].m_age << "\t";
			cout << "联系电话：  " << abs->personArray[i].m_number << "\t";
			cout << "家庭住址：  " << abs->personArray[i].m_address << endl;
		}
	}
	system("pause");
	system("cls");
}
//检测联系人是否存在
//如果联系人存在，则返回联系人所在数组元素位置；如果联系人不存在，则输出不存在
int isExist(string name, Addressbooks* abs)
{
	for (int i = 0;i < abs->m_size;i++) 
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;
		}
	}
	return -1;
}
//3、删除指定的联系人
void deletePerson(Addressbooks* abs) {
	cout << "请输入要删除的联系人： " << endl;
	string name;
	cin >> name;
	int ret = isExist(name, abs);
	//ret=i,则存在执行删除操作，ret=-1，则不存在。
	if (ret != -1)
	{
		//执行删除操作
		for (int i = ret;i < abs->m_size;i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "删除完成" << endl;
	}
	else
	{
		cout << "联系人不存在" << endl;
	}
	system("pause");
	system("cls");
}
//4、查找指定的联系人
void findPerson(Addressbooks* abs) {
	cout << "请输入要查找的联系人： " << endl;
	string name;
	cin >> name;
	int ret = isExist(name, abs);
	if (ret != -1) {
		//执行显示联系人的操作
		cout << "姓名:  " << abs->personArray[ret].m_name << "\t";
		cout << "性别： " << (abs->personArray[ret].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄： " << abs->personArray[ret].m_age << "\t";
		cout << "联系电话：  " << abs->personArray[ret].m_number << "\t";
		cout << "家庭住址：  " << abs->personArray[ret].m_address << endl;
	}
	else {
		cout << "查找失败，联系人不存在" << endl;
	}
	system("pause");
	system("cls");
}
//5、修改指定的联系人
void modifyPerson(Addressbooks* abs) {
	cout << "请输入要修改的联系人： " << endl;
	string name;
	cin >> name;
	int ret = isExist(name, abs);
	if(ret!=-1)
	{
		//修改联系人
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;

		//修改性别
		cout << "请输入性别： " << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			cout << "输入无效，请重新输入" << endl;
		}
		//修改年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personArray[ret].m_age = age;
				break;
			}
			cout << "输入不合理，请重新输入" << endl;
		}
		//修改联系电话
		cout << "请输入联系电话:" << endl;
		string number;
		cin >> number;
		abs->personArray[ret].m_number = number;
		//修改家庭住址
		cout << "请输入家庭住址:" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_address = address;
		cout << "修改成功" << endl;
	}
	else {
		cout << "查无此人，无法修改" << endl;
	}
	system("pause");
	system("cls");
}
//6、清空通讯录
void cleanPerson (Addressbooks * abs)
{
	cout << "您真的要清空联系人吗？" << endl;
	cout << "确定要清空----1" << endl;
	cout << "不清空----2" << endl;
	int choice = 0;
	cin >> choice;
	if (choice == 1) {
		abs->m_size = 0;
		cout << "通讯录已清空" << endl;
	}
	system("pause");
	system("cls");
}
int main() 
{
	//创建通讯录
	struct Addressbooks abs;  
	int m_size = 0;  //初始化通讯录中人员个数
	int select = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:  //添加联系人
			addPerson(&abs);  //利用地址传递修饰实参
			break; 
		case 2:  //显示联系人
			showPerson(&abs);
			break;
		case 3:  //删除联系人
			deletePerson(&abs);
			break;
		case 4:  //查找联系人
			findPerson(&abs);
			break;
		case 5:  //修改联系人
			modifyPerson(&abs);
			break;
		case 6:  //清空联系人
			cleanPerson(&abs);
			break;
		case 0:  //退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}
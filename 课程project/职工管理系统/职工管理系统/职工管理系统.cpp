#include<iostream>
using namespace std;
#include"WorkerManager.h"
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

int main()
{
	while (true)
	{
		//实例化对象
		WorkerManager wm;
		wm.show_Menu();
		cout << "请输入您的选择: " << endl;
		int choice = 0;
		cin >> choice;
		
		switch (choice) 
		{
		case 0:  //退出程序
			wm.ExitSystem();
			break;
		case 1:  //增加职工
			wm.addEmp();
			break;
		case 2:  //显示职工
			wm.showEmp();
			break;
		case 3:   //删除职工
			wm.deleteEmp();
			break;
		case 4:  //修改信息
			wm.modEmp();
			break;
		case 5:  //查找职工
			wm.findEmp();
			break;
		case 6:  //排序
			wm.sortEmp();
			break;
		case 7:  //清空
			wm.cleanfile();
			break;
		default:
			system("cls");  //清屏
	    }
	}

	system("pause");
	return 0;

}


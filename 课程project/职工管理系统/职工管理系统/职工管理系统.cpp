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
		//ʵ��������
		WorkerManager wm;
		wm.show_Menu();
		cout << "����������ѡ��: " << endl;
		int choice = 0;
		cin >> choice;
		
		switch (choice) 
		{
		case 0:  //�˳�����
			wm.ExitSystem();
			break;
		case 1:  //����ְ��
			wm.addEmp();
			break;
		case 2:  //��ʾְ��
			wm.showEmp();
			break;
		case 3:   //ɾ��ְ��
			wm.deleteEmp();
			break;
		case 4:  //�޸���Ϣ
			wm.modEmp();
			break;
		case 5:  //����ְ��
			wm.findEmp();
			break;
		case 6:  //����
			wm.sortEmp();
			break;
		case 7:  //���
			wm.cleanfile();
			break;
		default:
			system("cls");  //����
	    }
	}

	system("pause");
	return 0;

}


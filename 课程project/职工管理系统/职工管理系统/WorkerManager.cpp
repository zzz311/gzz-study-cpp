#include "WorkerManager.h"


WorkerManager::WorkerManager()
{
	//初始化属性 分三种情况
	//1.文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化属性
		this->m_Empnum = 0; //职工人数
		this->EmpArray = NULL;  //职工数组指针
		this->m_FileIsEmpty = true; //判断文件是否为空
		ifs.close();
		return;
	}

	//2.文件存在，但为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空!" << endl;
		//初始化属性
		this->m_Empnum = 0; //职工人数
		this->EmpArray = NULL;  //职工数组指针
		this->m_FileIsEmpty = true; //判断文件是否为空
		ifs.close();
		return;
	}

	//3.文件存在且保存职工数据
	int num = this->get_Empnum();  //统计职工个数
	//cout << "文件中有 " << num << " 个职工" << endl;
	this->m_Empnum = num;
	//根据职工数创建数组
	this->EmpArray = new Worker * [this->m_Empnum];
	//初始化职工
	this->init_Emp();

	//测试代码
	/*for (int i = 0;i < m_Empnum;i++)
	{
		cout << "职工号：" << this->EmpArray[i]->m_id
			<< " 职工姓名：" << this->EmpArray[i]->m_name
			<< " 部门编号：" << this->EmpArray[i]->m_deparid
			<<endl;
	}*/
}
 
//菜单显示
void WorkerManager:: show_Menu()
{
	cout << "*************************************" << endl;
	cout << "*********欢迎使用职工管理系统********" << endl;
	cout << "************0.退出管理程序***********" << endl;
	cout << "************1.增加职工信息***********" << endl;
	cout << "************2.显示职工信息***********" << endl;
	cout << "************3.删除离职职工***********" << endl;
	cout << "************4.修改职工信息***********" << endl;
	cout << "************5.查找职工信息***********" << endl;
	cout << "************6.按照编号排序***********" << endl;
	cout << "************7.清空所有文档***********" << endl;
	cout << "*************************************" << endl;
}

//退出程序
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //实现退出功能的函数
}

//添加职工
void WorkerManager::addEmp()
{
	cout << "请输入要添加的人数： ";
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//添加
		
		//计算新空间大小
		int newsize = this->m_Empnum + addnum; //新空间人数

		//开辟新空间
		Worker** newspace = new Worker * [newsize]; //放置*worker指针的指针数组

		//将原来空间数据拷贝到新空间
		if (this->EmpArray != NULL)
		{
			for (int i = 0;i < this->m_Empnum; i++)
			{
				newspace[i] = this->EmpArray[i];
			}
		}
		//批量添加新数据
		for (int i = 0;i < addnum;i++)
		{
			int id; //职工编号
			string name; //职工姓名
			int dselect; //岗位选择
			

			/*cout << "请输入第" << i + 1 << "个职工编号：";
            cin >> id;*/

			while (true)  //循环里外均可以
			{
				cout << "请输入第" << i + 1 << "个职工编号：";
				cin >> id;
				if (this->Emp_isExit(id) == -1)
				{
					break;
				}
				cout << "输入有误，员工编号重复"<<endl;
			}

			int ret = this->Emp_isExit(id);  //循环里
			/*if (ret != -1)
			{
				cout << "输入有误，员工编号重复" << endl;
				i--;
				continue;
			}*/
				
				
			
			cout << "请输入第" << i + 1 << "个职工姓名：";
			cin >> name;
			cout << "请选择该职工岗位：" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.总裁" << endl;
			cin >> dselect;

			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			// 将创建职工职责保存到数组中
			newspace[this->m_Empnum+i] = worker;
		}
		//释放原有空间
		delete[] this->EmpArray;
		
		//更改新空间的指向
		this->EmpArray = newspace;
		
		//更新新空间人数
		this->m_Empnum = newsize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "成功添加" << addnum << "名新职工!" << endl;

		this->save();
	}
	else 
	{
		cout << "输入有误，添加失败" << endl;
	}
	system("pause");
	system("cls");
}

//保存文件
void WorkerManager::save()
{
	ofstream ofs;

	ofs.open(FILENAME, ios::out);

	for (int i = 0;i < this->m_Empnum;i++)
	{
		ofs << this->EmpArray[i]->m_id << " "
			<< this->EmpArray[i]->m_name << " "
			<< this->EmpArray[i]->m_deparid << endl;
	}

	ofs.close();
}

//统计职工人数
int WorkerManager::get_Empnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dep_id;

	int num = 0 ;

	while (ifs >> id && ifs >> name && ifs >> dep_id)
	{
		num++;
	}
	ifs.close();
	
	return num;
}

//初始化员工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dep_id;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dep_id)
	{
		Worker* worker = NULL;
		//根据不同部门id创建不同对象
		if (dep_id == 1) //员工
		{
			worker = new Employee(id, name, dep_id);
		}
		else if (dep_id == 2) //经理
		{
			worker = new Manager(id, name, dep_id);
		}
		else if (dep_id == 3) //总裁
		{
			worker = new Boss(id, name, dep_id);
		}
		//存放在数组中
		this->EmpArray[index] = worker;
		index++;
	}
}

//显示职工函数
void WorkerManager::showEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		for (int i = 0;i < this->m_Empnum;i++)
		{
			this->EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

//删除职工
void WorkerManager::deleteEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "您想删掉的职工id是：" << endl;
		int id = 0;
		cin >> id;
		int index= this->Emp_isExit(id);

		if (index != -1) 
		{
			for (int i = index;i < this->m_Empnum - 1;i++)
			{
				this->EmpArray[i] = this->EmpArray[i + 1];
			}
			this->m_Empnum--;

			this->save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败，该成员不存在" << endl;
		}
	}
	system("pause");
	system("cls");
}

//修改职工
void WorkerManager::modEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "您需要修改的员工部门id是： ";
		int id;
		cin >> id;
		int ret = this->Emp_isExit(id);

		if (ret != -1)
		{
			//查找到职工编号后
			delete this->EmpArray[ret];

			int newid=0;
			string newname =" ";
			int dselect=0;

			//cout << "查到" << id << "号员工，请输入新职工号：";
			
			while (true)
			{
				cout << "查到" << id << "号员工，请输入新职工号：";
				cin >> newid;
				int ret = this->Emp_isExit(newid);
				if (ret == -1)
				{
					break;
				}
				cout << "输入有误，员工编号重复" << endl;
			}
			
			cout << "请输入新名字：";
			cin >> newname;
			cout << "请选择该职工岗位：" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.总裁" << endl;
			cin >> dselect;

			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new Employee(newid, newname, 1);
				break;
			case 2:
				worker = new Manager(newid, newname, 2);
				break;
			case 3:
				worker = new Boss(newid, newname, 3);
				break;
			default:
				break;
			}
			//更新数据
			this->EmpArray[ret] = worker;
			cout << "修改成功" << endl;

			//保存数据
			this->save();

		}
		else
		{
			cout << "查无此人，无法修改" << endl;
		}
	}
	system("pause");
	system("cls");
}

//查找职工
void WorkerManager::findEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		//选择查找途径
		cout << "您选择哪种方式查找：" << endl;
		cout << "1.按照职工编号" << endl;
		cout << "2.按照职工姓名" << endl;
		int dselect;
		cin >> dselect;
		if (dselect == 1)
		{
			//按照职工编号
			int id;
			cout << "请输入要查找的职工编号为：";
			cin >> id;


			int ret = Emp_isExit(id);
			if (ret != -1)
			{
				cout << "查找成功，职工存在" << endl;
				this->EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "职工不存在 ,查找失败" << endl;
			}
		}
		else if (dselect == 2)
		{
			//按照职工姓名
			string name;
			cout << "请输入要查找的职工姓名为：";
			cin >> name;

			//加入判断是否查到的标志
			bool flag = false;

			for (int i = 0;i < this->m_Empnum;i++)
			{
				if (this->EmpArray[i]->m_name == name)
				{
					cout << "查找成功，职工存在" << endl;
					flag = true;
					this->EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "职工不存在，查找失败" << endl;
			}
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
		}
	}
	system("pause");
	system("cls");
}

//职工编号排序
void WorkerManager:: sortEmp()
{
	if(this->m_FileIsEmpty )
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请选择职工编号排序方式：" << endl;
		cout << "1.按职工编号升序排列" << endl;
		cout << "2.按职工编号降序排列" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0;i < this->m_Empnum;i++)
		{
			//选择排序
			int minormax = i;  //先认定一个最大值或者最小值

			for(int j=i+1;j<this->m_Empnum;j++) //遍历进行比较

				if (select == 1) //升序
				{
					if (this->EmpArray[j]->m_id < this->EmpArray[minormax]->m_id)
					{
						minormax = j;

					}
				}
				else if (select == 2) //降序
				{
					if (this->EmpArray[j]->m_id > this->EmpArray[minormax]->m_id)
					{
						minormax = j;
					}
				}

			if (minormax != i)
			{
				Worker* temp = this->EmpArray[i];
				this->EmpArray[i] = this->EmpArray[minormax];
				this->EmpArray[minormax] = temp;
			}
		}
		cout << "排序完成,排序后结果为" << endl;
		this->save();
		this->showEmp();
	}
}

//清空文件的函数
void WorkerManager::cleanfile()
{
	cout << "您真的要清空文件吗？" << endl;
	cout << "1.确定" << endl;
	cout << "2.返回" << endl;
	int select = 0;
	cout << "您的选择是：";
	cin >> select;
	if (select == 1)
	{
		//清空文件
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc); //删除文件后重新创建
		ofs.close();

		if (this->EmpArray != NULL)
		{
			for (int i = 0;i < this->m_Empnum;i++)
			{
				delete this->EmpArray[i];
				this->EmpArray[i] = NULL;
			}
			delete[] this->EmpArray;
			this->EmpArray = NULL;
			this->m_Empnum = 0;
			this->m_FileIsEmpty = true;
		}
	}
	cout << "清空成功" << endl;
	system("pause");
	system("cls");
}

//职工是否存在的函数
int WorkerManager::Emp_isExit(int id)
{
	int index = -1;
	for (int i = 0;i < this->m_Empnum;i++)
	{
		if (this->EmpArray[i]->m_id == id)
		{
			index=i;
			break;
		}
	}
    return index;
}


WorkerManager::~WorkerManager()
{
	//释放堆区开辟的数据
	//因为 this->EmpArray = newspace,所以释放最终存放数据的那个空间数组名 避免重复释放
	if (this->EmpArray != NULL)
	{
		for (int i = 0;i < this->m_Empnum;i++)
		{
			if (this->EmpArray[i] != NULL)
			{
				delete this->EmpArray[i]; //先置空数组里在堆区开辟的数据
			}
		}
		delete[] this->EmpArray; //再整体置空堆区开辟的数组
		this->EmpArray = NULL;
	}
}
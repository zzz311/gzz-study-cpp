#include "WorkerManager.h"


WorkerManager::WorkerManager()
{
	//��ʼ������ ���������
	//1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ������
		this->m_Empnum = 0; //ְ������
		this->EmpArray = NULL;  //ְ������ָ��
		this->m_FileIsEmpty = true; //�ж��ļ��Ƿ�Ϊ��
		ifs.close();
		return;
	}

	//2.�ļ����ڣ���Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��!" << endl;
		//��ʼ������
		this->m_Empnum = 0; //ְ������
		this->EmpArray = NULL;  //ְ������ָ��
		this->m_FileIsEmpty = true; //�ж��ļ��Ƿ�Ϊ��
		ifs.close();
		return;
	}

	//3.�ļ������ұ���ְ������
	int num = this->get_Empnum();  //ͳ��ְ������
	//cout << "�ļ����� " << num << " ��ְ��" << endl;
	this->m_Empnum = num;
	//����ְ������������
	this->EmpArray = new Worker * [this->m_Empnum];
	//��ʼ��ְ��
	this->init_Emp();

	//���Դ���
	/*for (int i = 0;i < m_Empnum;i++)
	{
		cout << "ְ���ţ�" << this->EmpArray[i]->m_id
			<< " ְ��������" << this->EmpArray[i]->m_name
			<< " ���ű�ţ�" << this->EmpArray[i]->m_deparid
			<<endl;
	}*/
}
 
//�˵���ʾ
void WorkerManager:: show_Menu()
{
	cout << "*************************************" << endl;
	cout << "*********��ӭʹ��ְ������ϵͳ********" << endl;
	cout << "************0.�˳��������***********" << endl;
	cout << "************1.����ְ����Ϣ***********" << endl;
	cout << "************2.��ʾְ����Ϣ***********" << endl;
	cout << "************3.ɾ����ְְ��***********" << endl;
	cout << "************4.�޸�ְ����Ϣ***********" << endl;
	cout << "************5.����ְ����Ϣ***********" << endl;
	cout << "************6.���ձ������***********" << endl;
	cout << "************7.��������ĵ�***********" << endl;
	cout << "*************************************" << endl;
}

//�˳�����
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0); //ʵ���˳����ܵĺ���
}

//���ְ��
void WorkerManager::addEmp()
{
	cout << "������Ҫ��ӵ������� ";
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//���
		
		//�����¿ռ��С
		int newsize = this->m_Empnum + addnum; //�¿ռ�����

		//�����¿ռ�
		Worker** newspace = new Worker * [newsize]; //����*workerָ���ָ������

		//��ԭ���ռ����ݿ������¿ռ�
		if (this->EmpArray != NULL)
		{
			for (int i = 0;i < this->m_Empnum; i++)
			{
				newspace[i] = this->EmpArray[i];
			}
		}
		//�������������
		for (int i = 0;i < addnum;i++)
		{
			int id; //ְ�����
			string name; //ְ������
			int dselect; //��λѡ��
			

			/*cout << "�������" << i + 1 << "��ְ����ţ�";
            cin >> id;*/

			while (true)  //ѭ�����������
			{
				cout << "�������" << i + 1 << "��ְ����ţ�";
				cin >> id;
				if (this->Emp_isExit(id) == -1)
				{
					break;
				}
				cout << "��������Ա������ظ�"<<endl;
			}

			int ret = this->Emp_isExit(id);  //ѭ����
			/*if (ret != -1)
			{
				cout << "��������Ա������ظ�" << endl;
				i--;
				continue;
			}*/
				
				
			
			cout << "�������" << i + 1 << "��ְ��������";
			cin >> name;
			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ܲ�" << endl;
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
			// ������ְ��ְ�𱣴浽������
			newspace[this->m_Empnum+i] = worker;
		}
		//�ͷ�ԭ�пռ�
		delete[] this->EmpArray;
		
		//�����¿ռ��ָ��
		this->EmpArray = newspace;
		
		//�����¿ռ�����
		this->m_Empnum = newsize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addnum << "����ְ��!" << endl;

		this->save();
	}
	else 
	{
		cout << "�����������ʧ��" << endl;
	}
	system("pause");
	system("cls");
}

//�����ļ�
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

//ͳ��ְ������
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

//��ʼ��Ա��
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
		//���ݲ�ͬ����id������ͬ����
		if (dep_id == 1) //Ա��
		{
			worker = new Employee(id, name, dep_id);
		}
		else if (dep_id == 2) //����
		{
			worker = new Manager(id, name, dep_id);
		}
		else if (dep_id == 3) //�ܲ�
		{
			worker = new Boss(id, name, dep_id);
		}
		//�����������
		this->EmpArray[index] = worker;
		index++;
	}
}

//��ʾְ������
void WorkerManager::showEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
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

//ɾ��ְ��
void WorkerManager::deleteEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "����ɾ����ְ��id�ǣ�" << endl;
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
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ��ó�Ա������" << endl;
		}
	}
	system("pause");
	system("cls");
}

//�޸�ְ��
void WorkerManager::modEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "����Ҫ�޸ĵ�Ա������id�ǣ� ";
		int id;
		cin >> id;
		int ret = this->Emp_isExit(id);

		if (ret != -1)
		{
			//���ҵ�ְ����ź�
			delete this->EmpArray[ret];

			int newid=0;
			string newname =" ";
			int dselect=0;

			//cout << "�鵽" << id << "��Ա������������ְ���ţ�";
			
			while (true)
			{
				cout << "�鵽" << id << "��Ա������������ְ���ţ�";
				cin >> newid;
				int ret = this->Emp_isExit(newid);
				if (ret == -1)
				{
					break;
				}
				cout << "��������Ա������ظ�" << endl;
			}
			
			cout << "�����������֣�";
			cin >> newname;
			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ܲ�" << endl;
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
			//��������
			this->EmpArray[ret] = worker;
			cout << "�޸ĳɹ�" << endl;

			//��������
			this->save();

		}
		else
		{
			cout << "���޴��ˣ��޷��޸�" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::findEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		//ѡ�����;��
		cout << "��ѡ�����ַ�ʽ���ң�" << endl;
		cout << "1.����ְ�����" << endl;
		cout << "2.����ְ������" << endl;
		int dselect;
		cin >> dselect;
		if (dselect == 1)
		{
			//����ְ�����
			int id;
			cout << "������Ҫ���ҵ�ְ�����Ϊ��";
			cin >> id;


			int ret = Emp_isExit(id);
			if (ret != -1)
			{
				cout << "���ҳɹ���ְ������" << endl;
				this->EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "ְ�������� ,����ʧ��" << endl;
			}
		}
		else if (dselect == 2)
		{
			//����ְ������
			string name;
			cout << "������Ҫ���ҵ�ְ������Ϊ��";
			cin >> name;

			//�����ж��Ƿ�鵽�ı�־
			bool flag = false;

			for (int i = 0;i < this->m_Empnum;i++)
			{
				if (this->EmpArray[i]->m_name == name)
				{
					cout << "���ҳɹ���ְ������" << endl;
					flag = true;
					this->EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "ְ�������ڣ�����ʧ��" << endl;
			}
		}
		else
		{
			cout << "������������������" << endl;
		}
	}
	system("pause");
	system("cls");
}

//ְ���������
void WorkerManager:: sortEmp()
{
	if(this->m_FileIsEmpty )
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��ѡ��ְ���������ʽ��" << endl;
		cout << "1.��ְ�������������" << endl;
		cout << "2.��ְ����Ž�������" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0;i < this->m_Empnum;i++)
		{
			//ѡ������
			int minormax = i;  //���϶�һ�����ֵ������Сֵ

			for(int j=i+1;j<this->m_Empnum;j++) //�������бȽ�

				if (select == 1) //����
				{
					if (this->EmpArray[j]->m_id < this->EmpArray[minormax]->m_id)
					{
						minormax = j;

					}
				}
				else if (select == 2) //����
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
		cout << "�������,�������Ϊ" << endl;
		this->save();
		this->showEmp();
	}
}

//����ļ��ĺ���
void WorkerManager::cleanfile()
{
	cout << "�����Ҫ����ļ���" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	int select = 0;
	cout << "����ѡ���ǣ�";
	cin >> select;
	if (select == 1)
	{
		//����ļ�
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc); //ɾ���ļ������´���
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
	cout << "��ճɹ�" << endl;
	system("pause");
	system("cls");
}

//ְ���Ƿ���ڵĺ���
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
	//�ͷŶ������ٵ�����
	//��Ϊ this->EmpArray = newspace,�����ͷ����մ�����ݵ��Ǹ��ռ������� �����ظ��ͷ�
	if (this->EmpArray != NULL)
	{
		for (int i = 0;i < this->m_Empnum;i++)
		{
			if (this->EmpArray[i] != NULL)
			{
				delete this->EmpArray[i]; //���ÿ��������ڶ������ٵ�����
			}
		}
		delete[] this->EmpArray; //�������ÿն������ٵ�����
		this->EmpArray = NULL;
	}
}
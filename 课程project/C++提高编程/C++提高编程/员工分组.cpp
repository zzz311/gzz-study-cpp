#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<ctime>
#include<map>
#include<fstream>
#define CEHUA 1
#define MEISHU 2
#define YANFA 3
#define FILENAME "员工分组.txt"

class Worker {

public:
	int m_salary;
	string m_name;
};

void creatworker(vector<Worker>& v) {

	string nameseed = "ABCDEFGHIJ";
	for (int i = 0;i < 10;i++) {

		Worker worker;
		worker.m_name = "员工";
		worker.m_name += nameseed[i];
		worker.m_salary = rand() % 10000 + 10000;
		v.push_back(worker);
	}
}

void setgroup(vector<Worker>& v, multimap<int, Worker>& m) {
	//产生随机部门编号
	auto i = v.begin();
	for (Worker i : v) {
		int depid = rand() % 3+1;
		m.insert(pair<int, Worker>(depid, i));
	}
}

void cehua(multimap<int, Worker>& m) {
	
	cout << "策划部门：" << endl;

	auto pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "员工部门：" << pos->first << " "
			 << "姓名：" << pos->second.m_name << " " 
			 << "薪水：" << pos->second.m_salary << endl;
	}
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
	
}

void meishu(multimap<int, Worker>& m) {

	cout << "美术部门：" << endl;

	auto pos = m.find(MEISHU);
	int count = m.count(MEISHU);
	int index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "员工部门：" << pos->first << " "
			<< "姓名：" << pos->second.m_name << " "
			<< "薪水：" << pos->second.m_salary << endl;
	}
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
	
}

void yanfa(multimap<int, Worker>& m) {

	cout << "研发部门：" << endl;

	auto pos = m.find(YANFA);
	int count = m.count(YANFA);
	int index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "员工部门：" << pos->first << " "
			<< "姓名：" << pos->second.m_name << " "
			<< "薪水：" << pos->second.m_salary << endl;
	}
	cout << "--------------------------" << endl;
	system("pause");
	system("cls");
}

void save(multimap<int, Worker>& m) {

	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (auto it = m.begin();it != m.end();it++) {

		ofs << "员工部门：" << it->first << " "
			<< "姓名：" << it->second.m_name << " "
			<< "薪水：" << it->second.m_salary << endl;
	}

	ofs.close();
}


int main() {

	srand((unsigned int)time(NULL));
	
	//1.创建员工
	vector<Worker> vworker;
	creatworker(vworker);
	//测试
	/*auto i = vworker.begin();
	for (Worker i : vworker) {
		cout << i.m_name << " " << i.m_salary << endl;
	}*/

	//2.员工分组
	multimap<int, Worker>mworker;
	setgroup(vworker,mworker);

	/*for (const auto& it : mworker) {
		cout << "Key: " << it.first 
	 << ", Name: " << it.second.m_name 
	 << ", Salary: " << it.second.m_salary << endl;
	}*/
	
	/*for (auto it = mworker.begin();it != mworker.end();it++) {
		cout <<it->first  << " " << it->second.m_name<<it->second.m_salary << endl;
	}*/

	//3.按分组显示员工
	while(true){
	cout << "你想显示的部门为（输入0退出）：";
	int select = 0;
	cin >> select;

	if (select == 0) break; // 如果用户输入0，则退出循环

	switch (select) {
	case 1:
		cehua(mworker);
		break;
	case 2:
		meishu(mworker);
		break;
	case 3:
		yanfa(mworker);
		break;
	default:
		cout << "无效的选择，请重新输入！" << endl;
		break;
	}
}
	save(mworker);
	
	system("pause");
	return 0;

}
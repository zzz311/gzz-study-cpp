#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
#include<fstream>
#define FILENAME "评委打分.txt"

//创建选手类 
class person
{
public:
	person(string name, int score)
	{
		m_name = name;
		m_score = score;
	}
	string m_name;
	int m_score;
};

void creatperson(vector<person>& v)
{
	string nameseed = "ABCDE";
	
	for (int i = 0;i < 5;i++)
	{
		string name = "选手";
		name += nameseed[i];
		
		int score = 0;
		person p(name, score);
		
		v.push_back(p);
	}
}

void setscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		deque<int>d;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		/*cout << "选手:" << it->m_name << "   打分：" ;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;*/

		//排序 去掉最高分去掉最低分
		sort(d.begin(), d.end());
		d.pop_front();
		d.pop_back();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}

		int avg = sum / d.size();

		//将平均分赋值到选手身上
		it->m_score = avg;  //迭代器就是vector数组里的元素指针

	}
}

void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "姓名：" << it->m_name << "  分数：" << it->m_score << endl;
	}
}

void save(vector<person>& v)
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		ofs << "姓名："<< it->m_name << " "
			<< "分数："<<it->m_score << endl;
	}

	ofs.close();

}


int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建五名选手
	vector<person>v;
	creatperson(v);

	//测试
	/*for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "姓名：" << (*it).m_name <<"  " << "分数：" << (*it).m_score << endl;
	}*/

	//给五名选手打分
	setscore(v);
	
	//获取平均分
	showscore(v);
	save(v);

	system("pause");
	return 0;
}


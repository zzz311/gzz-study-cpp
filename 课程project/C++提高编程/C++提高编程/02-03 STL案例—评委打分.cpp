#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
#include<fstream>
#define FILENAME "��ί���.txt"

//����ѡ���� 
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
		string name = "ѡ��";
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

		/*cout << "ѡ��:" << it->m_name << "   ��֣�" ;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;*/

		//���� ȥ����߷�ȥ����ͷ�
		sort(d.begin(), d.end());
		d.pop_front();
		d.pop_back();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}

		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ������
		it->m_score = avg;  //����������vector�������Ԫ��ָ��

	}
}

void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������" << it->m_name << "  ������" << it->m_score << endl;
	}
}

void save(vector<person>& v)
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		ofs << "������"<< it->m_name << " "
			<< "������"<<it->m_score << endl;
	}

	ofs.close();

}


int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//��������ѡ��
	vector<person>v;
	creatperson(v);

	//����
	/*for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "������" << (*it).m_name <<"  " << "������" << (*it).m_score << endl;
	}*/

	//������ѡ�ִ��
	setscore(v);
	
	//��ȡƽ����
	showscore(v);
	save(v);

	system("pause");
	return 0;
}


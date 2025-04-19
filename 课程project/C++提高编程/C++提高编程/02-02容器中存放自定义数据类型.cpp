#include<iostream>
#include<vector>
#include<string>
using namespace std;

class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};

void test01()
{
	vector<person> v;

	person p1("¹ù×ÏÕä",18);
	person p2("µËĞ¡Öí", 18);

	v.push_back(p1);
	v.push_back(p2);

	vector<person>::iterator itbegin = v.begin();
	vector<person>::iterator itend = v.end();

	for (vector<person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << endl;
	}

}

//vector ·ÅÖÃÖ¸Õë
void test02()
{
	vector<person*> v;

	person p1("¹ù×ÏÕä", 18);
	person p2("µËĞ¡Öí", 18);

	v.push_back(&p1);
	v.push_back(&p2);

	vector<person*>::iterator itbegin = v.begin();
	vector<person*>::iterator itend = v.end();

	for (vector<person*>::iterator it = v.begin();it != v.end();it++)
	{
		cout << (*it)->m_name << " " << (*it)->m_age << endl;
	}


}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
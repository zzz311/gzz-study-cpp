#include<iostream>
using namespace std;
#include<list>
#include<string>

class person
{
public:
	person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}

	string m_name;
	int m_age;
	int m_height;
};

void printperson(list<person>& L)
{
	for (list<person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << it->m_name << " " << it->m_age << " " << it->m_height << endl;
	}
}

bool compare(person p1,person p2)
{
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	return p1.m_age < p2.m_age;
}

void creatperson(list<person>&L)
{
	person p1("µË´¨", 25, 185);
	person p2("µËĞ¡Öí", 18, 150);
	person p3("µË¹·", 25, 183);
	person p4("¹ù×ÏÕä", 25, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	
}

int main()
{
	list<person>L;
	
	creatperson(L);

	cout << "ÅÅĞòÇ°£º" << endl;
	printperson(L);

	L.sort(compare);

	cout << "-----------------------------" << endl;

	cout << "ÅÅĞòºó£º" << endl;
	printperson(L);

	system("pause");
	return 0;

}

#include<iostream>
using namespace std;
#include<set>
#include<string>

class person {
public:
	person(int age, string name) {
		this->age = age;
		this->name = name;
	}
	int age;
	string name;
};

class mycompare {
public:
	bool operator()(const person& p1, const person& p2) const{
		
		return p1.age > p2.age;
	}
};

void test() {
	set<person,mycompare>s1;
	person p1(25, "µÀ¥®");
	person p2(18, "µÀ–°÷Ì");
	person p3(24, "µÀπ∑");
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	for (set<person,mycompare>::iterator it = s1.begin();it != s1.end();it++) {
		cout << (*it).name << " " << (*it).age << " " << endl;;
	}
}
int main() {
	test();
	system("pause");
	return 0;
}
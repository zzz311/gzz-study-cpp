#include<iostream>
using namespace std;
#include<set>

//创建仿函数
class mycompare {
public:
	bool operator()(int v1, int v2) const{ //防止改变this指针
		return v1 > v2;
	}
};

void test() {
	set<int, mycompare>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(5);

	for (set<int, mycompare>::iterator it = s1.begin();it != s1.end();it++) {

		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test();
	system("pause");
	return 0;
}


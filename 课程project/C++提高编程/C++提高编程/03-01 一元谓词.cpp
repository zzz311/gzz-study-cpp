#include<iostream>
using namespace std;
#include<vector>

class mycompare {

public:
	bool operator()(int val)const {
		return val > 5;
	}
};

void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}
	auto it = find_if(v.begin(), v.end(), mycompare());
	cout << "ур╣╫ак" << *it << endl;
}


int main() {

	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class mycompare {
public:
	bool operator()(int v1,int v2)const {
		return v1>v2;
	}
};
void test01() {
	vector<int>v;
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);

	for (auto i : v) {
		cout << i <<" ";
	}
	cout << endl;
	cout << "-----------------" << endl;
	sort(v.begin(), v.end(), mycompare());
	for (auto i = v.begin();i != v.end();i++) {
		cout << *i <<" ";
	}
	cout << endl;
}
int main() {

	test01();
	system("pause");
	return 0;
}
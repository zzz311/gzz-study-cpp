#include<iostream>
using namespace std;
int main() {

	int score = 0;
	cout << "您输入的分数是：";
	cin >> score;
	
	if (score >= 600) {
		cout << "恭喜您考上了大学" << endl;

	}
	
	system("pause");
	return 0;


}
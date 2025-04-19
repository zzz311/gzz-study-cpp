#include<iostream>
using namespace std;
int main() {

	int score = 0;
	cout << "您输入的分数是：";
	cin >> score;

	if (score >= 600) {

		cout << "恭喜您考上了一本" << endl;
		if (score >= 700) {
			cout << "您考入了北大" << endl;
		    }
		else if (score >= 650) {
			cout << "您考入了清华" << endl;
		    }
	}

	else if (score>=500){
		cout << "恭喜您考上了二本" << endl;
	}

	else if (score >= 400) {
		cout << "恭喜您考上了三本" << endl;
	}

	else {
		cout << "未考上大学" << endl;
	}
	system("pause");
	return 0;
}
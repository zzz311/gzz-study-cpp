#include<iostream>
using namespace std;
int main() {

	int score = 0;
	cout << "������ķ����ǣ�";
	cin >> score;

	if (score >= 600) {

		cout << "��ϲ��������һ��" << endl;
		if (score >= 700) {
			cout << "�������˱���" << endl;
		    }
		else if (score >= 650) {
			cout << "���������廪" << endl;
		    }
	}

	else if (score>=500){
		cout << "��ϲ�������˶���" << endl;
	}

	else if (score >= 400) {
		cout << "��ϲ������������" << endl;
	}

	else {
		cout << "δ���ϴ�ѧ" << endl;
	}
	system("pause");
	return 0;
}
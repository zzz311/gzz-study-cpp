#include <iostream>
using namespace std;
int main()
{
	//switch����е�break
	/*cout << "��Ϸ��ѡ����Ѷ��У�" << endl;
	cout << "1.�򵥡�2.��ͨ��3.���ѣ�" << endl;
	int select = 0;
	cout << "��ѡ����Ѷ���:";
	cin >> select;
	switch (select) 
	 {
	 case 1:
		cout << "��" << endl;
		break;
	 case 2:
		cout << "��ͨ" << endl;
		break;
	 case 3:
		cout << "����" << endl;
		break;
	 }*/

	//ѭ���е�break���
	//for (int i = 0;i < 10;i++)
	//{
	//	for(int j=1;j<10;j++)
	//	{ 
	//		
	//		if (j > 5)
	//		{
	//			break;
	//		}
	//		cout << "*" << " ";
	//	}
	//	cout << endl;

	//}
	for (int i = 1;i<=100;i++)
	{ 
		cout << i<<" ";
		if(i%3==0)
		{
			cout << endl;
		}

	}
	system("pause");
	return 0;
}

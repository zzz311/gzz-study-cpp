#include<iostream>
#include<string>
using namespace  std;
//�ṹ�嶨��
struct hero {
	string name;
	int age;
	string sex;
};
//ð��������
void Bubblesort(struct hero array[], int len) {
	for (int i = 0;i < len-1;i++) 
	{
		for (int j = 0;j < len - i - 1;j++) 
		{
			if (array[j].age > array[j + 1].age)
			{
				struct hero temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
//��ӡ����
void print(struct hero array[], int len) {
	for (int k = 0;k < len;k++) {
		cout << array[k].name <<" " << array[k].age<<" " << array[k].sex << endl;
	}
}
int main() {
	struct hero array[5] =
	//�����ṹ������
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(array) / sizeof(array[0]);
	//ð������
	Bubblesort(array, len);
	//��ӡ��Ϣ
	print(array, len);
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include <string>
//1������ṹ��
struct student {
	string name;
	int age;
   };
//�����ӡ����  ʹ�õ�ַ���ݣ���Ϊָ��ֻռ���ĸ��ֽڣ����Խ�ʡ�ڴ�ռ䡣
void printStudent(const student * p) {
	//p->age = 26;  ����ָ��ʹ���޷��޸ġ�
	cout << "����: " << p->name << " " << "����: " << p->age << " " << endl;
}
//2.�����ṹ�� 
int main() {
	student s = {"�˴�",26};
	printStudent(&s);
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include <string>
//1、定义结构体
struct student {
	string name;
	int age;
   };
//定义打印函数  使用地址传递，因为指针只占用四个字节，可以节省内存空间。
void printStudent(const student * p) {
	//p->age = 26;  常量指针使得无法修改。
	cout << "姓名: " << p->name << " " << "年龄: " << p->age << " " << endl;
}
//2.创建结构体 
int main() {
	student s = {"邓川",26};
	printStudent(&s);
	system("pause");
	return 0;
}
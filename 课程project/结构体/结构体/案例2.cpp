#include<iostream>
#include<string>
using namespace  std;
//结构体定义
struct hero {
	string name;
	int age;
	string sex;
};
//冒泡排序函数
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
//打印函数
void print(struct hero array[], int len) {
	for (int k = 0;k < len;k++) {
		cout << array[k].name <<" " << array[k].age<<" " << array[k].sex << endl;
	}
}
int main() {
	struct hero array[5] =
	//创建结构体数组
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(array) / sizeof(array[0]);
	//冒泡排序
	Bubblesort(array, len);
	//打印信息
	print(array, len);
	system("pause");
	return 0;
}
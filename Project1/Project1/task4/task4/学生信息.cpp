//有10个学生，每个学生的数据包括学号，姓名，3门课程的成绩，从键盘输入10个学生数据
//要求输出3门课程总平均成绩，以及最高分学生的数据（包括学号，姓名，3门课程成绩，平均分数）
//要求：各功能模块用函数实现

#include <iostream>
using namespace std;
#include <string>
#define MAX 4

struct Student
{
	string s_number; //学号
	string s_name; //姓名
	int s_grade1; //课程1成绩
	int s_grade2; //课程2成绩
	int s_grade3; //课程3成绩
};

//添加学生信息
void addStudent(Student studentArray[])
{
	cout << "请输入10名学生的数据！" << endl;

	for (int i = 0; i < MAX; i++)
	{
		cout << "请输入学号： " << endl;
		string number;
		cin >> number;
		studentArray[i].s_number = number;

		cout << "请输入姓名： " << endl;
		string name;
		cin >> name;
		studentArray[i].s_name = name;

		cout << "请输入成绩1： " << endl;
		int grade1;
		cin >> grade1;
		studentArray[i].s_grade1 = grade1;

		cout << "请输入成绩2： " << endl;
		int grade2;
		cin >> grade2;
		studentArray[i].s_grade2 = grade2;

		cout << "请输入成绩3： " << endl;
		int grade3;
		cin >> grade3;
		studentArray[i].s_grade3 = grade3;
	}
	system("cls");
}

//平均成绩
void avggrade(Student studentArray[])
{
	int avg[MAX];
	for (int i = 0; i < MAX; i++)
	{
		avg[i] = (studentArray[i].s_grade1 + studentArray[i].s_grade2 + studentArray[i].s_grade3) / 3;
		cout << "第 " << i + 1 << " 个学生的平均成绩为: " << avg[i] << endl;
	}

	//最高分学生信息 冒泡排序 
	for (int i = 0; i < MAX - 1; i++)
	{
		for (int j = 0; j < MAX - i - 1; j++)
		{
			if (avg[j] > avg[j + 1])
			{
				int temp1 = avg[j];
				avg[j] = avg[j + 1];
				avg[j + 1] = temp1;

				Student temp2 = studentArray[j];
				studentArray[j] = studentArray[j + 1];
				studentArray[j + 1] = temp2;
			}
		}
	}
	
	cout << "最高分学生的信息为： " << endl;
	cout << "学号： " << studentArray[MAX - 1].s_number << endl;
	cout << "姓名： " << studentArray[MAX - 1].s_name << endl;
	cout << "成绩1： " << studentArray[MAX - 1].s_grade1 << endl;
	cout << "成绩2： " << studentArray[MAX - 1].s_grade2 << endl;
	cout << "成绩3： " << studentArray[MAX - 1].s_grade3 << endl;
	cout << "平均成绩： " << avg[MAX - 1] << endl;
}

int main()
{
	struct Student studentArray[MAX];

	addStudent(studentArray);

	avggrade(studentArray);

	system("pause");
	return 0;
}
//1.有一个班4个学生，5门课程。1.求第一门课程的平均分；2.找出有两门以上课程不及格的学生，输出他们的学号和全部课程成绩及平均成绩；
//3.找出平均成绩在90以上或全部课程在85分以上的学生。分别编3个函数,用二维数组实现。

#include <iostream>
using namespace std;

void avgfirst(int (*arr)[6]) //必须指定列数
{
	float avg = 0;
	int sum = 0;
	for (int i = 0; i < 4; i++) 
	{
		sum += arr[i][1];
	}
	avg = sum / 4.0;

	cout << "第一门课程的平均分为： " << avg << endl;
}

void flunk(int (*arr)[6])
{
	cout << "不及格学生的信息为： " << endl;
	for (int i = 0; i < 4; i++)
	{
		int count = 0;
		for (int j = 1; j < 6;j++)
		{
			if (arr[i][j] < 60) count++;
			if (count > 2)
			{
				cout << "学号： " << arr[i][0] << endl;
				cout << "全部课程： " << arr[i][1] << " " << arr[i][2] << " " << arr[i][3] << " " << arr[i][4] << " " << arr[i][5] << endl;
				cout << "平均成绩： " << (arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4] + arr[i][5]) / 5 << endl;
				break;
			}

		}

	}
}
//void Avg(int(*arr)[6])
void Avg(int arr[][6])
{
	for (int i = 0; i < 4; i++)
	{
		int sum = 0;
		float avg = 0;
		for (int j = 1; j < 6; j++)
		{
			sum += arr[i][j];
		}
		avg = sum / 5.0;
		//cout << "平均成绩：" << avg << endl;
		if (avg > 90)
			cout << "平均成绩在90以上的学生学号为： " << arr[i][0] << endl;
	}
}

int  main()
{
	int arr[4][6] =
	{
		{1,99,96,53,98,90},
		{2,86,56,78,98,59},
		{3,53,54,54,59,60},
		{4,99,98,97,86,88}
	};
	avgfirst(arr);

	flunk(arr);

	Avg(arr);

	system("pause");
	return 0;
}
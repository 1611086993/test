//��10��ѧ����ÿ��ѧ�������ݰ���ѧ�ţ�������3�ſγ̵ĳɼ����Ӽ�������10��ѧ������
//Ҫ�����3�ſγ���ƽ���ɼ����Լ���߷�ѧ�������ݣ�����ѧ�ţ�������3�ſγ̳ɼ���ƽ��������
//Ҫ�󣺸�����ģ���ú���ʵ��

#include <iostream>
using namespace std;
#include <string>
#define MAX 4

struct Student
{
	string s_number; //ѧ��
	string s_name; //����
	int s_grade1; //�γ�1�ɼ�
	int s_grade2; //�γ�2�ɼ�
	int s_grade3; //�γ�3�ɼ�
};

//���ѧ����Ϣ
void addStudent(Student studentArray[])
{
	cout << "������10��ѧ�������ݣ�" << endl;

	for (int i = 0; i < MAX; i++)
	{
		cout << "������ѧ�ţ� " << endl;
		string number;
		cin >> number;
		studentArray[i].s_number = number;

		cout << "������������ " << endl;
		string name;
		cin >> name;
		studentArray[i].s_name = name;

		cout << "������ɼ�1�� " << endl;
		int grade1;
		cin >> grade1;
		studentArray[i].s_grade1 = grade1;

		cout << "������ɼ�2�� " << endl;
		int grade2;
		cin >> grade2;
		studentArray[i].s_grade2 = grade2;

		cout << "������ɼ�3�� " << endl;
		int grade3;
		cin >> grade3;
		studentArray[i].s_grade3 = grade3;
	}
	system("cls");
}

//ƽ���ɼ�
void avggrade(Student studentArray[])
{
	int avg[MAX];
	for (int i = 0; i < MAX; i++)
	{
		avg[i] = (studentArray[i].s_grade1 + studentArray[i].s_grade2 + studentArray[i].s_grade3) / 3;
		cout << "�� " << i + 1 << " ��ѧ����ƽ���ɼ�Ϊ: " << avg[i] << endl;
	}

	//��߷�ѧ����Ϣ ð������ 
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
	
	cout << "��߷�ѧ������ϢΪ�� " << endl;
	cout << "ѧ�ţ� " << studentArray[MAX - 1].s_number << endl;
	cout << "������ " << studentArray[MAX - 1].s_name << endl;
	cout << "�ɼ�1�� " << studentArray[MAX - 1].s_grade1 << endl;
	cout << "�ɼ�2�� " << studentArray[MAX - 1].s_grade2 << endl;
	cout << "�ɼ�3�� " << studentArray[MAX - 1].s_grade3 << endl;
	cout << "ƽ���ɼ��� " << avg[MAX - 1] << endl;
}

int main()
{
	struct Student studentArray[MAX];

	addStudent(studentArray);

	avggrade(studentArray);

	system("pause");
	return 0;
}
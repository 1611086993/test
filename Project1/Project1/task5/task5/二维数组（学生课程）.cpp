//1.��һ����4��ѧ����5�ſγ̡�1.���һ�ſγ̵�ƽ���֣�2.�ҳ����������Ͽγ̲������ѧ����������ǵ�ѧ�ź�ȫ���γ̳ɼ���ƽ���ɼ���
//3.�ҳ�ƽ���ɼ���90���ϻ�ȫ���γ���85�����ϵ�ѧ�����ֱ��3������,�ö�ά����ʵ�֡�

#include <iostream>
using namespace std;

void avgfirst(int (*arr)[6]) //����ָ������
{
	float avg = 0;
	int sum = 0;
	for (int i = 0; i < 4; i++) 
	{
		sum += arr[i][1];
	}
	avg = sum / 4.0;

	cout << "��һ�ſγ̵�ƽ����Ϊ�� " << avg << endl;
}

void flunk(int (*arr)[6])
{
	cout << "������ѧ������ϢΪ�� " << endl;
	for (int i = 0; i < 4; i++)
	{
		int count = 0;
		for (int j = 1; j < 6;j++)
		{
			if (arr[i][j] < 60) count++;
			if (count > 2)
			{
				cout << "ѧ�ţ� " << arr[i][0] << endl;
				cout << "ȫ���γ̣� " << arr[i][1] << " " << arr[i][2] << " " << arr[i][3] << " " << arr[i][4] << " " << arr[i][5] << endl;
				cout << "ƽ���ɼ��� " << (arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4] + arr[i][5]) / 5 << endl;
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
		//cout << "ƽ���ɼ���" << avg << endl;
		if (avg > 90)
			cout << "ƽ���ɼ���90���ϵ�ѧ��ѧ��Ϊ�� " << arr[i][0] << endl;
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
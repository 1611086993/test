////�ýṹ�嶨��һ�������Ľṹ�����ڱ�ʾ 2/3, 5/6�����ķ��������ú���ʵ�ַ����ļӷ��ͳ˷���
////�ӷ�������������1��2������1��6��-> (4��6)   �˷�������������1��2������1��6��-> (1��12)
//
//#include <iostream>
//using namespace std;
//
//struct fraction
//{
//	int i;
//	int j;
//};
//
////��С������
//int hcfj(int j1, int j2)
//{
//	//�������Լ��
//	if (j1 < j2)
//	{
//		int temp = j2;
//		j2 = j1;
//		j1 = temp;
//	}
//	int hcf;
//	while (j2)
//	{
//		hcf = j2;
//		j2 = j1 % j2;
//		j1 = hcf;
//	}
//	return hcf;
//}
//
////����С������
//int lcmj(int j1, int j2)
//{
//	int hcf = hcfj(j1, j2);
//	int fenmu = 0;
//	fenmu = (j1 * j2) / hcf;
//	return fenmu;
//}
//
////�����ӷ�
//void add(fraction a, fraction b)
//{ 
//	if (a.j == b.j)
//		cout << "�������Ϊ�� " << a.i + b.i << " , " << a.j + b.j << endl;
//	else
//	{
//		int fenmu = lcmj(a.j, b.j);
//		cout << "�������Ϊ�� " << a.i * (fenmu / a.j) + b.i * (fenmu / b.j) << " , " << fenmu << endl;
//	}
//}
//
////�����˷�
//void mul(fraction a, fraction b)
//{
//	if (a.i == 0 || b.i == 0)
//		cout << "�������Ϊ�� 0" << endl;
//	else
//		cout << "�������Ϊ�� " << a.i * b.i << " , " << a.j * b.j << endl;
//}
//
//int main()
//{
//	fraction a = {1,2};
//	fraction b = {1,6};
//
//	if (a.j == 0 || b.j == 0)
//	{
//		cout << "������󣡷����ķ�ĸ����Ϊ0�������������룡����" << endl;
//		system("pause");
//		return -1;
//	}
//
//	add(a, b);
//	mul(a, b);
//
//	system("pause");
//	return 0;
//}
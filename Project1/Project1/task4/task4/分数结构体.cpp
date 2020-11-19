////用结构体定义一个分数的结构，用于表示 2/3, 5/6这样的分数，并用函数实现分数的加法和乘法。
////加法输入样例：（1，2），（1，6）-> (4，6)   乘法输入样例：（1，2），（1，6）-> (1，12)
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
////最小公倍数
//int hcfj(int j1, int j2)
//{
//	//先求最大公约数
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
////求最小公倍数
//int lcmj(int j1, int j2)
//{
//	int hcf = hcfj(j1, j2);
//	int fenmu = 0;
//	fenmu = (j1 * j2) / hcf;
//	return fenmu;
//}
//
////分数加法
//void add(fraction a, fraction b)
//{ 
//	if (a.j == b.j)
//		cout << "分数相加为： " << a.i + b.i << " , " << a.j + b.j << endl;
//	else
//	{
//		int fenmu = lcmj(a.j, b.j);
//		cout << "分数相加为： " << a.i * (fenmu / a.j) + b.i * (fenmu / b.j) << " , " << fenmu << endl;
//	}
//}
//
////分数乘法
//void mul(fraction a, fraction b)
//{
//	if (a.i == 0 || b.i == 0)
//		cout << "分数相乘为： 0" << endl;
//	else
//		cout << "分数相乘为： " << a.i * b.i << " , " << a.j * b.j << endl;
//}
//
//int main()
//{
//	fraction a = {1,2};
//	fraction b = {1,6};
//
//	if (a.j == 0 || b.j == 0)
//	{
//		cout << "输入错误！分数的分母不能为0！！请重新输入！！！" << endl;
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
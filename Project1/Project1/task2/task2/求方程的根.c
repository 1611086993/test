//��ax2+bx+c=0�ĸ����ֱ���d=b2-4ac����0������0��С��0���������
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, d;
	float x = 0, x1 = 0, x2 = 0;
	printf("������һԪ���η���ax^2+bx+c=0�е�����ϵ��: \n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("�������ϵ��a = %d b = %d c = %d\n", a, b, c);

	d = b * b - 4 * a * c;

	if (d < 0)
	{
		printf("��һԪ���η���û�и���\n");
	}
	if (d == 0)
	{
		x = (-b) / (2 * a);
		printf("��һԪ���η������ҽ���һ���� x = %lf\n", x);
	}
	if (d > 0)
	{
		x1 = ((-b) + sqrt(d)) / 2 * a;
		x2 = ((-b) - sqrt(d)) / 2 * a;
		printf("��һԪ���η����������� x1 = %lf; x2 = %lf\n", x1,x2);
	}
	return 0;
}
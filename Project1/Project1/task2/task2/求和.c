//�����������ĺͣ�����2λС�� 1~a֮�� 1~b��ƽ���� 1~c�ĵ�����
#include <stdio.h>

int main()
{
	int a, b, c, i;
	float sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
	printf("������������������ͼ��㣺 \n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("��������������ֱ�Ϊ��a = %d,b = %d,c = %d\n", a, b, c);

	for (i = 1; i <= a; i++)
	{
		sum1 += i;

	}
	for (i = 1; i <= b; i++)
	{
		sum2 += i * i;
	}
	for (i = 1; i <= c; i++)
	{
		sum3 += 1.0 / i;
	}
	printf("%f", sum3);
	sum = sum1 + sum2 + sum3;
	printf("�����ĺ�Ϊ��%.2f", sum);
	return 0;
}
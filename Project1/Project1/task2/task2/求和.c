//求以下三数的和，保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
#include <stdio.h>

int main()
{
	int a, b, c, i;
	float sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
	printf("请输入三个数进行求和计算： \n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("您输入的三个数分别为：a = %d,b = %d,c = %d\n", a, b, c);

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
	printf("三数的和为：%.2f", sum);
	return 0;
}
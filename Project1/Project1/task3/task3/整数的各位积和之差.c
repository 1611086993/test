//给你一个整数n，请你帮忙计算并返回该整数 各位数字之积 与 各位数字之和 的差

#include <stdio.h>

int main()
{
	int n;
	int mul = 1, sum = 0;

	printf("请输入一个整数： \n");
	scanf_s("%d", &n);
	printf("您输入的整数为： %d\n", n);

	for (n; n > 0; n /= 10)
	{
		mul *= (n % 10);
		sum += (n % 10);
	}

	printf("各位数字之积：%d\n", mul);
	printf("各位数字之和：%d\n", sum);
	printf("整数的各位积和之差：%d\n", mul - sum);

	return 0;
}
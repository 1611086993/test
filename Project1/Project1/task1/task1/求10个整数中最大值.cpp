#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
int main()
{
	printf("请输入10个整数： ");
	int i ;
	int a[10];
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &a[i]);             
	}
	for (i = 0;i < 10;i++)
	{
		
		if (a[0] <= a[i])
			a[0] = a[i];
	}
	printf("最大值是：%d ", a[0]);
	return 0;
}
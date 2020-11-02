//自己输入一个有数组并在数组中插入一个数，使数组依然有序
#include <stdio.h>

int main()
{
	int a[10] = { 0,1,2,3,4,6,7,8,9,0};
	int num, i;
	int len = 0;
	
	len = sizeof(a) / sizeof(a[0]);
	//printf("数组长度为： %d\n", len);

	printf("插入数之前的有序数组为： ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("请输入要插入的数： ");
	scanf_s("%d", &num);

	for (i = len-2;i >= 0;i--)
	{
		if (a[i] > num)
		{
			a[i + 1] = a[i];
			a[i] = num;
		}
		else
		{
			break;
		}
	}
	printf("插入数之后的有序数组为： ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
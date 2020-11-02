//一个数如果恰好等于不包含它本身所有因子之和，这个数就称为"完数"。 
//例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出1-1000之内的所有完数。
#include <stdio.h>

int main()
{
	int i,j;
	for (i = 2; i <= 1000; i++)
	{
		int sum = 1;
		for ( j = 2; j <= (i / 2); j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (i == sum)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1;i <= 9;i++)
	{
		for (j = 1;j <= i;j++)
		{
			//sum = i * j;
			printf("%d=%d*%d\t", j*i,j,i);
		}
		printf("\n");
		
	}
	return 0;
}
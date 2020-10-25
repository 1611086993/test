#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0, l = 0, m = 0 ,n = 0 ;
	for (i = 1; i <= 7; i++)
	{
		for (j = 7 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 2 * i - 1; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (l = 6; l >= 1; l--)
	{
		for (m = 7 - l; m > 0; m--)
		{
			printf(" ");
		}
		for (n = 2 * l - 1; n > 0; n--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i>= 1 && i<=9)
		{
			if (i == 9) count++;
		}
		if (i >= 10 && i <= 99)
		{
			if (i / 10 == 9 || i % 10 == 9) count++;
		}
	}
	printf("%d", count);
	return 0;
}
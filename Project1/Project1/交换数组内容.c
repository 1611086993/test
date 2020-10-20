#include <stdio.h>
int main()
{
	int i = 0;
	int a[] = { 1, 2, 3, 4 };
	int b[] = { 5, 6, 7, 8 };
	char c = -1;
	int len = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < len; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}  
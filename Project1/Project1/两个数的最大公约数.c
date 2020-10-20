#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	//input two num
	int a, b;
	scanf("%d %d", &a, &b);
	printf("befor: %d, %d\n", a, b);
	//jugle two num
	if (a < b)
	{
		//exchange num
		int temp = a;
		a = b;
		b = temp;
	}
	//cal
	while (1)
	{
		a = a % b;
		if (a == 0)
		{
			break;
		}
		b = b % a;
	}
	printf("result is : %d", b);
	return 0;
}
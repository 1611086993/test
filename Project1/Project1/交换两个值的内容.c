#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 main()
{
	int a, b;
	//scanf("a=%d,b=%d", &a, &b);
	scanf("%d  %d", &a, &b);
	int c;
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
}
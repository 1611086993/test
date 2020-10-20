#include <stdio.h>
int main()
{
	int temp = -1;
	int i = 0;
	double sum = 0;
	for(i=1;i <= 100; i++) 
	{
		temp *= -1;
		sum += temp * (1.0 / i);
	}
	printf("%lf", sum);
	return 0;
}
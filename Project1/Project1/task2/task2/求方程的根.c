//求ax2+bx+c=0的根。分别考虑d=b2-4ac大于0、等于0、小于0这三种情况
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, d;
	float x = 0, x1 = 0, x2 = 0;
	printf("请输入一元二次方程ax^2+bx+c=0中的三个系数: \n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("您输入的系数a = %d b = %d c = %d\n", a, b, c);

	d = b * b - 4 * a * c;

	if (d < 0)
	{
		printf("此一元二次方程没有根！\n");
	}
	if (d == 0)
	{
		x = (-b) / (2 * a);
		printf("此一元二次方程有且仅有一个根 x = %lf\n", x);
	}
	if (d > 0)
	{
		x1 = ((-b) + sqrt(d)) / 2 * a;
		x2 = ((-b) - sqrt(d)) / 2 * a;
		printf("此一元二次方程有两个根 x1 = %lf; x2 = %lf\n", x1,x2);
	}
	return 0;
}
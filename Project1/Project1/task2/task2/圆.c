//设圆的半径r = 1.5, 圆柱高h = 3，求圆周长，圆面积，圆球表面积，圆球体积，圆柱体积。输出计算结果。
#define PI 3.14
#include <stdio.h>
int main()
{
	float r = 1.5,h = 3.0;
	float C = 0, S = 0, Sq = 0, Vq = 0, Vz = 0;

	C = 2 * r * PI;
	S = PI * r * r;
	Sq = 4 * PI * r * r;
	Vq = 4 / 3 * PI * r * r * r;
	Vz = S * h;

	printf("圆的周长为： %f\n", C);
	printf("圆的面积为： %f\n", S);
	printf("圆球的表面积为： %f\n", Sq);
	printf("圆球的体积为： %f\n", Vq);
	printf("圆柱的体积为： %f\n", Vz);

	return 0;
}
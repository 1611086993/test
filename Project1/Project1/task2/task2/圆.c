//��Բ�İ뾶r = 1.5, Բ����h = 3����Բ�ܳ���Բ�����Բ��������Բ�������Բ������������������
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

	printf("Բ���ܳ�Ϊ�� %f\n", C);
	printf("Բ�����Ϊ�� %f\n", S);
	printf("Բ��ı����Ϊ�� %f\n", Sq);
	printf("Բ������Ϊ�� %f\n", Vq);
	printf("Բ�������Ϊ�� %f\n", Vz);

	return 0;
}
//��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ������(n������20)��
#include <stdio.h>
int main()
{
	int n = 1, q = 1,Sn = 0;
	for (n = 1; n <= 20; n++)
	{
		q *= n;
		Sn += q;
	}
	printf("Sn = %d", Sn);

	return 0;
}
//�Լ�����һ�������鲢�������в���һ������ʹ������Ȼ����
#include <stdio.h>

int main()
{
	int a[10] = { 0,1,2,3,4,6,7,8,9,0};
	int num, i;
	int len = 0;
	
	len = sizeof(a) / sizeof(a[0]);
	//printf("���鳤��Ϊ�� %d\n", len);

	printf("������֮ǰ����������Ϊ�� ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("������Ҫ��������� ");
	scanf_s("%d", &num);

	for (i = len-2;i >= 0;i--)
	{
		if (a[i] > num)
		{
			a[i + 1] = a[i];
			a[i] = num;
		}
		else
		{
			break;
		}
	}
	printf("������֮�����������Ϊ�� ");
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
//����һ������n�������æ���㲢���ظ����� ��λ����֮�� �� ��λ����֮�� �Ĳ�

#include <stdio.h>

int main()
{
	int n;
	int mul = 1, sum = 0;

	printf("������һ�������� \n");
	scanf_s("%d", &n);
	printf("�����������Ϊ�� %d\n", n);

	for (n; n > 0; n /= 10)
	{
		mul *= (n % 10);
		sum += (n % 10);
	}

	printf("��λ����֮����%d\n", mul);
	printf("��λ����֮�ͣ�%d\n", sum);
	printf("�����ĸ�λ����֮�%d\n", mul - sum);

	return 0;
}
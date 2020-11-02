//给出一百分制成绩，要求输出成绩等级‘A’，‘B’,‘C’,‘D’,‘E’。
//90分以上为‘A’，80-89为‘B’，70-79为‘C’，60-69为‘D’，60分以下为‘E’。

#include <stdio.h>

int main()
{
	printf("请输入一个考试成绩： ");
	int i = 0;
	scanf_s("%d", &i);
	 if (i >= 90)
	{
		printf("您的成绩等级为： A");
	}
	 if (i >= 80 && i <= 89)
	{
		printf("您的成绩等级为： B");
	}
	 if (i >= 70 && i <= 79)
	{
		printf("您的成绩等级为： C");
	}
	 if (i >= 60 && i <= 69)
	{
		printf("您的成绩等级为： D");
	}
	 if (i < 60)
	{
		printf("您的成绩等级为： E");
	}
	return 0;
}
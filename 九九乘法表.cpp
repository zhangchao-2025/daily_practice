#include <stdio.h>
int main()			
{
	int a = 9;
	int i = 0;
	int num = 1;
	for (i = 1;i <= 9;i++)
	{
		num = 1;
		while (num <= i)
		{
			printf("%d*%d=%d\t ", num, i, num * i);
			num++;
		}
		printf("\n");
	}
	return 0;
}

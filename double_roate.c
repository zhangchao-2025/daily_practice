#include <stdio.h>
int main()
{
	int i, a;
	for (i = 1;i <= 4;i++)
	{
		for (a = 0;a < i;a++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

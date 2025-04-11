#include <stdio.h> 
int main()
{
	int a=0,c, i = 0;
	int b = 1;
	int j = 0;
	scanf("%d %d", &i, &c);
	for (i;i <= c;i += 1)
	{
		b = 1;
		for (j = 2;j <= i - 1;j++)
		{
			if (i % j == 0)
			{
				b = 0;
				break;
			}
		}
		if (b == 1 && a != 2)
		{
			printf("%d", i);
			a = 2;
		}
		else if (b == 1 && a==2)
		{
			printf(",%d", i);
		}
	}
	return 0;
}

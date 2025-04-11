#include <stdio.h>
int main()
{
	char a = 0;
	int num = 0;
	while (a != '.')
	{
		scanf("%c",&a);
		if (a <= '9' && a >= '1')
		{
			num =a-'0'; 
			printf("%d",num);
		}
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int n = 1;
	int a,b,c;
	scanf("%d",&n);
	while (n)
	{
		a = n % 10;
		b = n /10 %10;
		c = n / 100;
		if (a*a*a+b*b*b+c*c*c == n)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		scanf("%d",&n);
	}
	return 0;
 } 

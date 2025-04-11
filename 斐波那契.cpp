#include <stdio.h>
int main()	
{
	int num,a = 1,b=1;
	int n = 0;
	scanf("%d", &n);
	if (n>=1)
	{
		printf("1");
	}
		for (int i = 0;i<n-1;i++)
		{
			num = a+b;
			a = b;
			b = num;
			printf(",%d", a);
		}
	return 0;
}   

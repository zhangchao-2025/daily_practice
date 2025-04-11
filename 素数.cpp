#include <stdio.h>
int main()
{
	int a = 1;
	int N = 0;
	scanf("%d",&N);
	for (int i = 2;i<N;i++)
	{
		if (N % i == 0)
		{
			a = 0;
			printf("NO");
			break;
		}
	}
	if (a)
	{
		printf("YES");
	}
	return 0;
 } 

#include <stdio.h>
int main()
{
	double deta, e = 1;
	long long num = 1;
	scanf("%lf", &deta);
	for (int i = 1;;i++)
	{
		num = 1;
		for (int n = i;n > 0;n--)
		{
			num *= n;
		}
		e = 1.0 / num + e;
		if (1.0 / num < deta)
		{
			break;
		}
	}
	printf("%.10lf", e);
	return 0;
}

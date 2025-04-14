#include <stdio.h>
int fib(int n,int way)
{
int number = 0;
	if (n == 1)
	{
		number = 1;
		way+=number;
	}
	if (n == 2)
	{
		number = 2;
		way+=number;
	}
	if (n > 2)
	{
		return fib(n-1,way)+fib(n-2,way);
	}
}
int main()
{
	 int n = 0;
	 int way = 0;
	 scanf("%d",&n);
	 int num = fib(n,way);
	 printf("%d",num);
	return 0;
 } 

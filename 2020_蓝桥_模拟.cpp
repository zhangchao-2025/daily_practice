#include <stdio.h>
int main()
{
	int n = 0,num=0;
	int number = 0;
	int max = -1;
	int min = 101;
	double vge;
	scanf("%d",&n);   //ÈËÊı
	for (int i = 0;i<n;i++)
	{
		scanf("%d",&number);
		num+=number;
		if(max < number)
		{
			max = number;
		}
		if (min > number)
		{
			min = number;
		}
	}
	vge = num*1.0/n;
	printf("%d\n%d\n%lf",max,min,vge);
	
	return 0;
 } 

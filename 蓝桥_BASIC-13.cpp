#include <stdio.h>

void num(int arr[],int sz)
{
	for (int i = 0;i<sz-1;i++)
	{
		for (int n = 0;n<sz-i-1;n++)
		{
			if(arr[n+1]<arr[n])
			{ 
				int a = arr[n+1];
				arr[n+1] = arr[n];
				arr[n] = a;
			}
		}
	}
	for (int i = 0;i<sz;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int arr[200];
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	num(arr,n);
	return 0;
} 

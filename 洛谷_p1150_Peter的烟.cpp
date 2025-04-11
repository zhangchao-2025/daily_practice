#include <stdio.h>
int main()
{
    int n, k,total;
	scanf("%d %d", &n, &k);
    total = n;
    int remain = n;
    while (remain >= k) 
	{
        int new_cigarettes = remain / k;
        total += new_cigarettes;
        remain = remain % k + new_cigarettes;
    }
    printf("%d\n", total);
    
    return 0;
}

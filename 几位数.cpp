#include <stdio.h>
#include <string.h>
int main() {
    char num[21]; 
    scanf("%s", num);
    int len = strlen(num);
    int i = 0;
    while (i < len && num[i] == '0') 
	{
        i++;
    }
    if (i == len) 
	{
        printf("1\n");
    } 
	else 
	{
        printf("%d\n", len - i);
    }
    return 0;
}

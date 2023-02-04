

#include <stdio.h>

int main()
{
int n, i;
printf("Enter the number of terms: ");
scanf("%d", &n);

for (i = 1; i <= n; i++)
{
    printf("%d\n", i*2);
}

return 0;  

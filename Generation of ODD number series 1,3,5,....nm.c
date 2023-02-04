#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("The odd number series is: ");
    for (i = 1; i <= n * 2; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}

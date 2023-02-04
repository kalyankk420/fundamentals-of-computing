#include <stdio.h>

int main()
{
int num, lastDigit;
printf("Enter a number: ");
scanf("%d", &num);

while (num > 0)
{
    lastDigit = num % 10;
    printf("%d ", lastDigit);
    num = num / 10;
}

return 0;  

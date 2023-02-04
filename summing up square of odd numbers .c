#include <stdio.h>

int main()
{
int start, end, i, sum = 0;
printf("Enter start range: ");
scanf("%d", &start);
printf("Enter end range: ");
scanf("%d", &end);

for (i = start; i <= end; i++)
{
    if (i % 2 != 0)
    {
        sum += i * i;
    }
}

printf("The sum of the squares of odd numbers from %d to %d is %d", start, end, sum);
return 0;   

#include <stdio.h>

int sum_of_digits(int num)
{
int sum = 0;
while (num > 0)
{
sum += num % 10;
num /= 10;
}
return sum;
}

int main()
{
int num;
printf("Enter an integer: ");
scanf("%d", &num);
printf("The sum of digits of %d is %d\n", num, sum_of_digits(num));
return 0;
}

#include <stdio.h>
#include <math.h>

int factorial(int n) 
{
    int result = 1;
    while (n >= 1) 
    {
        result = result * n;
        n--;
    }
    return result;
}

int main() 
{
    int num, temp, rem, digits, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    digits = (int) log10(num) + 1;

    while (temp != 0) 
    {
        rem = temp % 10;
        sum = sum + factorial(rem);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

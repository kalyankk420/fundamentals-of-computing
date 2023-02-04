#include <stdio.h>

int main()
{
    int num, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding the number of digits
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }

    // Printing each digit
    temp = num;
    for (int i = 1; i <= digits; i++)
    {
        int digit = temp % 10;
        printf("%d ", digit);
        temp /= 10;
    }

    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
int num, decimal = 0, i = 0;
printf("Enter the binary number: ");
scanf("%d", &num);

while (num != 0)
{
    decimal += (num % 10) * pow(2, i);
    num /= 10;
    i++;
}

printf("The decimal equivalent of the binary number is: %d\n", decimal);
return 0;  

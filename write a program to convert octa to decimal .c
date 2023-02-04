#include<stdio.h>
#include<math.h>

int octToDecimal(int octal)
{
int decimal = 0;
int i = 0;
while (octal != 0)
{
decimal += (octal % 10) * pow(8, i);
++i;
octal /= 10;
}
return decimal;
}

int main()
{
int octal;
printf("Enter an octal number: ");
scanf("%d", &octal);
int decimal = octToDecimal(octal);
printf("Equivalent decimal value: %d", decimal);
return 0;
}

#include <stdio.h>
#include <math.h>

int hex_to_decimal(char hex[])
{
int i, length, decimal = 0;
for (length = 0; hex[length] != '\0'; ++length);
for(i=0; hex[i]!='\0'; i++)
{
if(hex[i]>='0' && hex[i]<='9')
decimal += (hex[i] - 48) * pow(16, length - i - 1);
if(hex[i]>='A' && hex[i]<='F')
decimal += (hex[i] - 55) * pow(16, length - i - 1);
if(hex[i]>='a' && hex[i]<='f')
decimal += (hex[i] - 87) * pow(16, length - i - 1);
}
return decimal;
}

int main()
{
char hex[100];
int decimal;
printf("Enter the hexadecimal number: ");
scanf("%s", hex);
decimal = hex_to_decimal(hex);
printf("Decimal equivalent of hexadecimal number %s is %d", hex, decimal);
return 0;
}

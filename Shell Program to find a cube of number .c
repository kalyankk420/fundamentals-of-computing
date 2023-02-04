#include<stdio.h>
#include<math.h>

int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
int cube = pow(num, 3);
printf("The cube of %d is %d", num, cube);

return 0;	

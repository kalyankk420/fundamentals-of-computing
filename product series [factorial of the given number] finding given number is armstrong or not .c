#include <stdio.h>
int main()
{
long int a,n=1;
printf("\nEnter the number :");
scanf("%ld",&a);
start:
n=n*a;
a--;
if(a>0)
{
  goto start;
}
printf("\nThe Total value is :%ld",n);
return 0;
}

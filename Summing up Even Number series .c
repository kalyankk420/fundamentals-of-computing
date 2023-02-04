#include <stdio.h>

int main()
{
  int n, i, sum = 0;

  printf("Enter the number of even numbers in the series: ");
  scanf("%d", &n);

  for (i = 2; i <= 2*n; i = i + 2)
  {
    sum = sum + i;
  }

  printf("The sum of the series of %d even numbers is %d\n", n, sum);

  return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
  int n, i;
  double num, sum = 0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter a number: ");
    scanf("%lf", &num);
    sum += pow(num, 3);
  }

  printf("The sum of cubes of %d numbers is %lf\n", n, sum);

  return 0;
}

#include <stdio.h>

int main() {
  int n, i;
  float num, sum = 0, average;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter a number: ");
    scanf("%f", &num);
    sum += num;
  }

  average = sum / n;
  printf("Average = %.2f", average);

  return 0;
}

#include<stdio.h>
long cube_sum_n_natural(int n) {
   long sum = 0;
   int i;
   for (i = 1; i <= n; i++) {
      sum += i * i * i; //cube i and add it with sum
   }
   return sum;
}
main() {
   int n;
   printf("Enter value of n: ");
   scanf("%d", &n);
   printf("Result is: %ld", cube_sum_n_natural(n));
}

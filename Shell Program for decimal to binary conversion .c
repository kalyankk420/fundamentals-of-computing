#include<stdio.h>

int main() {
   int decimal, binary[100], i, j;
   printf("Enter a decimal number: ");
   scanf("%d", &decimal);
   for (i = 0; decimal > 0; i++) {
      binary[i] = decimal % 2;
      decimal = decimal / 2;
   }
   printf("Binary equivalent: ");
   for (j = i - 1; j >= 0; j--)
      printf("%d", binary[j]);
   return 0;
}

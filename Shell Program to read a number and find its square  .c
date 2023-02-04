#include <stdio.h>
#include <math.h>

int main() {
int num, square;
printf("Enter a number: ");
scanf("%d", &num);
square = pow(num, 2);
printf("The square of %d is %d\n", num, square);
return 0;
}

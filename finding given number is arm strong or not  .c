#include <stdio.h>
#include <math.h>

int main() {
int num, originalNum, remainder, digits = 0, result = 0;

printf("Enter a number: ");
scanf("%d", &num);

originalNum = num;

// count the number of digits
while (originalNum != 0) {
originalNum /= 10;
++digits;
}

originalNum = num;

// calculate the sum of the cube of each digit
while (originalNum != 0) {
remainder = originalNum % 10;
result += pow(remainder, digits);
originalNum /= 10;
}

// check if num is equal to the sum of the cube of its digits
if (result == num)
printf("%d is an Armstrong number.", num);
else
printf("%d is not an Armstrong number.", num);

return 0;
}

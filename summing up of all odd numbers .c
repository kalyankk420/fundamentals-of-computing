#include <stdio.h>

int main() {
int sum = 0, i;
for (i = 1; i <= 100; i++) {
if (i % 2 != 0) {
sum += i;
}
}
printf("Sum of all odd numbers from 1 to 100 is: %d", sum);
return 0;
}

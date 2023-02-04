#include <stdio.h>

int main() {
int i, n;

// Input the number of terms in the series
printf("Enter the number of terms in the series: ");
scanf("%d", &n);

// Generate the even number series
for (i = 2; i <= n * 2; i += 2) {
printf("%d ", i);
}

return 0;
}

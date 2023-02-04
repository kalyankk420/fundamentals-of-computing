#include <stdio.h>
#include <math.h>
int OctalToDecimal(int num)
{
    int x = 0;
    int ans = 0;

    while (num > 0)
    {

        // obtaining the right-most digit of num
        int y = num % 10;

        // Since the right-most digits were previously scanned in the previous step, divide num by 10 to remove them.
        num /= 10;

        ans += y * pow(8, x);
        ++x;
    }

    return ans;
}
int main()
{
    int num;
    printf("Enter Octal Number: ");
    scanf("%d", &num);
    printf("\n");
    printf("Decimal Number is : %d", OctalToDecimal(num));
    return 0;
}

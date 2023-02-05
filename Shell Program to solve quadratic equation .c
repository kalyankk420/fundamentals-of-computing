#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2, realPart, imaginaryPart, discriminant;

    printf("Enter the coefficients of the quadratic equation: \n");
    scanf("%f%f%f", &a, &b, &c);

    /* Calculate the discriminant */
    discriminant = b*b - 4*a*c;

    /* Check if the roots are real or complex */
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The roots are real and different.\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("The roots are real and equal.\n");
        printf("Root 1: %.2f\n", root1);
    }
    else
    {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("The roots are complex and different.\n");
        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    return 0;
}

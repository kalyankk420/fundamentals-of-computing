#include <stdio.h>

void square_area()
{
    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    int area = side * side;
    printf("The area of the square is: %d\n", area);
}

void rectangle_area()
{
    int length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    int area = length * width;
    printf("The area of the rectangle is: %d\n", area);
}

void triangle_area()
{
    int base, height;
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    int area = 0.5 * base * height;
    printf("The area of the triangle is: …

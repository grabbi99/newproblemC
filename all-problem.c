#1. Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include<stdio.h>

int main ()
{
    float length, breadth, perimeter;
    printf("Enter length of Rectangle \n");
    scanf("%f", &length);
    printf("Enter Breadth of Rectangle \n");
    scanf("%f", &breadth);

    // Perimeter of Rectangle = 2 * (Length + Breadth)
    perimeter = 2 * (length + breadth);

    printf("Perimeter of Rectangle: %0.2f \n", perimeter);

    return 0;

}

#2. Write a C program to enter length and breadth of a rectangle and find its area.

#include<stdio.h>

int main ()
{
    float length, breadth, area;
    printf("Enter length of Rectangle \n");
    scanf("%f", &length);
    printf("Enter Breadth of Rectangle \n");
    scanf("%f", &breadth);

    // Area of Rectangle = Length * Width)
    area = length * breadth;

    printf("Area of Rectangle: %0.2f \n", area);

    return 0;

}

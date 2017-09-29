#include<stdio.h>

int main ()
{
    float length, breadth, perimeter;
    printf("Enter length of Rectangle \n");
    scanf("%f", &length);
    printf("Enter Breadth of Rectangle \n");
    scanf("%f", &breadth);

    // Perimeter of Rectangle = 2 X(Length + Width)
    perimeter = 2* (length + breadth);

    printf("Perimeter of Rectangle: %f \n", perimeter);

    return 0;

}

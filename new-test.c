#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    /*
        Area fo triangle = (h*b) / 2
    */
    area = (base * height) / 2;

    printf("Area of the triangle = %.2f", area);

    return 0;
}

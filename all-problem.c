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


#3. Write a C program to enter radius of a circle and find its diameter, circumference and area.


#include <stdio.h>

int main()
{
    float radius, diameter, circumference, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    /*
        Diameter = 2r
        Circumference = 2πr
        Circle of Area = πr^2

    */

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    // All Results
    printf("Diameter of circle = %0.2f \n", diameter);
    printf("Circumference of circle = %0.2f \n", circumference);
    printf("Area of circle = %0.2f ", area);

    return 0;
}

#4. Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include <stdio.h>

int main()
{
    float cm, meter, km;

    printf("Enter: ");
    scanf("%f", &cm);

    /*
        1 m = 100cm
        1 km = 100000cm
    */
    meter = cm / 100.0;
    km    = cm / 100000.0;

    printf("Meter = %.2f m \n", meter);
    printf("Kilometer = %.2f km", km);

    return 0;
}


#5. Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    //	F = (°C * 9/5) + 32

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}


#6.  Write a C program to enter temperature in Fahrenheit and convert to Celsius

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // °C = (°F - 32) * 5/9

    celsius = (fahrenheit - 32) * 5/9;

    printf("%0.2f Fahrenheit = %0.2f Celsius", fahrenheit, celsius);

    return 0;
}


#7. Write a C program to convert days into years, weeks and days.

#include <stdio.h>

int main()
{
    int days, years, weeks;

    printf("Enter days: ");
    scanf("%d", &days);

    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);

    return 0;
}

#9. Write a C program to enter any number and calculate its square root.

#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;

    printf("Enter any number to find square root: ");
    scanf("%lf", &num);

    root = sqrt(num);

    printf("Square root of %.2lf = %.2lf", num, root);

    return 0;
}


#10. Write a C program to enter two angles of a triangle and find the third angle.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first angles of triangle: ");
    scanf("%d", &a);
    printf("Enter Second angles of triangle: ");
    scanf("%d", &b);

    /*
        a+b+c = 180°
        c = 180° - (a+b)
    */

    c = 180 - (a + b);

    printf("Third angle of the triangle = %d", c);

    return 0;
}

#11. Write a C program to enter base and height of a triangle and find its area.

#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    // Area fo triangle = (h*b) / 2

    area = (base * height) / 2;

    printf("Area of the triangle = %.2f", area);

    return 0;
}


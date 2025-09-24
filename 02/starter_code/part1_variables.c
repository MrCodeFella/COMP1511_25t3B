// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle
// area = pi * radius * radius 

#include <stdio.h>

#define PI 3.14

int main(void) {
    // 1. Declare the variables
    double radius;
    // double pi;
    double area;
    
    // 2. Initalise the variables
    // pi = 3.14;
    scanf("%lf", &radius);

    // 3. Calculate the area of the circle
    area = PI * (radius * radius);
    
    // 4. Print the result
    printf("The area is %.1lf\n", area);

    // 1 = 5 % 2 
    // if (1 < 1) {

    // }

    return 0;
}

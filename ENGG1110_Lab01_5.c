/**
 * ENGG1110 Problem Solving by Programming
 *
 * Please fill in the academic honesty declaration statement below
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 * http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Yu Ching Hei
 * Student ID   : 1155193237
 * Class/Section: D
 * Date         : 18 Jan 2023
 */


#include <stdio.h>
#include <math.h>

int main(void) {
    double pi = 3.14; // the value of PI is given
    // Fill in your code below
    // Declare double-type floating-point numbers radius, perimeter and area
    double radius, perimeter, area;
    // Print "Input the radius: " and then ask user to input the value of radius
    printf("Input the radius: ");
    scanf("%lf", &radius);
    // Assign perimeter to be 2 times pi times radius
    perimeter = radius * pi * 2;
    // Assign area to be pi times radius times radius
    area = radius * radius * pi;
    // Print out perimeter with a precision of 2 decimal places
    printf("Perimeter: %.2f\n",perimeter);
    // Print out area with a precision of 2 decimal places
    printf("Area: %.2f\n", floorf(area * 100)/100);

    // End of your code
    return 0;
}

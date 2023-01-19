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
int main(void) {
    // Fill in your code below
    // Declare a double-type floating-point number num
    double num;
    // Ask for a single value of num from user (assume valid) 14.38634144 -0.0046737
    scanf("%lf", &num);
    // Print out the num of two different versions of precision.
    printf("%.1f %.5f",num,num);
    // End of your code
    return 0;
}
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
 * Date         : 01 Mar 2023
 */

/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void) {
    // Enter your code below
    int h;
    scanf("%d", &h);

    for (int i = 1; i <= h; i++){
        // -- Set up 1 inner loop to print space, how to set the counting based on outer loop variable?
        for(int space=h-i; space > 0; space--){
            printf(" ");
        }
        // -- Set up another inner loop to print o
        for(int k = 0; k < i; k++){
            printf("oo");
        }
        printf("\n");
    }
    for(int space=h-1; space > 0; space--){
        printf(" ");
    }
    printf("||");


    // Print the trunk at last

    /* last statement of this C program */
    return 0;
}


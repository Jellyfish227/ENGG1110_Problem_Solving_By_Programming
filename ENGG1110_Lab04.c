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
 * Date         : 15 Feb 2023
 */

#include <stdio.h>

/* starting point of this C program */
int main(void) {
    // Enter your code below
    int n;
    scanf("%d", &n);

    double v[n];
    double w[n];

    for (int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }

    double dot;
    for (int i = (n-1); i >= 0; i--){
        dot += v[i] * w[i];
    }
    printf("Dot product = %.2f", dot);
    /* last statement of this C program */
    return 0;
}
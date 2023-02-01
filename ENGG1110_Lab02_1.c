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
 * Date         : 01 Feb 2023
 */

#include <stdio.h>
int main(void){
    int a, b, c, d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int max = a, min = a;

    int s[] = {a,b,c,d};
    for (int i = 0; i < 4; i++)
        if (max < s[i])
            max = s[i];
    for (int i = 0; i < 4; i++)
        if (min > s[i])
            min = s[i];

    printf("max %d\n", max);
    printf("min %d", min);
}
/*
#include <stdio.h>

int main(){
    double a, b, c, D;

    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    D = b * b - (4 * a * c);
    printf("discriminant is %.3f\n", D);
    printf("The quadratic equation has ");x
    if (D > 0)
        printf("two real roots");
    else if (D == 0)
        printf("one double real root");
    else
        printf("no real roots");
    printf(".\n");

    return 0;

}*/

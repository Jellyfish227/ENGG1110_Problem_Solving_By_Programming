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
 * Date         : 15 Mar 2023
 */


#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int arr[n];
    int sorted[n];

    for(int i = n; i > 0; i--){
        scanf("%d", &arr[n-i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if (i < n-1) {
            printf(" ");
        }
        sorted[i] = 1001;
    }
    printf("\n");

    int k = 1;
    sorted[0] = arr[0];
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        for(int j = 0; j <= i; j++){
            if (temp == arr[j] && i == j){
                sorted[k]=temp;
                k++;
            }
            else if (temp == arr[j] && j < i)
                break;
        }
    }

    for (int i = 0; i < n; i++){
        if (sorted[i] != 1001){
            printf("%d", sorted[i]);
            if (sorted[i+1] != 1001)
                printf(" ");
        }
    }

    return 0;
}


//
//
///* include header file */
//#include <stdio.h>
//#include <math.h>
//
///* starting point of this C program */
//int binaryToDecimal(int b) {
//    // convert binary number to decimal number
//    // Write your code below
//    int dig;
//    int dec = 0;
//    for(dig = 9; dig >= 0; dig--){
//        int temp = (int)(b / pow(10,dig)) % 10;
//        if (temp)
//            dec += pow(2,dig);
//    }
//
//    return dec;
//
//
//    // End of your code
//}
//
//int decimalToBinary(int d) {
//    // convert decimal number to binary number
//    // Write your code below
//    int bin = 0;
//    int temp;
//    int dig = 0;
//    temp = d;
//    while (1){
//        if (temp == 2){
//            bin += pow(10,dig+1);
//            break;
//        }
//        if (temp % 2){
//            bin += pow(10,dig);
//        }
//        temp = temp / 2;
//        dig++;
//    }
//
//    return bin;
//
//    // End of your code
//}
//
//int main(void) {
//    int b1, b2, d1, d2, diff_b, diff_d;
//
//    // Read b1 and b2 from user, and start calculation
//    // Write your code below
//    scanf("%d%d", &b1, &b2);
//
//
//    // End of your code
//
//    // Do NOT modify the following lines
//    // NEVER EVER TOUCH THESE!
//    d1 = binaryToDecimal(b1);
//    d2 = binaryToDecimal(b2);
//    printf("The numbers (in decimal) are %d and %d\n", d1, d2);
//    diff_d = d1 - d2;
//    diff_b = decimalToBinary(diff_d);
//    printf("The difference is %d (decimal) or %d (binary)\n", diff_d, diff_b);
//    return 0;
//
//}



///* include header file */
//#include <stdio.h>
//
///* starting point of this C program */
//
//// This function returns the GCD of x and y
//// You don't have to modify this function
//int gcd(int x, int y)
//{
//    // This function implements the Euclidean Algorithm for finding GCD
//    // See:https://en.wikipedia.org/wiki/Euclidean_algorithm
//    int tmp;
//    while (y != 0) {
//        tmp = y;
//        y = x % y;
//        x = tmp;
//    }
//    return x;
//}
//
//// Complete the implementation of this function so that it returns the
//// LCM of x and y
//int lcm(int x, int y)
//{
//    // Write your code here
//    return (x*y)/ gcd(x,y);
//
//}
//
//// Complete the implementation of the main function.
//
//int main(void) {
//    // Enter your code below
//    int a,b,c,d;
//    scanf("%d%d%d%d", &a,&b,&c,&d);
//    printf("GCD is %d\n", gcd(gcd(gcd(a,b),c),d));
//    printf("LCM is %d", lcm(lcm(lcm(a, b), c), d));
//
//
//    /* last statement of this C program */
//    return 0;
//}


///* include header file */
//#include <stdio.h>
//#include <math.h>
//
//// create your function PrintCircle here!
//void PrintCircle(int radius){
//    int i, j;
//    double centerX, centerY;
//
//    centerX = centerY = radius;
//
//    for (i = 0; i < radius*2; i++) {
//        for (j = 0; j < radius*2; j++){
//            double posX = i+0.5;
//            double posY = j+0.5;
//            double distance = sqrt(pow(posX - centerX, 2) + pow(posY - centerY, 2));
//            if (distance > radius)
//                printf("-");
//            else
//                printf("@");
//        }
//        printf("\n");
//    }
//}
//
//
//int main(void) {
//    // DO NOT CHANGE THE MAIN FUNCTION
//    int radius;    // DON'T TOUCH THIS!
//
//    scanf("%d", &radius);    // DON'T TOUCH THIS!
//    PrintCircle(radius);     // DON'T TOUCH THIS!
//
//    return 0;     // DON'T TOUCH THIS!
//}
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
 * Date         : 29 Mar 2023
 */


/* include header file */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
  This function returns 1 if all the characters in input[11] are numeric (0-9),
  otherwise 0.
 */
int isnumeric(char input[11]) {
    // INPUT YOUR CODE HERE

    int N = strlen(input);
    for(int i = 0; i < N; i++){
        if (!isdigit(input[i])){
            return 0;
        }
    }
    return 1;

    // END OF YOUR CODE
}

// You may add other helper functions here as needed.

/* starting point of this C program */
int main(void) {
    // Enter your code below
    // define flags to check whether to continue
    // print "Guess my age?"
    // while the input is invalid or guess is not 7
    // -- set up your infinite loop with corresponding print out
    // ...
    char age[11];
    int isDone = 0;

    printf("Guess my age?\n");
    do {
        scanf("%s", age);
        if (isnumeric(age) == 0){
            printf("NaN\n");
        }
        else{
            int i = 0,sum = 0;
            while(age[i] != '\0'){
                sum = sum * 10 + (age[i] - 48);
                i++;
            }
            if (sum == 7){
                printf("You got it!");
                isDone = 1;
            }else
                printf("Nope\n");
        }

    }while(isDone == 0);




    /* last statement of this C program */
    return 0;
}



//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void){
//    char str[100];
//    fgets(str, 100, stdin);
//    int N = strlen(str);
//    for (int i=0; i<N; i++) {
//        if (str[i] >= 'A' && str[i] <= 'Z'){
//            if (str[i] + 13 > 'Z')
//                str[i] -= 13;
//            else
//                str[i] += 13;
//        }
//        else if (str[i] >= 'a' && str[i] <= 'z'){
//            if (str[i] + 13 > 'z')
//                str[i] -= 13;
//            else
//                str[i] += 13;
//        }
//        else if (str[i] == '.')
//            break;
//    }
//    printf("%s", str);
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void){
//    char str[20+1];
//    scanf("%s", str);
//    for(int i = strlen(str) - 1; i >= 0; i--){
//        putchar(str[i]);
//    }
//    printf("\n");
//    for(int i = strlen(str) - 1; i >= 0; i--){
//        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
//            putchar(str[i]);
//        }
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void){
//
//    char str[21];
//    scanf("%s", str);
//    unsigned int len = strlen(str);
//
//    for(int i = 0; i < len; i++){
//        if (str[i] >= 49 && str[i] <= 57)
//            //int conversion
//            str[i] = 57 - (str[i]-49);
//        else if (str[i] >= 65 && str[i] <= 90)
//            str[i] = str[i] + 32;
//        else if (str[i] >= 97 && str[i] <= 122)
//            str[i] = str[i] - 32;
//        else
//            str[i] = str[i];
//    }
//    printf("%s", str);
//
//    return 0;
//}
//

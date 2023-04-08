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
 * Date         : 08 Apr 2023
 */


#include <stdio.h>
// include extra header file here
#include <ctype.h>
#include <strings.h>

int checkP(char input[], int length){
    for (int i = 0; i <= (length - 1) / 2; i++) {
        if (input[i] != input[length - 1 - i]) {
            printf("Not palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 1;
}

int main(void) {
    // Write your code here
    int isRun = 1;
    char in[20 + 1];

    do {
        scanf("%s", in);
        int length = strlen(in);
        for (int i = 0; i < strlen(in); i++) {
            in[i] = tolower(in[i]);
        }
        if (strcmp(in, "quit") == 0){
            isRun = 0;
        }
        else
            checkP(in,length);
    }
    while(isRun);


    // End of your code
    return 0;
}


///* include header file */
//#include <stdio.h>
//#include <math.h>
//
//// DO NOT change this
//typedef struct {
//    double x, y;      // 2D rectilinear coordinates of a point
//} Point;
//
//double computeDistance(Point p1, Point p2) {
//    // Write your code here
//    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
//
//}
//
//double computeTriangleArea(Point p1, Point p2, Point p3) {
//    // Write your code here
//    double s, a, b, c;
//    a = computeDistance(p1, p2);
//    b = computeDistance(p2, p3);
//    c = computeDistance(p3, p1);
//    s = (a + b + c)/2;
//
//    return sqrt(s * (s - a) * (s - b) * (s - c));
//}
//
//
//int main(void) {
//    // Don't modify the following line
//    Point p1, p2, p3;
//    // 3 points in the triangle
//    // Write your code here
//    scanf("%lf%lf%lf%lf%lf%lf", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
//    printf("p1:(%.1f, %.1f), p2:(%.1f, %.1f), p3:(%.1f, %.1f)\n", p1.x, p1.y, p2.x, p2.y, p3.x, p3.y);
//    printf("area = %.1f\n", computeTriangleArea(p1, p2, p3));
//
//
//    return 0;
//}



///* include header file */
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// DO NOT change the struct
//typedef struct _article{
//    char title[100], author[100], journal[100];
//    int year;
//} Article;
//
//Article create_article(char title[100], char author[100], char journal[100], int year) {
//    // create a new article based on the parameters
//    // remember to return the article
//    Article new_article;
//
//    for (int i = 0; i < 100; i++){
//        if (title[i] == '\n'){
//            title[i] = '\0';
//        }
//    }
//    for (int i = 0; i < 100; i++) {
//        if (author[i] == '\n'){
//            author[i] = '\0';
//        }
//    }
//    for (int i = 0; i < 100; i++) {
//        if (journal[i] == '\n'){
//            journal[i] = '\0';
//        }
//    }
//
//    strcpy(new_article.title, title);
//    strcpy(new_article.author, author);
//    strcpy(new_article.journal, journal);
//    new_article.year = year;
//
//    return new_article;
//}
//
//// Example format:
//// Title   : Problem Solving by Programming
//// Author  : ENGG1110 Team
//// Journal : Programming Journal
//// Year    : 2020
//void print_format_full(Article article){
//    // print the article based on the above format
//    printf("Title   : %s\n", article.title);
//    printf("Author  : %s\n", article.author);
//    printf("Journal : %s\n", article.journal);
//    printf("Year    : %d\n", article.year);
//
//}
//
//// Example format:
//// ENGG1110 Team. Problem Solving by Programming. Programming Journal (2020).
//void print_format_simplified(Article article){
//    // print the article based on the above format
//    printf("%s. %s. %s (%d).", article.author, article.title, article.journal, article.year);
//}
//
//int main(void){
//    Article article;
//    char title[100], author[100], journal[100];
//    int year;
//    // insert your code here
//    fgets(title, 80, stdin);
//    fgets(author, 80, stdin);
//    fgets(journal, 80, stdin);
//    scanf("%d", &year);
//
//    article = create_article(title,author,journal,year);
//    print_format_full(article);
//    print_format_simplified(article);
//
//
//    return 0;
//}


//
//#include<stdio.h>
//
//// THIS IS DONE ALREADY! DO NOT CHANGE!
//typedef struct _complex {
//    int real;
//    int imgr;
//} Complex;
//
//// THIS IS DONE ALREADY! DO NOT CHANGE!
//void printComplex(Complex x) {
//    if (x.real == 0 && x.imgr == 0) {
//        printf("0\n");
//        return;
//    }
//
//    if (x.real == 0) {
//        printf("%di\n", x.imgr);
//        return;
//    }
//
//    if (x.imgr == 0) {
//        printf("%d\n", x.real);
//        return;
//    }
//
//    if (x.imgr > 0) {
//        printf("%d + %di\n", x.real, x.imgr);
//    } else {
//        printf("%d - %di\n", x.real, (-1) * x.imgr);
//    }
//}
//
//Complex addComplex(Complex x, Complex y) {
//    // compute complex number addition (x + y)
//    Complex result;
//
//    result.real = x.real + y.real;
//    result.imgr = x.imgr + y.imgr;
//
//
//    return result;
//}
//
//Complex multiplyComplex(Complex x, Complex y) {
//    // compute complex number multiplication (x * y)
//    Complex result;
//
//    result.real = x.real * y.real - x.imgr * y.imgr;
//    result.imgr = x.imgr * y.real + x.real * y.imgr;
//
//
//    return result;
//}
//
///* starting point of this C program */
//int main(void) {
//    // Enter your code here.
//    // 1. Read the two complex numbers
//    Complex a, b;
//    scanf("%d%d%d%d", &a.real, &a.imgr, &b.real, &b.imgr);
//
//    // 2. Perfrom complex addition and multiplication
//    printComplex(addComplex(a, b));
//    printComplex(multiplyComplex(a,b));
//
//    // 3. Output complex sum and product
//
//    /* last statement of this C program */
//    return 0;
//}

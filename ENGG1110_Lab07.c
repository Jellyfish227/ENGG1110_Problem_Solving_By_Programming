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
 * Date         : 22 Mar 2023
 */

#include <stdio.h>

//return 1 if evil and return 0 otherwise
int checkEvil(int dec){
    int temp, dig;
    temp = dec;
    int a[8] = {0};

    for(dig = 0; dig < 8; dig++){
        if(temp % 2){
            a[dig] = 1;
        }
        temp /= 2;
    }
    int sum = 0;
    for(int i = 0; i < 8;i++){
        if(a[i]==1)
            sum++;
    }
    return !(sum % 2);
}

int main(void){

    int a, b;
    scanf("%d%d", &a, &b);


    for (int i = b; i >= a; i--){
        if (checkEvil(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}



//#include <stdio.h>
//
//int checkSymmetricMatrix( int matrix[16][16],  int size ){
//    int success = 1;
//    // check whether the matrix is symmetric
//    // return 1 if it is symmetric; otherwise return 0
//    for(int i = 0; i < size; i++){
//        for(int j = 0; j < size; j++){
//            if(matrix[i][j] != matrix[j][i]) {
//                success = 0;
//                break;
//            }
//        }
//    }
//
//    return success;
//}
//
//int main(void){
//    int n;
//    int matrixRead[16][16];
//    // read matrix from user input
//    scanf("%d",&n);
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            scanf("%d", &matrixRead[i][j]);
//        }
//    }
//
//    // call function - checkSymmetricMatrix
//
//    switch (checkSymmetricMatrix(matrixRead, n)) {
//        case 0:{
//            printf("It is not a symmetric matrix!");
//            break;
//        }
//        case 1:{
//            printf("It is a symmetric matrix!");
//            break;
//        }
//    }
//
//
//    // print your checking result
//    return 0;
//}
//
//
//#include <stdio.h>
//
//// This function finds and returns total number of minutes in a duration represented by array Dur.
//int toMinutes(int Dur[3]){
//    int minutes;
//    minutes = Dur[2] + 60 * Dur[1] + 24 * 60 * Dur[0];
//
//    return minutes;
//}
//
//
//// This function sets elements in array Dur to represent a duration that is equal to M minutes.
//void setDuration(int Dur[3], int M)
//{
//    Dur[2] = M % 60;
//    Dur[1] = (M / 60) % 24;
//    Dur[0] =  M / 60 / 24;
//}
//
//
//// This function prints a duration represented by array Dur in the following format:
///***** C O M M E N T ******
//D days H hours M minutes
//******* F O R M A T ******/
//void printDuration(int Dur[3])
//{
//    printf("%d days %d hours %d minutes", Dur[0], Dur[1], Dur[2]);
//}
//
//
///* DO NOT modify the given main() function */
//int main(void)
//{
//    int A[3], B[3], minutes, diff;
//
//    scanf("%d", &minutes);
//    setDuration(A, minutes);
//
//    scanf("%d", &minutes);
//    setDuration(B, minutes);
//
//    printf("Duration #1: ");
//    printDuration(A);
//    printf("\n");
//
//    printf("Duration #2: ");
//    printDuration(B);
//    printf("\n");
//
//    // Compute the absolute difference between the durations
//    diff = toMinutes(A) - toMinutes(B);
//    if (diff < 0)
//        diff = -diff;
//
//    printf("The two durations are %d minutes apart.\n", diff);
//
//    return 0;
//}
//
//

//
//
//#include <stdio.h>
//// DO NOT CHANGE THE FUNCTION PARAMETER LIST
//void SelectionSort(int input[], int size) {
//    // Insert your code here
//    int minPos = 0;
//    int temp;
//    for (int i = 0; i < size; i++) {
//        minPos = i;
//        //find smallest
//        for(int j = i+1; j < size; j++) {
//            if(input[j] < input[minPos]) {
//                minPos = j;
//            }
//        }
//        temp = input[minPos];
//        input[minPos] = input[i];
//        input[i] = temp;
//    }
//
//}
//
//// DO NOT CHANGE THE MAIN FUNCTION!
//int main(void) {
//    int a[8] = {0};
//    scanf("%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
//    SelectionSort(a, 8);
//    printf("%d %d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
//    return 0;
//}

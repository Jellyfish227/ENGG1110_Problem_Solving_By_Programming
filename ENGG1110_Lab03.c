///* include header file */
//#include <stdio.h>
//
///* starting point of this C program */
//int main(void) {
//
//    // 1. User input
//    int phoneNum;
//    scanf("%d", &phoneNum);
//
//    // 2. Phone number validation
//    // TO BE COMPLETED
//    // ...
//    // HINT:
//    // What is the range of valid numbers? What is the smallest and biggest number fulfilling all requirements?
//    // Think about it carefully...
//    if ( ((phoneNum / 10000000) < 2) || ((phoneNum / 10000000) >= 10) ){
//        printf("Invalid phone number");
//        return 0;
//    }
//
//    // 3. Extract the digits in the phone number
//    // TO BE COMPLETED
//    // ...
//    // HINT:
//    //   printf("%d\n", phoneNum / 10000000 % 10);
//    // can print out the first digit of the phone number...
//    //
//    // How about
//    //   printf("%d\n", phoneNum / 1000000 % 10); ?
//    // or
//    //   printf("%d\n", phoneNum / 100000 % 10); ?
//    int ar[8] = {0};
//    ar[0] = phoneNum / 10000000 % 10;
//    ar[1] = phoneNum / 1000000 % 10;
//    ar[2] = phoneNum / 100000 % 10;
//    ar[3] = phoneNum / 10000 % 10;
//    ar[4] = phoneNum / 1000 % 10;
//    ar[5] = phoneNum / 100 % 10;
//    ar[6] = phoneNum / 10 % 10;
//    ar[7] = phoneNum / 1 % 10;
//
//
//    // 4. Count the number of occurrence of digits
//    int digitCount[10] = {0}; // array for counting digits' occurrences, all ZERO initially
//    // TO BE COMPLETED
//    // ...
//    // HINT:
//    // The occurrences of the digit 0 can be stored in digitCount[0],
//    // ...
//    // the occurrences of the digit 9 can be stored in digitCount[9].
//    //
//    for (int i = 0; i <= 7 ; i++) {
//        digitCount[ar[i]]++;
//    }
//
//    // 5. Count how many different digits appeared in the phone number.
//    // TO BE COMPLETED
//    int diff_digit = 0;
//    for (int i = 0; i <= 9 ; i++) {
//        if (digitCount[i] != 0) {
//            diff_digit++;
//        }
//    }
//    // ...
//    // 6. Print out the results
//    printf("There are %d different digit(s).", diff_digit);
//    return 0;
//
//}

/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void) {

    // 1. Declare an array countVote[3] to count the votes, remember to initialize the array
    int countVote[3] = {0};

    // 2. Read the number, and count the vote.
    int person;

    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;
    scanf("%d", &person);
    countVote[person - 1]++;

    // 3. Do (copy and paste) statements in step 2 for 9 more times

    // 4. Determine the largest vote
    int max = countVote[0];
    int max_person[2] = {0,0};
    for (int i = 0; i <= 2; i++){
        if (countVote[i] > max){
            max = countVote[i];
            max_person[0] = i;
            max_person[1] = i;
        }
        else if (countVote[i] == max){
            max_person[1] = i;
        }
    }

    // 5. See if more than one candidate shares the same largest vote
    if (max_person[0] == max_person[1])
        printf("Congratulations! Candidate %d is the next committee chairman.", max_person[0]+1);
    else
        printf("We cannot decide our committee chairman in this vote.");


    // 6. Output the results

    // last programming statement
    return 0;
}
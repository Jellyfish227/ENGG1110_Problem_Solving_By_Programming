/**
 * ENGG1110 Problem Solving by Programming
 *
 * Course Project
 *
 * I declare that the project here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 *   https://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name  : Yu Ching Hei
 * Student ID    : 1155193237
 * Class/Section : ENGG1110D
 * Date          : 20 Mar 2023
 */

#include <stdio.h>
/* NO other header files are allowed */

/* NO global variables are allowed */



/* Initialize the specified game board.
   Please design your own representation for the game board.  For example:
      - Does gameBoard[0][0] represent the top left corner or the bottom left corner of the game board?
      - Which numbers represent empty cells and crosses? */
//done
void initGameBoard(int gameBoard[3][3]) {

    // TODO: Complete this part
    int temp = 0;
    for (int i = 2; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            temp++;
            gameBoard[i][j] = temp;
        }
    }

}



/* Display the specified game board on the screen.
   You are required to exactly follow the output format stated in the project specification.
   IMPORTANT: Using other output format will result in mark deduction. */
//done
void printGameBoard(int gameBoard[3][3]) {

    // TODO: Complete this part
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if(j % 2 != 1){
                if (gameBoard[i][j/2] != -1){
                    printf("%d", gameBoard[i][j/2]);
                } else {
                    printf("X");
                }
            }
            else{
                printf("|");
            }
        }
        printf("\n");
    }

}



/* Display the two game boards on the screen.
   Implemented for you already and no change is needed */
//done
void printTwoGameBoards(int gameBoard1[3][3], int gameBoard2[3][3]) {
    printf("\n");
    printf("# Game Board 1 #\n");
    printGameBoard(gameBoard1);
    printf("# Game Board 2 #\n");
    printGameBoard(gameBoard2);
}



/* Return 1 if the specified game board is dead (i.e., having three-in-a-row of crosses), otherwise return 0. */
//done
int isGameBoardDead(int gameBoard[3][3]){

    // TODO: Complete this part
    //horizontal check
    for (int i = 0; i < 3; i++){
        if (gameBoard[i][0] + gameBoard[i][1] + gameBoard[i][2] == -3)
            return 1;
        else
            continue;
    }
    //vertical check
    for (int j = 0; j < 3; j++) {
        if(gameBoard[0][j] + gameBoard[1][j] + gameBoard[2][j] == -3)
            return 1;
        else
            continue;
    }
    //diagonal check
    if (gameBoard[0][0] + gameBoard[1][1] + gameBoard[2][2] == -3
        || gameBoard[0][2] + gameBoard[1][1] + gameBoard[2][0] == -3)
        return 1;
    else
        return 0;
}



/* Update the specific game board according to the user input.
   The user input may not be valid, but you can assume that it must be an integer. */
//done
void updateGameBoard(int gameBoard[3][3]) {

    // TODO: Complete this part
    int temp, i, j;

    printf("Choose the cell:\n");
    do {
        scanf("%d", &temp);
        i = 2 - ((temp-1) / 3);
        j = (temp-1) % 3;
        if (gameBoard[i][j] == -1){
            printf("The chosen cell is occupied. Please input again:\n");
        }
        else if (temp > 9 || temp < 1){
            printf("Input out of range. Please input again:\n");
        }
    }
    while (temp != gameBoard[i][j]);
    gameBoard[i][j] = -1;

}



/* Choose a game board and place a cross according to the user inputs.
   The user input may not be valid, but you can assume that it must be an integer. */
//done
void placeCrossByHumanPlayer(int gameBoard1[3][3], int gameBoard2[3][3]) {

    // TODO: Complete this part
    int gBNum;
    int isUpdated;
    printf("Choose the game board:\n");
    do {
        isUpdated = 0;
        scanf("%d", &gBNum);
        switch (gBNum) {
            case 1:{
                if(isGameBoardDead(gameBoard1)){
                    printf("The chosen game board is dead. Please input again:\n");
                    continue;
                }
                else{
                    updateGameBoard(gameBoard1);
                    isUpdated = 1;
                }
                break;
            }
            case 2:{
                if(isGameBoardDead(gameBoard2)){
                    printf("The chosen game board is dead. Please input again:");
                    continue;
                }
                else{
                    updateGameBoard(gameBoard2);
                    isUpdated = 1;
                }
                break;
            }
            default:{
                printf("Input out of range. Please input again:\n");
            }
        }
    } while (!isUpdated);

}



/* Return the number of crosses on the specified game board. */
//done
int countNumOfCrosses(int gameBoard[3][3]) {

    // TODO: Complete this part
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gameBoard[i][j] == -1)
                count++;
        }
    }

    return count;
}



/* Checking if move will kill gameBoard, if it kills then return 1, otherwise return 0 */
int isFatal(int gameBoard[3][3], int cell){
    int sandboxGameBoard[3][3];
    //build sandbox game board
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sandboxGameBoard[i][j] = gameBoard[i][j];
        }
    }

    //split i, j
    int i, j;
    i = 2 - (cell - 1)/ 3;
    j = (cell-1) % 3;

    sandboxGameBoard[i][j] = -1;

    return isGameBoardDead(sandboxGameBoard);
}



/* Determine which cell to place, return that cell number */
int cellToPlace(int gameBoard[3][3], int boardSearchSequence) {
    //create a sandbox gameBoard to test if the move will kill the gameBoard
    if (boardSearchSequence == 1) {
        //find min without killing
        int temp = 1;
        int isDying = 0;
        for (int i = 2; i >= -1; i--) {
            for (int j = 0; j < 3; j++) {
                if (temp == 10){
                    //lose game
                    isDying = 1;
                    temp = 1;
                    //reset looping index, re-loop to lose
                    i = 2;
                    j = 0;
                }
                if (gameBoard[i][j] == temp) {
                    if (isDying)
                        return temp;
                    if (!isFatal(gameBoard, temp))
                        return temp;
                }
                temp++;
            }
        }

    }
    else if (boardSearchSequence == 2){
        //find max without killing
        int temp = 9;
        int isDying = 0;
        for (int i = 0; i <= 3; i++){
            for (int j = 2; j >= 0 ; j--) {
                if (temp == 0){
                    //lose game
                    isDying = 1;
                    temp = 9;
                    //reset looping index, re-loop to lose
                    i = 0;
                    j = 2;
                }
                if (gameBoard[i][j] == temp) {
                    if (isDying)
                        return temp;
                    if (!isFatal(gameBoard,temp))
                        return temp;
                }
                temp--;
            }
        }

    }
    return -1;
}



/* Determine the next move of the computer player and update the corresponding game board accordingly.
   You are required to exactly follow the strategy mentioned in the project specification.
   IMPORTANT: Using other strategies will result in mark deduction. */
void placeCrossByComputerPlayer(int gameBoard1[3][3], int gameBoard2[3][3]) {

    // TODO: Complete this part

    //choose gameBoard
    int ComGB;
    printf("Choose the game board:\n");
    if (isGameBoardDead(gameBoard1) == 0 && isGameBoardDead(gameBoard2) == 0) {
        //both game boards are NOT dead
        ComGB = 20;
        if (countNumOfCrosses(gameBoard1) <= countNumOfCrosses(gameBoard2)){
            ComGB += 1;
            printf("1\n");
        }else{
            ComGB += 2;
            printf("2\n");
        }
    }
    else if(isGameBoardDead(gameBoard1) == 0){
        //GB1 Not dead
        ComGB = 11;
        printf("1\n");
    }
    else{
        //GB2 Not dead
        ComGB = 12;
        printf("2\n");
    }

    printf("Choose the cell:\n");
    //choose cell
    switch (ComGB) {
        case 21:{
            //no GB dead, GB1 chosen, find min, no kill constraint
            int temp = 1;
            for (int i = 2; i >= 0; i--) {
                for (int j = 0; j < 3; j++) {
                    if (gameBoard1[i][j] == temp){
                        gameBoard1[i][j] = -1;
                        printf("%d\n", temp);
                        break;
                    }
                    temp++;
                }
            }
            break;
        }
        case 22:{
            //no GB dead, GB2 chosen, find max, no kill constraint
            int temp = 9;
            for (int i = 0; i < 3; i++) {
                for (int j = 2; j >= 0; j--) {
                    if (gameBoard2[i][j] == temp){
                        gameBoard2[i][j] = -1;
                        printf("%d\n", temp);
                        break;
                    }
                    temp--;
                }
            }
            break;
        }
        case 11:{
            //1 GB dead, GB1 chosen, NO kill allowed if possible
            //when pc must lose, place in the smallest possible cell
            int cell = cellToPlace(gameBoard1,1);
            printf("%d\n",cell);
            //split i, j
            int i, j;
            i = 2 - (cell - 1)/ 3;
            j = (cell-1) % 3;
            gameBoard1[i][j] = -1;

            break;
        }
        case 12:{
            //1GB dead, GB2 chosen, NO kill allowed if possible
            //when pc must lose, place in the largest possible cell
            int cell = cellToPlace(gameBoard2,2);
            printf("%d\n",cell);
            //split i, j
            int i, j;
            i = 2 - (cell - 1)/ 3;
            j = (cell-1) % 3;
            gameBoard2[i][j] = -1;
            break;
        }
        default:{
            break;
        }
    }


}



/* The main function */
int main()
{
    /* Local variables */
    int gameBoard1[3][3];   // Represent Game Board 1
    int gameBoard2[3][3];   // Represent Game Board 2
    int currentPlayer;      // 1: Player 1             2: Player 2
    int gameEnd;            // 0: The game continues   1: The game ends
    int numOfHumanPlayers;  // 1 or 2

    /* Initialize the local variables */
    initGameBoard(gameBoard1);
    initGameBoard(gameBoard2);
    currentPlayer = 1;
    gameEnd = 0;
    printf("Enter the number of human players [1-2]:\n");
    scanf("%d", &numOfHumanPlayers);    // You can assume that the user input must be valid here


    /* Game start
       If there are two human players, they are Player 1 and Player 2
       If there is only one human player, he/she is Player 1 and another player is the computer
       For both cases, Player 1 moves first
       Hint: use a while loop */

    // TODO: Complete this part

    while (!gameEnd){
        //Game Start
        printTwoGameBoards(gameBoard1, gameBoard2);
        if (currentPlayer == 1){
            printf("# Player 1's turn #\n");
            placeCrossByHumanPlayer(gameBoard1, gameBoard2);
            currentPlayer++;
        }
        else if (currentPlayer == 2){
            if (numOfHumanPlayers == 2){
                //Human 2nd player
                printf("# Player 2's turn #\n");
                placeCrossByHumanPlayer(gameBoard1, gameBoard2);
                currentPlayer++;
            }
            else{
                //Computer 2nd player
                printf("# Computer's turn #\n");
                placeCrossByComputerPlayer(gameBoard1, gameBoard2);
                currentPlayer++;
            }
        }

        //check if both gameBoard is dead -> update gameEnd status
        if ((isGameBoardDead(gameBoard1) && isGameBoardDead(gameBoard2)) == 1)
            gameEnd = 1;

        //switch player from 2 to 1
        if (currentPlayer > 2)
            currentPlayer = 1;
    }

    //gameEnd
    printTwoGameBoards(gameBoard1, gameBoard2);
    if (numOfHumanPlayers == 1 && currentPlayer == 2){
        printf("Computer wins!");
    }else{
        printf("Congratulations! Player %d wins!", currentPlayer);
    }


    return 0;
}

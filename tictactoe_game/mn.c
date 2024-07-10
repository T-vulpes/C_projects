#include <stdio.h>
#include <stdlib.h>

int headerPrinted = 0;

void printBoard(char board[3][3]) {
    system("clear");  
    if (!headerPrinted) {
        printf("Tic Tac Toe Game\n");
        printf("Player 1 (X)  -  Player 2 (O)\n\n");
        headerPrinted = 1; 
    }
    
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("     |     |     \n");
        for (j = 0; j < 3; j++) {
            printf("  %c  ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("_____|_____|_____\n");
    }
    printf("\n");
}

int checkWin(char board[3][3]) {
    int i;
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;
    return 0;
}

int main() {
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int row, col, player = 1;
    char mark;
    
    int i;
    for (i = 0; i < 9; i++) {
        printBoard(board);
        player = (i % 2) + 1;
        mark = (player == 1) ? 'X' : 'O';
        
        printf("Player %d, enter row (1-3) and column (1-3): ", player);
        scanf("%d %d", &row, &col);
        row--; col--;  // Adjusting for array indexing
        
        if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid move, try again.\n");
            i--;
            continue;
        }
        board[row][col] = mark;
        
        if (checkWin(board)) {
            printBoard(board);
            printf("Player %d wins!\n", player);
            return 0;
        }
    }
    printBoard(board);
    printf("It's a draw!\n");
    return 0;
}


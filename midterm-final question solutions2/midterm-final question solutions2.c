#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    // Question 2
    int a, sum = 0;
    for (a = 1; a <= 81; a += 4) {
        sum += a;
    }
    printf("Sum of numbers from 1 to 81 increasing by 4: %d", sum);
    printf("\n\n");
    
    // Question 3
    int scores[10] = {2, 1, 0, 0, 2, 1, 1, 2, 1, 0};
    int k, points = 0;
    for (k = 0; k < 10; k++) {
        if (scores[k] == 2) {
            points += 3;
        } else if (scores[k] == 1) {
            points += 1;
        } else if (scores[k] == 0) {
            points += 0;
        }
    }
    if (points >= 12) {
        printf("Football team's points: %d You stayed in the league.", points);
    } else {
        printf("Football team's points: %d You were relegated.", points);
    }
    
    return 0;
}


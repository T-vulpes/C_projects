#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
    // if-else structure
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0 || number % 11 == 0) {
        printf("The entered number is divisible by 2 or 11.");
    } else {
        printf("The entered number is not divisible by 2 or 11. :(");
    }
    
    printf("\n\n\n");
    // Based on the entered degree, determine the state of water: solid, liquid, gas
    printf("*****WATER STATE*****\n\n");
    printf("Enter the temperature of the water: ");
    float degree;
    scanf("%f", &degree);
    if (degree <= 0) {
        printf("Water is in solid (ice) state.");
    }
    
    if (degree > 0 && degree < 100) {
        printf("Water is in liquid state.");
    }
    
    if (degree >= 100) {
        printf("Water is in gas state.");
    }
    
    printf("\n\n\n");
    
    // Based on the entered exam and project scores, determine the student's grade
    printf("*****STUDENT'S GRADE STATUS*****\n\n");
    int exam1, exam2, exam3, project1, average;
    
    printf("Enter your first exam score: ");
    scanf("%d", &exam1);
    printf("Enter your second exam score: ");
    scanf("%d", &exam2);
    printf("Enter your third exam score: ");
    scanf("%d", &exam3);
    printf("Enter your first project score: ");
    scanf("%d", &project1);
    
    average = (exam1 + exam2 + exam3 + project1) / 4;
    
    if (average <= 50) {
        printf("Your grade status: FF");
    } else if (average > 50 && average < 60) {
        printf("Your grade status: DD");
    } else if (average > 60 && average < 70) {
        printf("Your grade status: CC");
    } else if (average > 70 && average < 85) {
        printf("Your grade status: BB");
    } else if (average >= 85) {
        printf("Your grade status: AA");
    }
    return 0;
}


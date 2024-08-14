#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0 || number % 11 == 0) {
        printf("The entered number is divisible by 2 or 11.");
    } else {
        printf("The entered number is not divisible by 2 or 11. :(");
    }
    
    printf("\n\n\n");
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


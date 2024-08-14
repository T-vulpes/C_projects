#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
    int num1, num2, sum, product, quotient, difference;
    num1 = 36;
    num2 = 6;
    sum = num1 + num2;
    product = num1 * num2;
    quotient = num1 / num2;
    difference = num1 - num2;
    printf("The sum of the entered numbers = %d \n The product of the entered numbers = %d \n The quotient of the entered numbers = %d \n The difference of the entered numbers = %d \n\n\n", sum, product, quotient, difference);
    
    int grade1, grade2, grade3, average;
    printf("Enter your first exam grade: ");
    scanf("%d", &grade1);
    
    printf("Enter your second exam grade: ");
    scanf("%d", &grade2);
    
    printf("Enter your third exam grade: ");
    scanf("%d", &grade3);
    
    average = (grade1 + grade2 + grade3) / 3;
    printf("Your grade average: %d", average);
    
    printf("\n\n\n\n");
    
    printf("*****CINEMA PRICING*****\n");
    int popcorn, soda, water, ticket, debt;
    printf("Enter the number of popcorns you bought: ");
    scanf("%d", &popcorn);
    
    printf("Enter the number of sodas you bought: ");
    scanf("%d", &soda);
    
    printf("Enter the number of waters you bought: ");
    scanf("%d", &water);
    
    printf("Enter the number of tickets you bought: ");
    scanf("%d", &ticket);
    
    debt = popcorn * 2 + soda * 3 + water * 1 + ticket * 5;
    printf("Your total debt: %d", debt);
    return 0;
}


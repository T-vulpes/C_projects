#include <stdio.h>
#include <stdlib.h>


int main() {
    int normal, hand, normalCharge, handCharge, totalCharge;
    printf("Hand luggage weight (kg): ");
    scanf("%d", &hand);
    printf("Baggage weight (kg): ");
    scanf("%d", &normal);
    
    if (normal <= 15) {
        normalCharge = 0;
    } else {
        normalCharge = (normal - 15) * 5;
    }
    
    if (hand <= 8) {
        handCharge = 0;
    } else {
        handCharge = (hand - 8) * 4;
    }
    
    totalCharge = handCharge + normalCharge;
    printf("Total charge: %d TL\nHave a nice trip..", totalCharge);
    
    printf("\n\n");

    // Question 2: Sum of integers between two numbers
    int num1, num2, i;
    int sum = 0;
    
    while (1) {  // Infinite loop until valid input is received
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        
        if (num1 == num2) {
            printf("Please enter different values!!\n");
        } else {
            break;  // Exit loop if the numbers are different
        }
    }

    if (num1 > num2) {
        for (i = num2; i <= num1; i++) {
            sum += i;
        }
    } else {
        for (i = num1; i <= num2; i++) {
            sum += i;
        }
    }
    
    printf("The sum of the integers between the entered values: %d", sum);
    printf("\n\n");
    
    // Question 3 placeholder

    return 0;
}


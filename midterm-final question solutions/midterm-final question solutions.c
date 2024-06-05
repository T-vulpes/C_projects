#include <stdio.h>
#include <stdlib.h>

/* Run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    // Hand luggage weight limit is 8 kg, baggage weight limit is 15 kg. 
    // Additional charges: 4 TL per kg for hand luggage, 5 TL per kg for baggage
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
    // Insert additional code for the third question here if needed

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // Include math.h for proper power functions

int main() {
    printf("********************");
    printf("\n");
    printf("**      MENU      **");
    printf("\n");
    printf("********************");
    printf("\n\n");
    printf("1. Addition operation\n");
    printf("2. Multiplication operation\n");
    printf("3. Square operation\n");
    printf("4. Cube operation\n");
    printf("5. Equation (5x^2 + 4x + 3)\n");
    printf("\n\n");

    int num1, num2, result, choice;
    printf("Your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = num1 + num2;
            printf("The sum of the entered numbers = %d", result);
            break;
        
        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = num1 * num2;
            printf("The product of the entered numbers = %d", result);
            break;
        
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num1);
            result = num1 * num1;
            printf("The square of the entered number = %d", result);
            break;
        
        case 4:
            printf("Enter a number: ");
            scanf("%d", &num1);
            result = num1 * num1 * num1;
            printf("The cube of the entered number = %d", result);
            break;
        
        case 5:
            printf("Enter the value of x: ");
            scanf("%d", &num1);
            result = (5 * num1 * num1) + (4 * num1) + 3;
            printf("The result of the equation for the entered x value = %d", result);
            break;
        
        default:
            printf("Invalid choice. Please try again.");
    }

    return 0;
}


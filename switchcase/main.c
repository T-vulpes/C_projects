#include <stdio.h>
#include <stdlib.h>

    int num1, num2, result;
    char operation;

int main() {
    int month;
    printf("Enter the month number:");
    scanf("%d", &month);
    switch(month)
    {
        case 1 : printf("January"); break;
        case 2 : printf("February"); break;
        case 3 : printf("March"); break;
        case 4 : printf("April"); break;
        case 5 : printf("May"); break;
        case 6 : printf("June"); break;
        case 7 : printf("July"); break;
        case 8 : printf("August"); break;
        case 9 : printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        
        default : printf("Invalid number entry :( Please enter the value again"); break;
    }
    printf("\n\n\n");

    printf("Enter the first number:");
    scanf("%d", &num1);
    
    printf("Enter the second number:");
    scanf("%d", &num2);
    
    printf("Enter the operation to be performed:");
    scanf(" %c", &operation);
    
    switch(operation)
    {
        case '+' : 
            result = num1 + num2;
            printf("The sum of the entered numbers: %d", result);
            break;
    
        case '-' :
            if(num1 >= num2)
            {
                result = num1 - num2;
                printf("The difference of the entered numbers: %d", result);
            }
            if(num2 >= num1)
            {
                result = num2 - num1;
                printf("The difference of the entered numbers: %d", result);
            }
            break;
    
        case '/':
            if(num1 >= num2)
            {
                result = num1 / num2;
                printf("The division of the entered numbers: %d", result);
            }
            if(num2 >= num1)
            {
                result = num2 / num1;
                printf("The division of the entered numbers: %d", result);
            }
            break;
    
        case 'x':
            result = num1 * num2;
            printf("The product of the entered numbers: %d", result);
            break;
    }   
    return 0;
}


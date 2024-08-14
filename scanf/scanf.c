#include <stdio.h>
#include <stdlib.h>

int main() {
    char firstName[10], lastName[15], age[2], city[13], occupation[10];
    
    printf("Enter your first name: ");
    scanf("%s", firstName);
    
    printf("Enter your last name: ");
    scanf("%s", lastName);
    
    printf("Enter your age: ");
    scanf("%s", age);
    
    printf("Enter your city: ");
    scanf("%s", city);
    
    printf("Enter your occupation: ");
    scanf("%s", occupation);

    printf("\n-----PERSONAL INFORMATION-----\n\n");
    printf("First Name: %s\n", firstName);
    printf("Last Name: %s\n", lastName);
    printf("Age: %s\n", age);
    printf("City: %s\n", city);
    printf("Occupation: %s\n\n", occupation);
    printf("-------------------");

    return 0;
}


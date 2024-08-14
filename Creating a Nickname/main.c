#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NAME_LENGTH 100

const char *adjectives[] = {
    "Swift", "Brave", "Clever", "Mighty", "Silent", "Sly", "Fearless", "Noble",
    "Quick", "Wise", "Fierce", "Bold", "Gentle", "Loyal", "Proud", "Valiant"
};

const char *nouns[] = {
    "Tiger", "Eagle", "Wolf", "Lion", "Panther", "Falcon", "Shark", "Dragon",
    "Hawk", "Bear", "Fox", "Viper", "Leopard", "Griffin", "Phoenix", "Stallion"
};

void generateNickname(char *firstName, char *favoriteColor, int birthYear) {
    const char *adjective = adjectives[rand() % (sizeof(adjectives) / sizeof(adjectives[0]))];
    const char *noun = nouns[rand() % (sizeof(nouns) / sizeof(nouns[0]))];

    char nickname[MAX_NAME_LENGTH];
    snprintf(nickname, sizeof(nickname), "%s%s%d", adjective, noun, birthYear % 100);

    printf("\nYour generated nickname is: %s\n", nickname);
}

int main() {
    char firstName[MAX_NAME_LENGTH];
    char favoriteColor[MAX_NAME_LENGTH];
    int birthYear;

    
    srand(time(NULL));

   
    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0;  

    printf("Enter your favorite color: ");
    fgets(favoriteColor, sizeof(favoriteColor), stdin);
    favoriteColor[strcspn(favoriteColor, "\n")] = 0; 

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    generateNickname(firstName, favoriteColor, birthYear);

    return 0;
}


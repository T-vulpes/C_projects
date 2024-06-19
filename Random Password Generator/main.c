#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int length) {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";
    int charactersLength = sizeof(characters) - 1;
    char password[length + 1];
    int i;

    srand(time(0));
    for (i = 0; i < length; i++) {
        password[i] = characters[rand() % charactersLength];
    }
    password[length] = '\0';

    printf("Generated Password: %s\n", password);
}

int main() {
    int length;
    printf("Enter the desired password length: ");
    scanf("%d", &length);
    generatePassword(length);
    return 0;
}


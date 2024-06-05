#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int width, height, a, b;
    printf("Enter the width value:");
    scanf("%d", &width);
    printf("Enter the height value:");
    scanf("%d", &height);
    
    for (a = 1; a <= height; a++) {
        for (b = 1; b <= width; b++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");
    // second example
    int n, i, k;
    printf("Enter the base value of the triangle:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");
    // third example
    int x, y, length;
    printf("Enter the base length:");
    scanf("%d", &length);
    for (x = 1; x <= length; x++) {
        for (y = 1; y <= length - x; y++) {
            printf(" ");
        }
        for (y = 1; y <= x; y++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


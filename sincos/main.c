#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // Include the math library for sin and cos functions

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    double degree, resultSin, resultCos;
    printf("Enter the degree: ");
    scanf("%lf", &degree);
    resultSin = sin(degree * M_PI / 180.0);  // Convert degree to radians
    printf("The sine value of the degree: %lf\n", resultSin);
    resultCos = cos(degree * M_PI / 180.0);  // Convert degree to radians
    printf("The cosine value of the degree: %lf", resultCos);
    return 0;
}


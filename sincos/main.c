#include <stdio.h>
#include <stdlib.h>
#include <math.h>  


int main(int argc, char *argv[]) {
    double degree, resultSin, resultCos;
    printf("Enter the degree: ");
    scanf("%lf", &degree);
    resultSin = sin(degree * M_PI / 180.0);  
    printf("The sine value of the degree: %lf\n", resultSin);
    resultCos = cos(degree * M_PI / 180.0);  
    printf("The cosine value of the degree: %lf", resultCos);
    return 0;
}


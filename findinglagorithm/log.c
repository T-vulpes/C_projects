#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double number, result, result2;
	printf("Enter a number: ");
	scanf("%lf", &number);
	result = fabs(number); // absolute value
	printf("Result: %.lf\n", result);
	result2 = log(number); // logarithmic value
	printf("Logarithmic result: %.7lf", result2);
	
	return 0;
}


#include <stdio.h>
#include <math.h>

int main(void) {
	double value = 3.999999;
	printf("Original value: %f\n", value);
	printf("Flooring: %f\n", floor(value));
	printf("Ceiling: %f\n", ceil(value));
}
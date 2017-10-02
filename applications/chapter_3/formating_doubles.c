#include <stdio.h>

int main(void) {
	double number = -2.6143e10;
	printf("%-20.1dfar away\n", 345);
	printf("%-20.7dfar away\n", 345);
	printf("%.10g\n", number);
	printf("%.3e\n", number);
}
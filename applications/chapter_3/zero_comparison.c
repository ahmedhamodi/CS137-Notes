#include <stdio.h>

int main(void) {
	double a = 7.0/12.0;
	double b = 1.0/3.0;
	double c = 1.0/4.0;

	if (b+c==a) {
		printf("Everything is awesome!");
	} else {
		printf("Not cool... %g\n", b+c-a);
	}

	//use this instead
	if ((b+c)-a < 0.0000001 && a-(b+c) < 0.0000001) {
		printf("Everything is awesome!");
	} else {
		printf("Not cool... %g", b+c-a);
	}
}
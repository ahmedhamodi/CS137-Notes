#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "fixed.h"

double g(double x){return cos(x);}

double fixed(double x0, double epsilon, int iterations) {
	assert(epsilon > 0.0 && iterations > 0);

	double xnew = 0.0;
	for (int i=0; i < iterations; i++) {
		xnew = g(x0);
		if (fabs(xnew - x0) < epsilon) return xnew;
		x0 = xnew;
	}

	return xnew;
}

int main (void) {
	printf("%g\n", fixed(0, 0.0001, 50));
	return 0;
}
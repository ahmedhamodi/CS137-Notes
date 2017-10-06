#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "bisection.h"

double f(double x){return x-cos(x);}

double bisect(double a, double b, double epsilon, int iterations) {
	double m = a, fm;
	assert (epsilon > 0.0 && f(a)*f(b) < 0);
	for (int i = 0; i < iterations; i++) {
		m = (a+b)/2.0;
		fm = f(m);
		if (fabs(fm) < epsilon) return m;
		if (fm > 0) b=m;
		else a=m;
	}

	return m;
}

int main(void) {
	printf("%g\n", bisect(-10, 10, 0.0001, 50));
}
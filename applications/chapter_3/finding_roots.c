#include <assert.h>
#include <math.h>
#include "bisection.h"

double f(double x){return x - cos(x);}

double bisect(double a, double b, double epsilon, int iterations) {
	assert (epsilon > 0 && iterations > 0 && f(a)*f(b) < 0);

	double m=0.0, fm;
	for (int i = 0; i < iterations; i++) {
		m = (a+b)/2.0;
		fm = f(m);
		if (fabs(fm) < epsilon) return m;
		if (fm * f(b) > 0) b = m;
		else a = m;
	}
}
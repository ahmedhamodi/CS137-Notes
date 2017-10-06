#ifndef BISECTION_H
#define BISECTION_H

/*
Pre: none
Post: returns the value of x - cos(x)
*/

// double f(double x);

/*
Pre: epsilon > 0 is a toleratnce. iterations > 0,
	f(x) has only one root in [a,b], f(a)f(b) < 0
Post: Returns an approximate root for f(x) using
	bisection method. Stops when either number of
	iterations is exceeded or |f(m)| < epsilon
*/
double bisect(double a, double b, double epsilon, int iterations, double (*f)(double));

#endif
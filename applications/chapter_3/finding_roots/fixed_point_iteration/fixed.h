#ifndef FIXED_H
#define FIXED_H

/*
Pre: none
Post: Returns the value of cos(x)
*/
double g(double x);

/*
Pre: epsilon > 0 is a tolerance, iterations > 0, x0 is sufficiently
	close to a stable fixed point
Post: Returns an approximate fixed point of g(x) using
	cobwebbing. Stops when either number of iteartions is
	exceeded or |g(xi)-xi| < epsilon where xi is the value of
	x0 after i iterations.
*/
double fixed(double x0, double epsilon, int iterations);
#endif
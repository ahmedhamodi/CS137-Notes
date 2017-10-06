#include <stdio.h>
#include <assert.h>

double horner(double p[], int n, double x) {
	assert(n > 0);
	double y = p[n-1];
	
	for (int i=n-2; i >= 0; i--) {
		y = y*x + p[i];
	}

	return y;
}

int main(void) {
	double p[] = {2, 9, 4, 3};
	int len = sizeof(p)/sizeof(p[0]);
	printf("2 = %g\n", horner(p,len,0));
	printf("18 = %g\n", horner(p,len,1));
	printf("60 = %g\n", horner(p,len,2));
	printf("-6 = %g\n", horner(p,len,-1));
}
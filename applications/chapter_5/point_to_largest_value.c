#include <stdio.h>

int * largest(int a[], int n) {
	int *ans;
	if (n < 0) return (int *)0;

	ans = a;
	for (int *p = a; p < a+n; p++) {
		if (*p > *ans) ans = p;
		// printf("%d\n", *ans);
	}

	return ans;
}

int main(void) {
	int a[5] = {2, 17, 3, 5, 9};
	int *p = largest(a, 5);
	printf("largest: %d\n", *p);
}
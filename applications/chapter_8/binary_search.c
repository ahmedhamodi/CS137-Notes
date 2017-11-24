#include <stdio.h>

int search (int a[], int n, int value) {
	int lo = 0, hi = n-1;
	while (hi >= lo) {
		int m = lo + (hi-lo)/2; //watch out for overflow: (hi+lo)/2;
		if (a[m] == value) return m;
		else if (a[m] > value) hi = m-1;
		else lo = m+1;
	}
	return -1;
}

int main(void) {
	int a[] = {-10, -7, 0, 2, 11, 14, 38, 42};
	const int n = sizeof(a) / sizeof(a[0]);
	printf("%d\n", search(a, n, 10)); //-1
	printf("%d\n", search(a, n, 11)); //4
	printf("%d\n", search(a, n, 100)); //-1
	return 0;
}
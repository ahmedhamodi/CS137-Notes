#include <stdio.h>

void insertion_sort (int *a, int n) {
	int i, j, x;
	for (i = 1; i < n; i++) {
		x = a[i];
		for (j = i; j > 0 && x < a[j-1]; j--) {
			a[j] = a[j-1];
		}
		a[j] = x;
	}
}

int main(void) {
	int a[6] = {-100, 100, 5, 5, -25, 30};
	insertion_sort(a, 6);
	for (int i=0; i<6; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}
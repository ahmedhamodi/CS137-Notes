#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void quick_sort(int a[], int n) {
	if (n<=1) return;
	int m = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[0]) {
			m++;
			swap(&a[m], &a[i]);
		}
	}
	//switch pivot and m index
	swap(&a[0], &a[m]);
	// for (int i = 0; i < n; i++) {
	// 	printf("%d, ", a[i]);
	// }
	// printf("\n");
	quick_sort(a, m);
	quick_sort(a+m+1, n-m-1);
}

int main(void) {
	int a[] = {4, 9, 6, 1, 3, 5, 7};
	const int n = sizeof(a) / sizeof(int);
	quick_sort(a,n);
	for (int i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
}
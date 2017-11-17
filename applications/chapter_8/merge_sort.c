#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void merge_sort(int a[], int t[], int n) {
	if (n <= 1) return;
	int middle = (n+1) / 2;
	int *lower = a;
	int *upper = a + middle;
	merge_sort(lower, t, middle);
	merge_sort(upper, t, n - middle);
	int i = 0; //lower index
	int j = middle; //upper index
	int k = 0; //temp index
	while (i < middle && j < n) {
		if (a[i] <= a[j]) t[k++] = a[i++];
		else t[k++] = a[j++];
	}
	while (i < middle) t[k++] = a[i++];
	while (j < n) t[k++] = a[j++];
	for (i = 0; i < n; i++) a[i] = t[i];
}

void sort(int a[], int n) {
	int *t = malloc(n*sizeof(a[0]));
	assert(t);
	merge_sort(a, t, n);
	free(t);
}

int main(void) {
	int a[] = {-10, 2, 14, -7, 11, 38};
	//expected output = -10, -7, 2, 11, 14, 38
	int n = sizeof(a) / sizeof(int);
	sort(a, n);
	for (int i = 0; i < n-1; i++) {
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n-1]);
	return 0;
}
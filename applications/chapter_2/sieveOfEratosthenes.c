#include <stdio.h>
#include <assert.h>

void sieve(int a[], int n);

int main(void) {
	int n = 20;
	// scanf("%d", &n);
	assert (n>0);
	int a[n+1];
	sieve(a, n+1);
	for (int i = 0; i < n+1; i++) {
		if (a[i] == 1) printf("%d\n", i);
	}
	// printf("%p\n", a); //prints the memory location of the array, a.
	return 0;
}

void sieve(int a[], int n) {
	a[0] = 0;
	if (n==1) return;
	a[1] = 0;
	if (n==2) return;

	for (int i = 2; i < n; i++) {
		a[i] = 1;
	}

	for (int i = 2; i*i < n; i++) {
		if (a[i] == 1) {
			for (int j = 2*i; j < n; j += i) {
				a[j] = 0;
			}
		}
	}
	return;
}
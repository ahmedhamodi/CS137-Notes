#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int *numbers (int n) {
	int *p = malloc(n * sizeof(int));
	assert(p); //verify that malloc succeeded
	for (int i = 0; i < n; i++) {
		p[i] = i;
	}
	return p;
}

int main (void) {
	int *q = numbers(100);
	printf("%d\n", q[50]);
	free(q); //avoid memory leak
	q = NULL; //guards against double deletes
	return 0;
}
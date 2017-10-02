#include <stdio.h>
#include <assert.h>

int recursiveMult(int a, int b) {
	if (b == 1) return a;
	return a + recursiveMult(a, b-1);
}

int main (void) {
	int a, b, result;
	scanf("%d%d", &a,&b);
	assert (a>0 && b>0);
	result = recursiveMult(a, b);

	printf("%d\n", result);
}
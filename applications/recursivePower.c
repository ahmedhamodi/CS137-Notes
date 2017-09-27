#include <stdio.h>
#include <stdlib.h>

int power(int b, int n) {
	if (n == 0) return 1;
	return b*power(b,n-1);
}

int main(void) {
	int pow = power(2, 5);
	printf("%d\n", pow);
	return 0;
}
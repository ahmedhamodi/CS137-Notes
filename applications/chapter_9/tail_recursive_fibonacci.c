#include <stdio.h>

int fib_tr(int prev, int cur, int n) {
	if (n==0) return cur;
	return fib_tr(cur, prev+cur, n-1);
}

int fib(int n) {
	if (n==0) return 0;
	return fib_tr(0, 1, n-1);
}

int main(void) {
	printf("%d\n", fib(10)); //55
	printf("%d\n", fib(5)); //5
	printf("%d\n", fib(3)); //2
	return 0;
}
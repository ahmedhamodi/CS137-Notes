#include <stdio.h>

int fib(int n) {
	if (n==0) return 0;
	if (n==1) return 1;
	return (fib(n-1)+fib(n-2));
}

int main(void) {
	printf("%d\n", fib(10)); //55
	printf("%d\n", fib(5)); //5
	printf("%d\n", fib(3)); //2
	return 0;
}
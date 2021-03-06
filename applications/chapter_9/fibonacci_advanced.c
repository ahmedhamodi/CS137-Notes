#include <stdio.h>

int fib(int n) {
	if (n==0) return 0;
	int prev = 0, cur = 1;
	for (int i = 1; i < n; i++) {
		int next = prev + cur;
		prev = cur;
		cur = next;
	}
	return cur;
}

int main(void) {
	printf("%d\n", fib(10)); //55
	printf("%d\n", fib(5)); //5
	printf("%d\n", fib(3)); //2
	return 0;
}
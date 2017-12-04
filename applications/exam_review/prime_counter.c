#include <stdio.h>

int is_prime(int n) {
	if (n < 2) return 0;
	if (n == 2) return 1;
	for (int i = 2; i*i <= n; i++) { //i*i <= n EQUALS i <= sqrt(n)
		if (n % i == 0) return 0;
	}
	return 1;
}

int pi(double number) {
	int num = (int)number;
	int numPrimes = 0;
	for (int i = 1; i <= num; i++) {
		if (is_prime(i) == 1) {
			// printf("test");
			numPrimes ++;
		}
	}
	return numPrimes;
}

int main(void) {
	printf("%d\n", pi(100.5)); //25
	printf("%d\n", pi(97)); //25
	printf("%d\n", pi(3.14)); //2 -- 2, 3
	printf("%d\n", pi(15)); //6 -- 2, 3, 5, 7, 11, 13
	return 0;
}
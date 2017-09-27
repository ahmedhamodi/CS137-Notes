#include <stdio.h>
#include <stdlib.h>

int find_gcd(int n1, int n2) {
	if (n2==0) return abs(n1);
	return find_gcd(n2, abs(n1)%n2);
}

int main(void) {
	int gcd = find_gcd(1920, 1080);
	printf("%d\n", gcd);
	return 0;
}
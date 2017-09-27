#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int aNum, bNum;
	printf("Enter first number: ");
	scanf("%d", &aNum);
	printf("Enter second number: ");
	scanf("%d", &bNum);

	int a = aNum;
	int b = bNum;
	int rem = a % b;

	while (rem) { //while (rem) equals while (rem != 0)
		a = b;
		b = rem;
		rem = a % b;
	}

	int ans = b;

	printf("The gcd of %d and %d is %d\n", aNum, bNum, ans);

	return EXIT_SUCCESS;
}
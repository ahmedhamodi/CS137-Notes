#include <stdio.h>

int main(void) {
	int a[8] = {2,3,4,5,6,7,8,9};
	int *p, *q, i;

	// int b = 2;
	// printf("%lu\n%lu\n", sizeof(a[1]), sizeof(a));

	p = &(a[2]);   // p points to a[2]
	q = p + 3;     // q points to a[5]
	p += 4;        // p points to a[6]
	q = q - 2;     // q points to a[3]
	i = q - p;     // i = 2
	i = p - q;     // i = -2

	if (p <= q) printf("less\n");
	else printf("more\n"); //printed
	
	return 0;
}
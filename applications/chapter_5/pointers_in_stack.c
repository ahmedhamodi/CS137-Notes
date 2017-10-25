#include <stdio.h>

int main(void) {
	int i = 6;
	int *p;
	p = &i;
	*p = 10;
	printf("%d \n", i);

	int *q;
	q = p;
	*q = 17;
	printf("%d \n", i);
	printf("%p \n", p);
	printf("%p \n", q);
	return 0;
}
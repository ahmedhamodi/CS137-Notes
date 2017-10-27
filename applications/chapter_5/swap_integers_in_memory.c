#include <stdio.h>

// void swap(int *a, int *b) {
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// int main(void) {
// 	int a = 5;
// 	int b = 9;
	
// 	swap(&a, &b);

// 	printf("a: %d\n", a);
// 	printf("b: %d\n", b);
// 	return 0;
// }

//advanced version - no extra variable needed.
int main(void) {
	int x = 5;
	int y = 9;
	x ^= y;
	y ^= x;
	x ^= y;
	printf("x: %d\n", x);
	printf("y: %d\n", y);
	return 0;	
}
#include <stdio.h>

int lin_search(int a[0], int n, int value) {
	for (int i = 0; i < n; i++) {
		if (a[i] == value) return i;
	}
	return -1;
}

int main(void) {
	int a[5] = {19, 4, 2, 3, 6};
	int len = sizeof(a) / sizeof(a[0]);
	int val = lin_search(a, len, 4);
	printf("index: %d\n", val);
	val = lin_search(a, len, 6);
	printf("index: %d\n", val);
	val = lin_search(a, len, 7);
	printf("index: %d\n", val);
	return 0;
}
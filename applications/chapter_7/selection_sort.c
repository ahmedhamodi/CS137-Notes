#include <stdio.h>

//logic: find minimum element, swap location, and repeat
void selection_sort(int a[], int n) {
	int min = -1;
	for (int i=0; i < n-1; i++) {
		min = i;
		for (int j=i+1; j<n; j++) {
			if (a[j] < a[min]) min = j;
		}
		//swap
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

int main(void) {
	int a[6] = {-100, 100, 5, 5, -25, 30};
	selection_sort(a, 6);
	for (int i=0; i<6; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}
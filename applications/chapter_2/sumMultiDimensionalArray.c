#include <stdio.h>

int sumMulti(int a[4][3]);

int main(void) {
	int matrix[4][3] = {{0,1,2}, {10,11,12}, {20,21,22}, {30,31,32}};
	printf("%d\n", sumMulti(matrix));
	return 0;
}

int sumMulti(int a[4][3]) {
	int sum = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			sum += a[i][j];
		}
	}
	return sum;
}
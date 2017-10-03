#include <stdio.h>

int main(void) {
	//initializing
	int row = 5;
	int col = 5;
	int matrix[row][col];

	//filling
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			matrix[i][j] = i + j;
		}
	}

	//print
	for (int i = 0; i < row; ++i) {
		printf("|");
		for (int j = 0; j < col; ++j) {
			printf("%3d ", matrix[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("\n");

	//using
	for (int i = 1; i < row; ++i) {
		for (int j = 1; j < col; ++j) {
			matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];
		}
	}

	//print
	for (int i = 0; i < row; ++i) {
		printf("|");
		for (int j = 0; j < col; ++j) {
			printf("%3d ", matrix[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("\n");

	return 0;
}
#include <stdio.h>

// int count(int num, int curNum, int values[], int curIndex, int sum, int numInts) {
// 	if (curNum == num) return 1;
// 	if (curNum < num) return 0;

// 	for (int i = 0; i < numInts; i++) {
// 		sum += count(num, curNum+values[curIndex], values[], curIndex+i);
// 	}
// 	return sum;
// }

int counting_change(int values[], int num, int numInts) {
	if (num == 0) return 1;
	if (num < 0) return 0;
	if (numInts==0) return 0;
	return counting_change(values, num-values[numInts-1], numInts) + counting_change(values, num, numInts-1);
}

int main(void) {
	int values[] = {5, 10, 15};
	int num = 20;
	int numInts = 3;
	printf("numways: %d\n", counting_change(values, num, numInts));
	num = 200;
	printf("numways: %d\n", counting_change(values, num, numInts));
}
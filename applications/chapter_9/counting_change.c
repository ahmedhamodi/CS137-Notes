#include <stdio.h>

int count(int num, int curNum, int values[], int curIndex, int sum, int numInts) {
	if (curNum == num) return 1;
	if (curNum > num) return 0;
	for (int i = 0; i < numInts; i++) {
		sum += count(num, curNum+values[curIndex], values[], curIndex+i);
	}
	return sum;
}

int counting_change(int values[], int num, int numInts) {
	int sum = count(num, values[0], values[], 0, 0, numInts);
	return sum;
}

int main(void) {
	int values[] = {5, 10, 15};
	int num = 20;
	int numInts = 3;
	printf("numways: %d\n", counting_change(values[], num, numInts));
}
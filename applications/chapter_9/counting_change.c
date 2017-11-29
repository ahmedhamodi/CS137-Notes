#include <stdio.h>

int values[10001][7];

int counting_change(int coins[], int amount, int n) {
	if (amount == 0) return 1;
	if (amount < 0) return 0;
	if (n == 0) return 0;
	if (values[amount][n] != -1) return values[amount][n];
	values[amount][n] = counting_change(coins, amount-coins[n-1], n) + counting_change(coins, amount, n-1);
	return values[amount][n];
}

int main(void) {
	for (int i=0; i<10001; i++) {
		for (int j=0; j<7; j++) {
			values[i][j] = -1;
		}
	}
	int coins[] = {1, 5, 10, 25, 100, 200};
	int num = 20;
	int numInts = 6;
	printf("numways: %d\n", counting_change(coins, num, numInts));
	num = 200;
	printf("numways: %d\n", counting_change(coins, num, numInts));
	num = 10000;
	printf("numways: %d\n", counting_change(coins, num, numInts));
}
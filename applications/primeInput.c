#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n < 2) {
		printf("Not Prime\n");
	} else if (n==2) {
		printf("Prime\n");
	} else {
		char flag = 0;
		for (int i = 2; i*i <= n; i++) { //i*i <= n EQUALS i <= sqrt(n)
			if (n % i == 0 && flag == 0) {
				flag = 1;
				printf("Not Prime\n");
			}
		}
		if (flag == 0) {
			printf("Prime\n");
		}
	}
	return 0;
}
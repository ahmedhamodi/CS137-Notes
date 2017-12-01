#include <stdio.h>
#include <stdbool.h>

int is_numeric(char* num) {
	for (; *num; num++) {
		// printf("%d\n", num[i]);
		if (*num < '0' || *num > '9') {
			return false;
		}
	}
	return true;
}

int main(void) {
	printf("%d\n", is_numeric("19")); //1
	printf("%d\n", is_numeric("19351451")); //1
	printf("%d\n", is_numeric("115151359a")); //0
	printf("%d\n", is_numeric("1asfkahera")); //0
}
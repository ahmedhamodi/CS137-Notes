#include <stdio.h>

int count(char *s, char c) {
	int counter = 0;
	// for (int i=0; s[i] != '\0'; i++) {
	// 	if(s[i] == c) {
	// 		counter += 1;
	// 	}
	// }

	//OR
	for (; *s; s++) {
		if (*s == c) {
			counter ++;
		}
	}
	return counter;
}

int main(void) {
	char *hi = "Hello world!";
	printf("%d\n", count(hi, 'l')); // 3
	printf("%d\n", count(hi, 'z')); // 0
	printf("%d\n", count(hi, 'L')); // 0
}
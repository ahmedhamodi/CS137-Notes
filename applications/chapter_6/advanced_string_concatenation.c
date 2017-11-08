#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(const char *s0, const char *s1) {
	int length = strlen(s0) + strlen(s1) + 1;
	char *temp = malloc(length * sizeof(char));
	strcpy(temp, s0);
	strcat(temp, " ");
	strcat(temp, s1);
	return temp;
}

//keeps a and b, while still concatenating the string into another string
int main(void) {
	char a[100] = "hello";
	char b[100] = "world";
	char *hi = concat(a, b);
	printf("%s\n", hi);
	free(hi);
	return 0;
}
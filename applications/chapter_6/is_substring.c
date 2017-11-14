#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_substring(char *s, char*t) {
	//check for null pointer and empty strings

	int slen = strlen(s);
	int tlen = strlen(t);
	if (slen > tlen) return false;
	for (int i = 0; i < tlen; i++) {
		if (t[i] == s[0]) {
			for (int j = i; j < slen+i; j++) {
				if (j-i == slen-1) {
					if (t[j] == s[j-i]) return true;
				}
				if (j >= tlen) return false;
				if (t[j] != s[j-i]) break;
			}
		}
	}
	return false;
}

int main (void) {
	printf("%d\n", is_substring("ring", "string"));
	printf("%d\n", is_substring("ringg", "string"));
	printf("%d\n", is_substring("ding", "string"));
	return 0;
}
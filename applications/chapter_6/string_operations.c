#include <stdio.h>
#include <string.h>

int main(void) {
	char s[10] = "apples";
	char t[] = " to monkeys ";
	char u[10];
	strcpy(u, s);
	strncat(s, t, 4);
	strcat(s, u);
	printf("%s\n", s);
	int comp = strcmp("abc", "azenew");
	//Remember if s0 < s1 <--> comp < 0
	if (comp < 0) printf("value is %d\n", comp);
	comp = strcmp("ZZZ", "a");
	if (comp < 0) printf("value is %d\n", comp);	
}
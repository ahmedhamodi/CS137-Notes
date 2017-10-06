#include <stdio.h>

struct tod {
	int hours;
	int minutes;
};

void todPrint (struct tod when) {
	printf("%2.2d:%2.2d\n", when.hours, when.minutes);
}

int main(void) {
	struct tod now = {16, 50};
	struct tod later = {.hours = 18};
	later.minutes = 1;
	todPrint(later);
	todPrint(now);
	return 0;
}
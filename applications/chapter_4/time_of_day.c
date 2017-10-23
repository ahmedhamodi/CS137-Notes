#include <stdio.h>

struct tod {
	int hours;
	int minutes;
};

struct tod todAddTime(struct tod when, int hours, int minutes) {
	when.hours = (when.hours + (hours+((minutes+when.minutes)/60))) % 24;
	when.minutes = when.minutes + ((minutes+when.minutes)%60);
	return when;
};

void todPrint (struct tod when) {
	// when.minutes = 34; //modifying here does not effect values in main
	printf("%0.2d:%0.2d\n", when.hours, when.minutes);
}

int main(void) {
	struct tod when = {0};
	// struct tod later = {.hours = 18};
	// later.minutes = 1;
	// todPrint(later);
	todPrint(todAddTime(when,5,138));
	return 0;
}
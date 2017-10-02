#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool is_leap_year(int year) {
	assert(year > 1752);
	if (year % 400 == 0) return true;
	if (year % 100 == 0) return false;
	if (year % 4 == 0) return true;
	return false;
}

int main(void) {
	int year = 1908;
	printf("%d\n", is_leap_year(year));
	return 0;
}
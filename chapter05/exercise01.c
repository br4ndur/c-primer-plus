#include <stdio.h>

int main(void)
{
	const int MIN_PER_HOUR = 60;
	const char* STR = "Please enter the amount of minutes:";
	int minutes, hours;

	printf("%s", STR);
	while ((scanf("%d", &minutes) == 1) && minutes>0) {
		hours = minutes / MIN_PER_HOUR;
		minutes = minutes % MIN_PER_HOUR;
		printf("That equals %d hours and %d minutes\n\n", hours, minutes);
		printf("%s", STR);
	}

	return 0;
}

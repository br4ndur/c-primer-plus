#include <stdio.h>

int main(void)
{
	const int DAYS_PER_WEEK = 7;
	const char* STR = "Please enter days:";
	int input, days, weeks;

	printf("%s", STR);
	while ((scanf("%d", &input) == 1) && input>0) {
		weeks = input / DAYS_PER_WEEK;
		days = input % DAYS_PER_WEEK;
		printf("%d days are %d weeks, %d days\n\n", input, weeks, days);
		printf("%s", STR);
	}

	return 0;
}

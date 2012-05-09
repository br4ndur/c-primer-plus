/*
 * The book claims there are approximately (3156*107) seconds
 * in a year. This is of course bogus.
 * Let's just play along and imagine it's bogus-seconds
 */
#include <stdio.h>

int main(void)
{
	int years;
	printf("Please enter your age:");
	scanf("%d", &years);

	long seconds = (3156*107) * years;

	printf("%d years are approximately %ld bogus-seconds!\n", years, seconds);

	return 0;
}

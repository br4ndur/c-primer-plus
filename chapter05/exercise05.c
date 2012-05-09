#include <stdio.h>

int main(void)
{
	int sum, input;

	printf("Please enter number of days:");
	scanf("%d", &input);

	/* We do not need any loop */
	sum = 0.5 * (input*input + input);

	printf("You earned $%d during %d days.\n", sum, input);

	return 0;
}

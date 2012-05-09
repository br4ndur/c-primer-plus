#include <stdio.h>

int main(void)
{
	int input, sum;

	printf("Please enter number of days:");
	scanf("%d", &input);

	/* We still do not need any loop */
	sum = (2*input*input*input + 3*input*input + input) / 6;

	printf("You earned $%d during %d days.\n", sum, input);

	return 0;
}

#include <stdio.h>

int main(void)
{
	const int start = 'A';
	const int end = 'Z';
	const char seperator = ' ';
	char input;
	int row, i;

	printf("Please enter an english uppercase letter:");

	/* Request and check input. */
	if ((scanf("%c", &input) == 1) && (input >= start) && (input <= end)) {
		int letter_n = input - start;

		/* For ever row */
		for (row = 0; row <= letter_n; row++) {
			/* Insert seperator */
			for (i = row; i < letter_n; i++)
				printf("%c", seperator);

			/* Insert ascending order */
			for (i = 0;i <= row; i++)
				printf("%c", (start + i));

			/* Insert descending order */
			for (i = 0; i < row; i++)
				printf("%c", (start + row - (i+1)));

			printf("\n");
		}
	}

	return 0;
}

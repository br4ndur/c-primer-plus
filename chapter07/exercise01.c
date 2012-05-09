#include <stdio.h>

int main(void)
{
	const char STOP = '#';
	char c;
	int spaces, lines, other;
	spaces = lines = other = 0;

	/* Yes, you'll have to press # and enter */
	while ((c = getchar()) != STOP) {
		if (c == ' ')
			spaces++;
		else if (c == '\n')
			lines++;
		else
			other++;
        }

	printf("\nSpace characters:\t%d\nLins characters:\t%d\nOther characters:\t%d\n", spaces, lines, other);

	return 0;
}

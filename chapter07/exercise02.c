#include <stdio.h>

int main(void)
{
	const char STOP = '#';
	char c;
	int i = 0;

	while ((c = getchar()) != STOP) {

		if (c == '\n') {
			printf("newline(%d)\n", c);
			i = 0;
			continue;
		} else {
			printf("\"%c\"(%d) ", c, c);
		}

		if (++i % 8 == 0)
			printf("\n");
	}

	return 0;
}

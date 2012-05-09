/*
 * The exercise says "Redo exercise 3 using a switch", which doesn't make any
 * sense. I'll assume it mixed up exercise 3 with 4.
 */
#include <stdio.h>

int main(void)
{
	const char STOP = '#';
	char c;
	int i = 0;

	printf("Write something with a \".\" or a \"!\", exit with \"#\" followed by a new line:\n");
	while ((c = getchar()) != STOP) {

		switch(c) {
		case '.':
			c = '!';
			i++;
			break;
		case '!':
			putchar(c);
			i++;
		}
		putchar(c);

	}

	printf("Replaced all \".\" and \"!\" %d times.\n", i);

	return 0;
}

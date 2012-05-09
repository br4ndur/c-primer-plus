#include <stdio.h>

int main(void)
{
	const char STOP = '#';
	char c;
	int i = 0;

	printf("Write something with a \".\" or a \"!\", exit with \"#\" followed by a new line:\n");
	while ((c = getchar()) != STOP) {

		if (c == '.') {
			c = '!';
			i++;
		} else if( c == '!') {
			putchar(c);
			i++;
		}

		putchar(c);
	}

	printf("Replaced all \".\" and \"!\" %d times.\n", i);

	return 0;
}

#include <stdio.h>

int char_to_pos(char c);

int main(void)
{
	int pos;
	char c;

	while ((c = getchar()) != EOF) {
		if ((pos = char_to_pos(c)) > 0)
			printf("%c: %d\n", c, pos);
	}
	puts("Bye\n");

	return 0;
}


int char_to_pos(char c)
{
	if(c > 64 && c < 91)
		return c - 64;
	else if(c > 96 && c < 123)
		return c - 96;
	else
		return -1;
}

#include <stdio.h>

void block(char, int, int);

int main(void)
{
	puts("Using the function:");
	block('#', 19, 4);
	return 0;
}

void block(char ch, int cols, int rows)
{
	int i, j;
	for(i = j = 0; i < rows; ++i, j = 0) {
		while(j++ < cols)
			putchar(ch);
		putchar('\n');
	}
}

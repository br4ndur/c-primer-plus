#include <stdio.h>

int main(void)
{
	const int rows = 5;
	const char symbol = '$';
	int i, j;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < (i+1); j++)
			printf("%c", symbol);
		printf("\n");
	}

	return 0;
}

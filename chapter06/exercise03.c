#include <stdio.h>

int main(void)
{
	const char letters[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const int start = 5;
	int i, j;

	for (i = 0; i <= start; i++) {
		for (j = start; j >= (start - i); j--) {
			printf("%c", letters[j]);
		}
		printf("\n");
	}

	return 0;
}

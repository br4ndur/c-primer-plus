#include <stdio.h>

int main(void)
{
	int i = 0;

	while (getchar() != EOF)
		i++;

	printf("Number of characters: %d\n", i);
	return 0;
}

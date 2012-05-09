#include <stdio.h>

int main(void)
{
	const int start = 'a';
	const int amount = 26;
	char letters[amount];
	int i;

	for (i = 0; i < amount; i++) {
		letters[i] = start + i;
		printf("letters[%d] = %c\n",i , letters[i]);
	}

	return 0;
}

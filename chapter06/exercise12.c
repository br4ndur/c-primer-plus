#include <stdio.h>

int main(void)
{
	const int AMOUNT = 8;
	int i, tmp, arr[AMOUNT];

	for (i = 0, tmp = 1; i < AMOUNT; i++,tmp *= 2)
		arr[i] = tmp;

	i=0;
	do {
		printf("2^%d = %d\n", i, arr[i] );
	} while (++i < AMOUNT);

	return 0;
}

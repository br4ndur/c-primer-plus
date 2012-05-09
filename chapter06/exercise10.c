#include <stdio.h>

int main(void)
{
	const int AMOUNT = 8;
	int i, arr[AMOUNT];

	printf("Input %d integers\n", AMOUNT);
	for (i = 0; i < AMOUNT; i++) {
		printf("Integer %d: ", (i + 1));
		if(scanf("%d", &arr[i]) != 1) return 0;
	}

	printf("\nThe reverse order is:\n");

	for (i = AMOUNT; i > 0; i--)
		printf("Integer %d: %d\n", i, arr[i-1]);

	return 0;
}

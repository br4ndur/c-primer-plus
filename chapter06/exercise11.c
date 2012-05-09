#include <stdio.h>

int main(void)
{
	int i, j, limit;
	float res1, res2;

	printf("Please enter a limit:");
	if(scanf("%d", &limit) != 1) return 0;

	res1 = res2 = 0;
	for (i = j = 1; i <= limit; i++, j *= -1) {
		res1 += (float) 1 / i;
		res2 += (float) j / i;
	}

	printf("1. serie: %f\n2. serie: %f\n", res1, res2);

	return 0;
}

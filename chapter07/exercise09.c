#include <stdio.h>

int main(void)
{
	unsigned int n, i, j;
	int is_prime;

	printf("Please enter an integer:");

	if (scanf("%u", &n) != 1)
		return 0;

	for (i = 2; i <= n; i++) {

		is_prime=1;
		for (j = 2; (j * j) <= i; j++) {
			if(i % j == 0) {
				is_prime=0;
				break;
			}
		}

		if(is_prime)
			printf("%u\n", i);
	}

	return 0;
}

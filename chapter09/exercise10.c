#include <stdio.h>

long long unsigned int fibonacci(unsigned int);

int main(void)
{
	unsigned int n = 8;
	printf("fibonacci(%u) = %llu\n", n, fibonacci(n));

	return 0;
}

long long unsigned int fibonacci(unsigned int n)
{
	long long unsigned int tmp, last_number, curr_number;
	int i;
	last_number = 0;
	for(i = curr_number = 1; i < n; ++i) {
		tmp = curr_number;
		curr_number += last_number;
		last_number = tmp;
	}
	return curr_number;
}

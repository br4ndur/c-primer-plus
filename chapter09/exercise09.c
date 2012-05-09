#include <stdio.h>

void to_base(unsigned long, unsigned int);

int main(void)
{
	unsigned long long int number = 129;
	unsigned int base = 8;

	printf("%llu in base %u is equal ", number, base);
	to_base(number, base);

	putchar('\n');
	return 0;
}

void to_base(unsigned long n, unsigned int base)
{
	int r;
	r = n % base;
	if (n > 0) {
		if (n > 1)
			to_base(n / base, base);
		putchar('0' + r);
	}
}

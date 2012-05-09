#include <stdio.h>

int main(void)
{
	const int WITHDRAW = 100000;
	const int RATE = 8;
	int years = 0;

	float balance = 1000000;
	while (balance >= 0) {
		balance *= (1 + ((float)RATE / 100));
		balance -= WITHDRAW;
		years++;
	}
	printf("In the end of the %d years, Chucky Lucky could only withdraw: $%.2f\n ", years, balance + WITHDRAW);

	return 0;
}

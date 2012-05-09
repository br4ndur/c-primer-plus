#include <stdio.h>

int main(void)
{
	const int START = 100;
	const int RATE1 = 10;
	const int RATE2 = 5;
	float sum1, sum2;
	int years = 0;

	sum1 = sum2 = START;
	while (sum1>=sum2) {
		sum1 += START * ((float)RATE1 / 100);
		sum2 *= (1 + ((float)RATE2 / 100));
		years++;
	}
	/*
	 * for (sum1 = sum2 = START; sum1>=sum2; years++) {
	 * 	sum1 += START * ((float)RATE1 / 100);
	 * 	sum2 *= (1 + ((float)RATE2 / 100));
	 * }
	 */

	printf("Deirdre's investment to exceed the value of Daphne's investment after %d years.\n", years);
	printf("Daphne's value:  %f\nDeirdre's value: %f\n", sum1, sum2);
	return 0;
}

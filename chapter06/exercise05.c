#include <stdio.h>

int main(void)
{
	double lower, upper, tmp;
	_Bool valid=1; /* c99 */

	printf("Please enter a lower limit:");
	valid &= (scanf("%lf'", &lower) == 1);

	printf("Please enter an upper limit:");
	valid &= (scanf("%lf", &upper) == 1);

	if (valid) {
		/* Preferred: while(lower++ <= upper) */
		for (tmp = lower;tmp<=upper; tmp++) {

			printf("%10.1lf\t%10.1lf\t %10.1lf\n", tmp, tmp*tmp, tmp*tmp*tmp);
		}
	}

	return 0;
}

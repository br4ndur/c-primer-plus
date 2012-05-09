#include <stdio.h>

void larger_of(double*, double*);

int main(void)
{
	double x = 2, y = 3;

	printf("Before: %.2lf %.2lf.\n", x, y);
	larger_of(&x, &y);
	printf("After: %.2lf %.2lf.\n", x, y);

	return 0;
}

void larger_of(double *x, double *y)
{
	if (*x < *y)
		*x = *y;
	else
		*y = *x;
}

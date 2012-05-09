#include <stdio.h>

double harmonic(double, double);

int main(void)
{
	double a = 2.0, b = 3.0;
	printf("Take %.2lf and %.2lf.\nReturn %.2lf.\n", a, b, harmonic(a, b));

	return 0;
}

double harmonic(double a, double b)
{
	return (2 * a * b) / (a + b);
}

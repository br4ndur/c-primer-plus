#include <stdio.h>
#include <stdlib.h>

double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp;

	puts("Enter a number and the integer power to which\n");
	puts("the number will be raised. Enter q to quit.\n");

	while (scanf("%lf%d", &x, &exp) == 2) {
		xpow = power(x,exp);   // function call
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	if(n == 0)
		return 0;
	else if(p == 0)
		return 1;

	if(abs(p) > 1)
		n *= power(n, abs(p)-1);

	if(p < 0)
		return 1/n;
	else
		return n;
}

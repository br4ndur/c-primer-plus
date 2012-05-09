#include <stdio.h>

double min(double, double);

int main(void)
{
	double num1 = 5.9;
	double num2 = 6.0;
	printf("Of the numbers %.2f and %.2f, the minimum value is %.2f\n",
		num1, num2 ,min(num1,num2));

	return 0;
}

double min(double n,double m)
{
	return (n < m) ? n : m;
}

#include <stdio.h>

void Temperatures(double n);

int main(void)
{
	const char* STR = "Please enter a Fahrenheit temperature:";
	double input;

	printf("%s", STR);
	while ((scanf("%lf", &input) == 1)) {
		Temperatures(input);
		printf("%s", STR);
	}

	return 0;
}

void Temperatures(double n)
{
	/*
	 * Looks a little awkward,
	 * but this was how I understood the assignment
	 */
	const double fahrenheit = n;
	const double celsius = (1.8 * fahrenheit) + 32.0;
	const double kelvin = celsius + 273.16;

	printf("Fahrenheit:%.2lf\n", fahrenheit);
	printf("Celsius:   %.2lf\n", celsius);
	printf("Kelvin:    %.2lf\n", kelvin);
}

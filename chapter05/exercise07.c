#include <stdio.h>

float cubed(float n);

int main(void)
{
	float input;

	printf("Please enter a number:");
	scanf("%f", &input);

	printf("%f to the third power is %f\n", input, cubed(input));

	return 0;
}

float cubed(float n)
{
	return n*n*n;
}

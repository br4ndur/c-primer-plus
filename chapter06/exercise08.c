#include <stdio.h>

float result(float input1, float input2);

int main(void)
{
	float input1, input2;

	printf("Please enter two floating-point numbers:");
	while (scanf("%f %f", &input1, &input2) == 2) {
		printf("The result is: %f\n", result(input1, input2));
		printf("Please enter two floating-point numbers:");
	}
	return 0;
}

float result(float input1, float input2)
{
	float diff = ((input1 > input2) ? (input1 - input2) : (input2 - input1));
	return diff / (input1 * input2);
}

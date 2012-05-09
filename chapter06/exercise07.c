#include <stdio.h>

int main(void)
{
	float input1, input2, result;

	printf("Please enter two floating-point numbers:");
	while (scanf("%f %f", &input1, &input2) == 2) {
		result = ((input1 > input2) ? (input1 - input2) : (input2 - input1));
		result /= (input1 * input2);
		printf("The result is: %f\n", result);
		printf("Please enter two floating-point numbers:");
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	float tall;
	printf("Please enter how tall you are in centimeters:");
	scanf("%f", &tall);

	/* Converting from cm to inches */
	tall /= 2.54;

	printf("You're %.2f inches tall!\n", tall);

	return 0;
}

#include <stdio.h>

int main(void)
{
	const float CM_PER_INCH = 2.54;
	const int INCH_PER_FEET = 12;
	float inch, cm;
	int feet;

	printf("Enter a height in centimeters:");
	while ((scanf("%f", &cm) == 1) && cm>0) {
		inch = cm / CM_PER_INCH;
		feet = inch / INCH_PER_FEET;
		inch -= feet * INCH_PER_FEET;

		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit):");
	}
	printf("bye\n");

	return 0;
}

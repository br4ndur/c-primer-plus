#include <stdio.h>
#include <float.h>

int main(void)
{
	double varD = 1.0/3.0;
	float varF = 1.0/3.0;

	printf("Doulbe:\nFour digits:\t%.4f\nTwelve digits:\t%.12f\nSixteen digits:\t%.16f\n\n", varD, varD, varD);
	printf("Float:\nFour digits:\t%.4f\nTwelve digits:\t%.12f\nSixteen digits:\t%.16f\n\n", varF, varF, varF);

	printf("Double digits:\t%d\n", DBL_DIG);
	printf("Float digits:\t%d\n", FLT_DIG);

	/* Yes, the displayed values are consistent with the output */

	return 0;
}

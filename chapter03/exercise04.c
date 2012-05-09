#include <stdio.h>

int main(void)
{
	float floatnr;
	printf("Insert a floating number:");
	scanf("%f", &floatnr);

	//print it
	printf("The input is %f or %e.\n", floatnr, floatnr);

	return 0;
}

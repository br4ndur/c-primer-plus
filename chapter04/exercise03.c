#include <stdio.h>

int main(void)
{
	float floatnr;
	printf("Insert a floating number:");
	scanf("%f", &floatnr);

	//print it
	printf("The input is %.1f or %.1e.\n", floatnr, floatnr);
	printf("The input is %+.3f or %.3E.\n", floatnr, floatnr);

	return 0;
}

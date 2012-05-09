#include <stdio.h>

int main(void)
{
	char name[50];
	float height;
	printf("Please enter your height in cm and your name.\nExample: \">180 John\"\n>");
	scanf("%f %s", &height, &name[0]);

	//print it
	printf("%s, you are %.3f meters tall.\n", name, height/1000);

	return 0;
}

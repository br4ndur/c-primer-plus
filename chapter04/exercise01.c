#include <stdio.h>

int main(void)
{
	char firstName[50], lastName[50];
	printf("Please enter your firstname and lastname:");
	scanf("%s %s", &firstName[0], &lastName[0]);

	//print it
	printf("%s, %s.\n", lastName, firstName);

	return 0;
}

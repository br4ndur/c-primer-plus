#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstName[50];

	printf("Please ener your first name: ");
	scanf("%s", firstName);

	printf("a. \"%s\"\n", firstName);
	printf("b. \"%20s\"\n", firstName);
	printf("c. \"%-20s\"\n", firstName);
	printf("d. \"%*s\"\n", (int)(strlen(firstName) + 3), firstName);

	return 0;
}

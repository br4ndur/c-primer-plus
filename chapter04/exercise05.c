#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstName[50], lastName[50];
	int firstLen, lastLen;
	printf("Please enter your first name:");
	scanf("%s", &firstName[0]);
	printf("Please enter your last name:");
	scanf("%s", &lastName[0]);

	/* print it */
	firstLen = strlen(firstName);
	lastLen = strlen(lastName);

	/* First output (Beginning of the name) */
	printf("%s %s\n", firstName, lastName);
	printf("%*d %*d\n\n", firstLen, firstLen, lastLen, lastLen);

	/* Second output (End of the name) */
	printf("%s %s\n", firstName, lastName);
	printf("%-*d %-*d\n", firstLen, firstLen, lastLen, lastLen);

	return 0;
}

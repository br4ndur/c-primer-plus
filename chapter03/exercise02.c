#include <stdio.h>

int main(void)
{
	int charcode;

	printf("Enter an ASCII code value:");
	scanf("%d", &charcode);
	printf("ASCII code with value %d equals the char \"%c\"\n", charcode, charcode);
	return 0;
}

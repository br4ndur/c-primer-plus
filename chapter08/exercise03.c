#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	int lower, upper;
	lower = upper = 0;

	while ((c = getchar()) != EOF) {

		if (islower(c))
			lower++;
		else if(isupper(c))
			upper++;
	}

	printf("\nuppercase:%d\nlowercase:%d\n", upper, lower);

	return 0;
}

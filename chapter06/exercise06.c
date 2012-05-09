#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[80];

	printf("Please enter an english word: ");
	if(scanf("%s", input) == 1) {
		printf("The string backwards : ");
		int i;
		for (i = strlen(input)-1; i >= 0; i--) {
			printf("%c", input[i]);
		}
		printf("\n");
	}

	return 0;
}

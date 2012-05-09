#include <stdio.h>

int main(void)
{
	const int SIZE = 255;
	char line[SIZE];
	int letter = 0;

	printf("Write a lines and press enter:\n");
	while (scanf("%c", &line[letter]) == 1) {
		if(line[letter++] == '\n') {
			letter--;
			break;
		}
	}

	while(--letter >= 0)
		printf("%c", line[letter]);

	printf("\n");
	return 0;
}

#include <stdio.h>

int main(void)
{
	char c;
	int i = 0;

	while ((c = getchar()) != EOF) {

		switch (c) {
		case '\n':
			i = 0;
			printf("\\n");
			break;
		case '\t':
			printf("\\t");
			break;
		default:
			if(c < ' ')
				printf("^%c(%d)", (c + 64), c);
			else
				printf("%c(%d)", c, c);
		}

		if (++i > 9) {
			printf("\n");
			i = 0;
		}
	}

	return 0;
}

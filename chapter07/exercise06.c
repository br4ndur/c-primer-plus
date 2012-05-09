#include <stdio.h>

int main(void)
{
	const char STOP = '#';
	char c, last_c;
	int i;
	i = last_c = 0;

	printf("Write something, end with # followed by a new line:\n");
	while ((c = getchar()) != STOP) {

		if(c == 'i' && last_c == 'e')
			i++;

		last_c = c;
	}
	printf("The sequence ei occured %d times\n", i);


	return 0;
}

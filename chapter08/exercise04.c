#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	int letters, words;
	short int in_word; /* used as bool */
	letters = words = in_word = 0;

	while ((c = getchar()) != EOF) {

		if (isspace(c) || ispunct(c)) {
			in_word = 0;
		} else {
			letters++;

			if(!in_word) {
				in_word = 1;
				words++;
			}
		}
	}

	printf("\nAverage number of letters per word: %.2f\n",  (float) letters / words );

	return 0;
}

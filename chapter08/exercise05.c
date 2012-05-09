#include <stdio.h>

char get_choice(void);
int get_first(void);
int new_guess(int lower, int higher);

int main(void)
{
	char c;
	int guess, lower, upper;
	lower = 0;
	upper = 100;
	guess = new_guess(lower, upper);

	printf("Pick an integer from %d to %d. I will try to guess it.\n", lower, upper);
	printf("Uh...is your number %d?\n", guess);

	while ((c = get_choice()) != 'q') {

		switch(c) {
		case 'l':
			upper = guess;
			break;
		case 'h':
			lower = guess;
			break;
		case 'c':
			printf("\nI knew I could do it!\n");
			return 0;
		}
		guess = new_guess(lower, upper);
		if (guess == lower || guess == upper) {
			printf("You're a little cheater, aren't you ?\n");
			break;
		}

		printf("I guess %d. Is it lower, higher or correct?\n", guess);
	}

	printf("\nGoodbye\n");

	return 0;
}

char get_choice(void)
{
	int ch;

	printf("l) lower        c) correct\n");
	printf("h) higher       q) quit\n");

	while ((ch = get_first()) != 'l' && ch != 'h' && ch != 'c' && ch != 'q') {
		printf("Please respond with l, h, c or q.\n");
	}

	return ch;
}

int get_first(void)
{
	int ch = getchar();

	while (getchar() != '\n')
		continue;

	return ch;
}

int new_guess(int lower, int upper) {
	return (int) upper - ((upper - lower)*0.5);
}

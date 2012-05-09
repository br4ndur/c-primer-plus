#include <stdio.h>

char get_choice(void);
char get_first(void);
float get_float(void);
void dispose(void);

int main(void)
{
	char c, action;
	float num1, num2, res;
	action = res = 0;

	printf("The litle calculator.\n");
	while ((c = get_choice()) != 'q') {

		printf("Insert number one:");
		num1 = get_float();
		printf("Insert number two:");
		num2 = get_float();

		switch(c) {
		case 'a':
			action = '+';
			res = num1 + num2;
			break;
		case 's':
			action = '-';
			res = num1 - num2;
			break;
		case 'm':
			action = '*';
			res = num1 * num2;
			break;
		case 'd':
			action = '/';
			while(num2 == 0) {
				printf("Only Chuck Norris can divide by zero.\n");
				printf("Enter another number:");
				num2 = get_float();
			}
			res = num1 / num2;
			break;
		}
		printf("%.2f %c %.2f = %.2f\n", num1, action, num2, res);

	}

	printf("\nGoodbye\n");

	return 0;
}

char get_choice(void)
{
	char ch = 0;

	printf("a. add         s. subtrackt\n");
	printf("m. multiply    d. divide\n");
	printf("q. quit\n");

	while ((ch = get_first()) != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q') {
		printf("Not valid.\n");
		printf("Enter option(a,s,m,d, or q):");
	}

	return ch;
}

char get_first(void)
{
	char ch = getchar();
	dispose();

	return ch;
}

float get_float(void)
{
	float input;

	while (scanf("%f", &input) != 1) {
		dispose();
		printf("Not valid.\nEnter a number: ");
	}
	dispose();

	return input;
}

void dispose(void)
{
	while (getchar() != '\n')
		continue;
}

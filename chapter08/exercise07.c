#include <stdio.h>
#define OVERTIME_AFTER 40
#define OVERTIME_RATE 1.5
#define TAXRATE_ONE 15.0
#define TAXRATE_TWO 20.0
#define TAXRATE_THREE 25.0
#define TAX_ONE 300
#define TAX_TWO 150
#define HR "*****************************************************************\n"

int menu (void);
char get_answer(void);
int get_int(void);

int main(void)
{
	char option;
	int hours;
	float balance, tax, pay_rate;

	while (menu()) {
		balance = tax = 0;
		option = get_answer();

		switch (option) {
		case 'a':
			pay_rate = 8.75;
			break;
		case 'b':
			pay_rate = 9.33;
			break;
		case 'c':
			pay_rate = 10;
			break;
		case 'd':
			pay_rate = 11.2;
			break;
		case 'q':
			printf("bye!\n");
			return 0;
		default:
			printf("Reminder:\n");
			continue;
		}

		printf("Please enter the amount of hours:");
		hours = get_int();


		balance = hours * pay_rate;
		if(hours > OVERTIME_AFTER)
			balance += pay_rate * (OVERTIME_RATE - 1) * (hours - OVERTIME_AFTER);

		if(balance <= TAX_ONE) {
			tax += (TAXRATE_ONE / 100) * balance;
		} else {
			tax += (TAXRATE_ONE / 100) * TAX_ONE;

			if (balance <= (TAX_ONE + TAX_TWO)) {
				tax += (TAXRATE_TWO / 100) * (balance - TAX_ONE);
			} else {
				tax += (TAXRATE_TWO / 100) * (TAX_TWO);
				tax += (TAXRATE_THREE / 100) * (balance - TAX_TWO - TAX_ONE);
			}
		}
		printf("Gross:%.2f\n", balance);
		printf("Taxes:%.2f\n", tax);
		printf("Netto:%.2f\n\n", balance - tax);
	}

	return 0;
}

int menu (void)
{
	printf("%s", HR);
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("%-20s", "a) $8.75/hr");
	printf("%s", "b) $9.33/hr\n");
	printf("%-20s", "c) $10.00/hr");
	printf("%s", "d) $11.20/hr\n");
	printf("q) quit\n");
	printf("%s", HR);
	printf("Please select an option:");

	return 1;
}

char get_answer(void)
{
	int ch = getchar();

	while (getchar() != '\n')
		continue;

	return ch;
}

int get_int(void)
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1) {
		while ((ch = getchar()) != '\n')
			putchar(ch);  // dispose of bad input

		printf(" is not an integer.\nPlease enter an ");
		printf("integer value, such as 25, -178, or 3: ");
	}

	while (getchar() != '\n')
		continue;

	return input;
}

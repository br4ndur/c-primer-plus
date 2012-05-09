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

int main(void)
{
	int hours, option;
	float balance, tax, pay_rate;

	while (menu() && (scanf("%d", &option) == 1)) {
		balance = tax = 0;

		switch (option) {
		case 1:
			pay_rate = 8.75;
			break;
		case 2:
			pay_rate = 9.33;
			break;
		case 3:
			pay_rate = 10;
			break;
		case 4:
			pay_rate = 11.2;
			break;
		case 5:
			return 0;
		default:
			printf("Reminder:\n");
			continue;
		}

		printf("Please enter the amount of hours:");
		if(scanf("%d", &hours) != 1) return 0;


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
	printf("%-20s", "1) $8.75/hr");
	printf("%s", "2) $9.33/hr\n");
	printf("%-20s", "3) $10.00/hr");
	printf("%s", "4) $11.20/hr\n");
	printf("5) quit\n");
	printf("%s", HR);
	printf("Please select an option:");

	return 1;
}

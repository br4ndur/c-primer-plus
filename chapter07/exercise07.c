#include <stdio.h>
#define PAY_RATE 10
#define OVERTIME_AFTER 40
#define OVERTIME_RATE 1.5
#define TAXRATE_ONE 15.0
#define TAXRATE_TWO 20.0
#define TAXRATE_THREE 25.0
#define TAX_ONE 300
#define TAX_TWO 150

int main(void)
{
	int hours;
	float balance, tax;
	balance = tax = 0;

	printf("Please enter the amount of hours:");
	if(scanf("%d", &hours) == 1) {

		balance = hours * PAY_RATE;
		if(hours > OVERTIME_AFTER)
			balance += PAY_RATE * (OVERTIME_RATE - 1) * (hours - OVERTIME_AFTER);

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
		printf("Netto:%.2f\n", balance - tax);

	}

	return 0;
}

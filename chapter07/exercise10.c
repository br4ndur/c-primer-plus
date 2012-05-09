#include <stdio.h>
#define HR "*********************************************\n"

int menu (void);

int main(void)
{
	const float TAX_LINE[4] = {17850, 23900, 29750, 14875};
	const float TAX_RATE = 0.15;
	const float TAX_EXCESS = 0.28;
	float income, tax;
	int option;

	while (menu() && (scanf("%d", &option) == 1) && option != 5) {

		if(option > 0 && option < 5) {

			printf("Please enter total income:");
			if (scanf("%f", &income) != 1) {
				printf("Awkward, something went wrong...\n");
				return 0;
			}

			if(income <= TAX_LINE[option - 1]) {
				tax = TAX_RATE * income;
			} else {
				tax = TAX_RATE * TAX_LINE[option - 1];
				tax += TAX_EXCESS * (income - TAX_LINE[option - 1]);
			}

			printf("Taxes: %.2f\n\n", tax);
		} else {
			printf("Something went wrong, please try again. \n");
		}
	}

	return 0;
}

int menu (void)
{
	printf("%s", HR);
	printf("Specify a tax category:\n");
	printf("%-20s", "1) Single");
	printf("%s", "2) Head of Household\n");
	printf("%-20s", "3) Married, Joint");
	printf("%s", "4) Married, Separate\n");
	printf("5) quit\n");
	printf("%s", HR);
	printf("Please select an option:");

	return 1;
}

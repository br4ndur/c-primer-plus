#include <stdio.h>

int menu(float *arr);
void hr(char c);

int main(void)
{
	const char *names[3] = {"artichokes", "beets", "carrots"};
	const float PRICES[3] = {1.25, 0.65, 0.89};
	const float CHARGE[3] = {3.50, 10, 8};
	const float EXTRA = 0.1;
	const float WEIGHT_ONE = 5;
	const float WEIGHT_TWO = 20;
	const float DISCOUNT_RATE = 0.05;
	const float DISCOUNT_LIMIT = 100;
	float amount[3] = {0, 0, 0};
	char option;

	menu(&amount[0]);
	while ((scanf("%c", &option) == 1) && option !='q') {

		/* A switch - because the assignment says so. */
		switch(option) {
		case 'a':
			break;
		case 'b':
			break;
		case 'c':
			break;
		default:
			continue;
		}
		printf("Enter the amount of %s(in pounds): ", names[option-97]);
		scanf("%f", &amount[option-97]);
		menu(&amount[0]);
	}
	/* calc */
	float charges, discount, shipping, pounds, total;
	int i;
	charges = pounds = discount = total = 0;

	/* Charges */
	for(i = 0; i<3; i++) {
		charges += PRICES[i] * amount[i];
		pounds += amount[i];
	}

	/* Discount */
	if(charges >= DISCOUNT_LIMIT)
		discount = charges * DISCOUNT_RATE;

	/* Shipping */
	if(pounds <= WEIGHT_ONE)
		shipping = CHARGE[0];
	else if(pounds < WEIGHT_TWO)
		shipping = CHARGE[1];
	else
		shipping = CHARGE[2] + EXTRA * pounds;

	/* Grand total */
	total = charges + shipping - discount;

	/* Pretty Print */
	hr('*');
	printf("Purchase information\n");
	printf("%-12s%10s%9s%16s\n", "Name", "pounds", "price", "total");
	hr('-');
	for(i = 0; i<=2; i++) {
		printf("%-12s", names[i]);
		printf("%10.2f", amount[i]);
		printf("%8.2f$", PRICES[i]);
		printf("%15.2f$\n", (amount[i] * PRICES[i]));
	}
	hr('-');
	printf("%-12s%10.2f%24.2f$\n", "Sum", pounds, charges);

	if(discount>0)
		printf("%-15s %30.2f$\n", "discount", discount);

	printf("%-15s %30.2f$\n", "Shipping charge", shipping);
	hr('-');
	printf("%-15s %30.2f$\n", "Grand total", total);
	return 0;
}

int menu (float *arr)
{
	hr('*');
	printf("Select a grocery:\n");
	printf("%-15s", "a) Artichokes");
	printf("%.2f pounds are in basket.\n", arr[0]);
	printf("%-15s", "b) Beets");
	printf("%.2f pounds are in basket.\n", arr[1]);
	printf("%-15s", "c) Carrots");
	printf("%.2f pounds are in basket.\n\n", arr[2]);
	printf("q) exit the ordering process \n");
	hr('*');
	printf("Please select an option:");

	return 1;
}

void hr(char c)
{
	/* horizontal ruler */
	int i = 0;
	while(i++<48)
		printf("%c", c);
	printf("\n");
}

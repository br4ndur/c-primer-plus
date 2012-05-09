#include <stdio.h>
#define MOL_WEIGHT 3.0E-23
#define GRAM_PER_QUARTS 950

int main(void)
{
	float weight;
	printf("Please enter the amount of water in quarts:");
	scanf("%f", &weight);
	weight*=GRAM_PER_QUARTS; //convert quarts into grams
	printf("There are approximately %e molecules in %.2fkg of water!\n", (weight / MOL_WEIGHT), (weight * 0.001));

	return 0;
}

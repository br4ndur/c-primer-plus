#include <stdio.h>

int main(void)
{
	const float liters_per_gallon = 3.785;
	const float km_per_mile = 1.609;
	float miles, gallons;

	printf("Please enter miles travelled:");
	scanf("%f", &miles);
	printf("Please enter gallons of gasoline consumed:");
	scanf("%f", &gallons);

	float hundredkm = km_per_mile * miles * 0.01; /* calculate 100km */
	float liters = liters_per_gallon * gallons; /* calculate liter */

	printf("Miles per gallon: %.1f\n", (miles / gallons));
	printf("Liters per 100km: %.1f\n", (liters / hundredkm));

	return 0;
}

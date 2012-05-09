#include <stdio.h>

void print_content(double *arr);
const int AMOUNT = 8;

int main(void)
{
	double tmp, arr1[AMOUNT], arr2[AMOUNT];
	int i;

	printf("Input %d numbers\n", AMOUNT);
	for (i = tmp = 0; i < AMOUNT; i++) {
		printf("Insert number %d: ", i + 1);
		if(scanf("%lf", &arr1[i]) != 1) {
			printf("This is awkward, an error occured!\n");
			return 0;
		}
		arr2[i] += tmp += arr1[i];
	}

	printf("Array one holds:");
	print_content(arr1);
	printf("\nArray two holds:");
	print_content(arr2);
	printf("\n");

	return 0;
}

void print_content(double *arr)
{
	int i;
	for (i = 0; i < AMOUNT; i++)
		printf(" %.2lf", arr[i]);
}

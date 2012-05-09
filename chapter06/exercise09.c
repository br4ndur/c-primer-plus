#include <stdio.h>

long int sum(int n,int m);
int bye(void);

int main(void)
{
	int input1, input2;

	printf("Enter lower and upper integer limits: ");
	while (scanf("%d %d", &input1, &input2) == 2) {
		if(input2<=input1)
			return bye();

		printf("The sums of the squares from %d to %d is %ld\n",
			input1*input1, input2*input2, sum(input2, input1));
		printf("Enter next set of limits: ");
	}

	return bye();
}

/* sum of all numbers squared between n and m */
long int sum(int n,int m)
{
	return (2*(n*n*n-m*m*m) + 3*(n*n) + 3*(m*m) + (n - m)) / 6;
}

int bye(void)
{
	printf("Done\n");
	return 0;
}

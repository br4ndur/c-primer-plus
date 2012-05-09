#include <stdio.h>

int main(void)
{
	int input, odd, even, odd_sum, even_sum;
	float odd_avg, even_avg;
	odd = even = odd_sum = even_sum = 0;

	printf("Enter some integers(enter 0 to quit)\n");
	while ((scanf("%d", &input) == 1) && input != 0) {

		if (input % 2) {
			odd++;
			odd_sum += input;
		} else {
			even++;
			even_sum += input;
		}
	}

	printf("-%d-", '#');
	even_avg = (even > 0) ? (float) even_sum/even : 0;
	odd_avg = (odd > 0) ? (float) odd_sum/odd : 0;
	printf("\nTotal even numbers:%d\nAverage even numbers:%.2f\nTotal odd numbers:%d\nAverage odd numbers:%.2f\n", even, even_avg, odd, odd_avg);


	return 0;
}

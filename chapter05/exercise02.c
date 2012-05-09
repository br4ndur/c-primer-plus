#include <stdio.h>

int main(void)
{
	int max, i;

	printf("Please a integer:");
	scanf("%d", &i);
	max = i + 15;
	while(i<=max)
		printf("%d\n", i++);

	return 0;
}

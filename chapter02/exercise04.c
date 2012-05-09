#include <stdio.h>

void jolly(void);
void nobody(void);

int main(void)
{
	jolly();
	jolly();
	jolly();
	nobody();

	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void nobody(void)
{
	printf("Which nobody can deny!\n");
}
